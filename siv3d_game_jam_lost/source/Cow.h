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
    Cow(Vec3 _location, Texture* _texture, float _size);
    ~Cow();

    // 更新
    void update() override;
};
