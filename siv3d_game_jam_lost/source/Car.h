//
// Car.h
//

#pragma once

// �ԃN���X
class Car : public Enemy
{
private:

public:
    Car();
    // 2D�e�N�X�`���ɂ��쐬
    Car(Vec3 _location, Texture* _texture);
    // 3D���f���ɂ��쐬
    Car(Vec3 _location, Mesh* _mesh);
    ~Car();

    // �X�V
    void update();
    // �`��
    void draw();
};
