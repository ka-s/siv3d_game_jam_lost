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
    Car(Vec3 _location, Texture* _texture);
    // 3Dモデルによる作成
    Car(Vec3 _location, Mesh* _mesh);
    ~Car();

    // 更新
    void update();
    // 描画
    void draw();
};
