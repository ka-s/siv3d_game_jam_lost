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
    Cow(Vec3 _location, Texture* _texture);
    // 3D���f���ɂ��쐬
    Cow(Vec3 _location, Mesh* _mesh);
    ~Cow();

    // �X�V
    void update();
    // �`��
    void draw();
};
