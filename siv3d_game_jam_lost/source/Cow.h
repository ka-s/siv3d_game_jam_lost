//
// Cow.h
//

#pragma once

// ���N���X
class Cow : public Player
{
private:

public:
    Cow();
    // 2D�e�N�X�`���ɂ��쐬
    Cow(Vec3 _location, Texture* _texture, float _size);
    ~Cow();

    // �X�V
    void update() override;
};
