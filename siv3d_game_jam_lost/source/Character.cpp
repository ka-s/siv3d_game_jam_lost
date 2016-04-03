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
    // �ړ����x
    speed = 1.f;
    // �����蔻��͈�
    collision_box = Box(Vec3(), size);
}

Character::~Character()
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

#ifdef _DEBUG

    // �f�o�b�O�p�����蔻��`��
    collision_box.drawForward(Color(255, 255, 255, 128));

#endif
}

// �����蔻��擾
Box Character::get_collision()
{
    return collision_box;
}
