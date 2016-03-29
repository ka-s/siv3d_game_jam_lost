//
// Enemy.h
//

#pragma once

// 敵基底クラス
class Enemy : public Character
{
private:

public:
    Enemy();
    ~Enemy();

    // 更新
    void update();
    // 描画
    void draw();
};
