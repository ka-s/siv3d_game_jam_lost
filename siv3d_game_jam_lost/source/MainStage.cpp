//
// MainStage.cpp
//

#include "stdafx.h"

using namespace std;

MainStage::MainStage()
{
    // 牛テクスチャ
    t_cow = Texture(L"Assets/Textures/Cow.png");
    if (!t_cow) assert(false && "牛のテクスチャが読み込めませんでした");
    // 車テクスチャ
    t_car = Texture(L"Assets/Textures/Car.png");
    if (!t_car) assert(false && "車のテクスチャが読み込めませんでした");
    // 背景テクスチャ
    t_background = Texture(L"Assets/Textures/Background.png");
    if (!t_background) assert(false && "背景のテクスチャが読み込めませんでした");

    // 牛インスタンス作成
    character.push_back(make_shared<Cow>(Vec3(0.f, 1.f, 0.f) ,&t_cow, 2.f));
    // 車インスタンス作成
    character.push_back(make_shared<Car>(Vec3(-8.f, 1.f, 0.f), &t_car, 2.f));

    // カメラ
    camera.lookat = Vec3(0.f, 0.f, 16.f);
    camera.pos = Vec3(0.f, 4.f, -16.f);
    // カメラスクロール速度
    camera_scroll_speed = SCROLL_SPEED;

    // 地面メッシュ
    ground = Plane(Vec3(), 32.f);
    ground2 = Plane(Vec3(), 32.f);
    // 背景メッシュ
    background = Plane(Vec3(), 32.f);
    background2 = Plane(Vec3(), 32.f);
    // 背景スクロールインデックス
    back_scroll_index = 0.f;
    // 背景スクロールタイミング
    scroll_time = 32.f;
}

MainStage::~MainStage()
{

}

// 更新
void MainStage::update(eScene* _next_scene)
{
    // カメラの移動
    camera.pos.x += camera_scroll_speed;
    camera.lookat.x += camera_scroll_speed;

    // 背景スクロール処理
    if (camera.pos.x > scroll_time)
    {
        back_scroll_index++;
        scroll_time += 32.f;
    }

    // 障害物スポーン
    if (System::FrameCount() % 60 == 1)
    {
        obstacles.push_back(Box(Vec3(camera.pos.x + 32.f, 0.5f, Random(-16.f, 16.f)), 1));
    }

    // キャラクター更新
    for (auto index : character)
    {
        index->update();
    }
}

// 描画
void MainStage::draw()
{
    // カメラ描画
    Graphics3D::SetCamera(camera);

    // 障害物描画
    for (auto index : obstacles)
    {
        index.draw();
    }

    // キャラクター描画
    for (auto index : character)
    {
        index->draw();
    }

    // 地面メッシュ描画
    ground.asMesh()
        .translated(Vec3(32.f * back_scroll_index, 0.f, 0.f))
        .draw(Palette::Green);
    ground2.asMesh()
        .translated(Vec3(32.f * (back_scroll_index + 1.f), 0.f, 0.f))
        .draw(Palette::Green);
    // 背景メッシュ描画
    ground.asMesh()
        .rotated(Radians(-90.f), 0.f, 0.f)
        .translated(Vec3(32.f * back_scroll_index, 16.f, 16.f))
        .draw(t_background);
    ground2.asMesh()
        .rotated(Radians(-90.f), 0.f, 0.f)
        .translated(Vec3(32.f * (back_scroll_index + 1.f), 16.f, 16.f))
        .draw(t_background);
}
