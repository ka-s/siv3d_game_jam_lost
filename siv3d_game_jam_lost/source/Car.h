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
    ~Car();

    // �X�V
    void update();
    // �`��
    void draw();
};
