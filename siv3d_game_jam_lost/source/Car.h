//
// Car.h
//

#pragma once

// 車クラス
class Car : public Enemy
{
private:

public:
    Car();
    ~Car();

    // 更新
    void update();
    // 描画
    void draw();
};
