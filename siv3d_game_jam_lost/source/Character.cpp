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
Character::Character(Vec3 _location, Texture* _texture)
{
    // ���W
    location = _location;
    // �e�N�X�`��
    texture = *_texture;
}

// 3D���f���ɂ��쐬
Character::Character(Vec3 _location, Mesh* _mesh)
{
    // ���W
    location = _location;
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
