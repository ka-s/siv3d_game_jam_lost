//
// Character.cpp
//

#include "stdafx.h"

Character::Character()
{
    // ���W
    location = Vec3();
    // �|���S��
    mesh = Plane();
}

// 2D�e�N�X�`���ɂ��쐬
Character::Character(Vec3 _location, Texture* _texture, float _size)
{
    // ���W
    location = _location;
    // �e�N�X�`��
    texture = *_texture;
    // �T�C�Y
    size = _size;
    // �|���S��
    mesh = Plane(Vec3(), size);
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
    // ���b�V���`��
    mesh.asMesh()
        .rotated(Radians(-90.f), 0.f, 0.f)
        .translated(location)
        .draw(texture);
}
