//
// Enemy.cpp
//

#include "stdafx.h"

Enemy::Enemy()
{

}

// 2D�e�N�X�`���ɂ��쐬
Enemy::Enemy(Vec3 _location, Texture* _texture, float _size) : Character(_location, _texture, _size)
{

}

Enemy::~Enemy()
{

}

// �X�V
void Enemy::update()
{
    // �X�N���[��
    location.x += SCROLL_SPEED;
}
