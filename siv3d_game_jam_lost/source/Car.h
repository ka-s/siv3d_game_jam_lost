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
    Car(Vec3 _location, Texture* _texture, float _size);
    ~Car();

    // �X�V
    void update() override;
};
