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

    // 地面メッシュ
    ground = Plane(Vec3(), 32.f);
    // 背景メッシュ
    background = Plane(Vec3(), 32.f);
}

MainStage::~MainStage()
{

}

// 更新
void MainStage::update(eScene* _next_scene)
{
#ifdef _DEBUG

    // フリーカメラ
    //Graphics3D::FreeCamera();

#endif

    // キャラクター更新
    for (auto index : character)
    {
        index->update();
    }
}

// 描画
void MainStage::draw()
{
    // キャラクター描画
    for (auto index : character)
    {
        index->draw();
    }

    // 地面メッシュ描画
    ground.draw(Palette::Green);
    // 背景メッシュ描画
    ground.asMesh()
        .rotated(Radians(-90.f), 0.f, 0.f)
        .translated(Vec3(0.f, 16.f, 16.f))
        .draw(t_background);
}
