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
    Enemy(Vec3 _location, Texture* _texture, float _size);
    ~Enemy();

    // �X�V
    void update() override;
};
