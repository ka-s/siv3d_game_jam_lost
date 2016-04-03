//
// Player.cpp
//

#include "stdafx.h"

Player::Player()
{

}

// 2D�e�N�X�`���ɂ��쐬
Player::Player(Vec3 _location, Texture* _texture, float _size) 
    : Character(_location, _texture, _size)
{

}

Player::~Player()
{

}

// �X�V
void Player::update()
{
    // �X�N���[��
    location.x += SCROLL_SPEED;

    // ����L�[
    if (Input::KeyUp.pressed)
    {
        location.z += speed;
    }
    // �����L�[
    if (Input::KeyDown.pressed)
    {
        location.z -= speed;
    }

    collision_box = Box(location, size);
}
