//
// Player.h
//

#pragma once

// プレイヤー基底クラス
class Player : public Character
{
private:

public:
    Player();
    // 2Dテクスチャによる作成
    Player(Vec3 _location, Texture* _texture, float _size);
    ~Player();

    // 更新
    void update() override;
};
