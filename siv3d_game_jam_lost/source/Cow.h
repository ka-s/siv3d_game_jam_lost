//
// Cow.h
//

#pragma once

// 牛クラス
class Cow : public Player
{
private:

public:
    Cow();
    // 2Dテクスチャによる作成
    Cow(Vec3 _location, Texture* _texture);
    // 3Dモデルによる作成
    Cow(Vec3 _location, Mesh* _mesh);
    ~Cow();

    // 更新
    void update();
    // 描画
    void draw();
};
