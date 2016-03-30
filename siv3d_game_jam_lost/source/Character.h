//
// Character.h
//

#pragma once

// �L�����N�^�[���N���X
class Character
{
private:
    // ���W
    Vec3 location;
    // �e�N�X�`��
    Texture texture;
    // 3D���b�V��
    Mesh mesh;

public:
    Character();
    // 2D�e�N�X�`���ɂ��쐬
    Character(Texture* _texture);
    // 3D���f���ɂ��쐬
    Character(Mesh* _mesh);
    ~Character();

    // �X�V
    void update();
    // �`��
    void draw();
};
