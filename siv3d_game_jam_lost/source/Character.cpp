//
// Character.cpp
//

#include "stdafx.h"

Character::Character()
{
    // ���W
    location = Vec3();
}

// 2D�e�N�X�`���ɂ��쐬
Character::Character(Texture* _texture)
{
    // ���W
    location = Vec3();
    // �e�N�X�`��
    texture = *_texture;
}

// 3D���f���ɂ��쐬
Character::Character(Mesh* _mesh)
{
    // ���W
    location = Vec3();
    // 3D���b�V��
    mesh = *_mesh;
}

Character::~Character()
{

}

// �X�V
void Character::update()
{

}

// �`��
void Character::draw()
{

}
