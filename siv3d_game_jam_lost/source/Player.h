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
    ~Player();

    // 更新
    void update();
    // 描画
    void draw();
};
