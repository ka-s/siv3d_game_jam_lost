//
// Enemy.cpp
//

#include "stdafx.h"

Enemy::Enemy()
{

}

// 2Dテクスチャによる作成
Enemy::Enemy(Vec3 _location, Texture* _texture, float _size) : Character(_location, _texture, _size)
{

}

Enemy::~Enemy()
{

}

// 更新
void Enemy::update()
{
    // スクロール
    location.x += SCROLL_SPEED;
}
