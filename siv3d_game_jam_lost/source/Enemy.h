//
// Enemy.h
//

#pragma once

// �G���N���X
class Enemy : public Character
{
private:

public:
    Enemy();
    // 2D�e�N�X�`���ɂ��쐬
    Enemy(Vec3 _location, Texture* _texture);
    // 3D���f���ɂ��쐬
    Enemy(Vec3 _location, Mesh* _mesh);
    ~Enemy();

    // �X�V
    void update();
    // �`��
    void draw();
};
