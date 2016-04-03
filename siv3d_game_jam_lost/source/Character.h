//
// Character.h
//

#pragma once

// �L�����N�^�[���N���X
class Character
{
protected:
    // ���W
    Vec3 location;
    // �e�N�X�`��
    Texture texture;
    // 3D���b�V��
    Plane mesh;
    // �T�C�Y
    float size;
    // �ړ����x
    float speed;

public:
    Character();
    // 2D�e�N�X�`���ɂ��쐬
    Character(Vec3 _location, Texture* _texture, float _size);
    ~Character();

    // �X�V
    virtual void update() = 0;
    // �`��
    void draw();
};
