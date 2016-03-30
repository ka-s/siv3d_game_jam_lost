//
// Character.cpp
//

#include "stdafx.h"

Character::Character()
{
    // 座標
    location = Vec3();
}

// 2Dテクスチャによる作成
Character::Character(Texture* _texture)
{
    // 座標
    location = Vec3();
    // テクスチャ
    texture = *_texture;
}

// 3Dモデルによる作成
Character::Character(Mesh* _mesh)
{
    // 座標
    location = Vec3();
    // 3Dメッシュ
    mesh = *_mesh;
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

}
