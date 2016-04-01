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
    // 2Dテクスチャによる作成
    Car(Vec3 _location, Texture* _texture, float _size);
    ~Car();

    // 更新
    void update() override;
};
