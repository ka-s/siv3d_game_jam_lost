//
// Player.h
//

#pragma once

// �v���C���[���N���X
class Player : public Character
{
private:

public:
    Player();
    // 2D�e�N�X�`���ɂ��쐬
    Player(Vec3 _location, Texture* _texture);
    // 3D���f���ɂ��쐬
    Player(Vec3 _location, Mesh* _mesh);
    ~Player();

    // �X�V
    void update();
    // �`��
    void draw();
};
