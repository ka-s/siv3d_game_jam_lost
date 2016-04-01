//
// Character.cpp
//

#include "stdafx.h"

Character::Character()
{
    // 座標
    location = Vec3();
    // 板ポリゴン
    mesh = Plane();
}

// 2Dテクスチャによる作成
Character::Character(Vec3 _location, Texture* _texture, float _size)
{
    // 座標
    location = _location;
    // テクスチャ
    texture = *_texture;
    // サイズ
    size = _size;
    // 板ポリゴン
    mesh = Plane(Vec3(), size);
}

Character::~Character()
{

}

// 更新
void Character::update()
{

}

// 描画
void Character::draw()
{
    // メッシュ描画
    mesh.asMesh()
        .rotated(Radians(-90.f), 0.f, 0.f)
        .translated(location)
        .draw(texture);
}
