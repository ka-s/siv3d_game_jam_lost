//
// Player.cpp
//

#include "stdafx.h"

Player::Player()
{

}

// 2Dテクスチャによる作成
Player::Player(Vec3 _location, Texture* _texture, float _size) 
    : Character(_location, _texture, _size)
{

}

Player::~Player()
{

}

// 更新
void Player::update()
{
    // スクロール
    location.x += SCROLL_SPEED;

    // 上矢印キー
    if (Input::KeyUp.pressed)
    {
        location.z += speed;
    }
    // 下矢印キー
    if (Input::KeyDown.pressed)
    {
        location.z -= speed;
    }

    collision_box = Box(location, size);
}
