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
    character.push_back(make_shared<Cow>(Vec3(0.f, 0.f, 0.f) ,&t_cow));
    // 車インスタンス作成
    character.push_back(make_shared<Car>(Vec3(0.f, 0.f, 0.f), &t_car));
}

MainStage::~MainStage()
{

}

// 更新
void MainStage::update(eScene* _next_scene)
{

}

// 描画
void MainStage::draw()
{

}
