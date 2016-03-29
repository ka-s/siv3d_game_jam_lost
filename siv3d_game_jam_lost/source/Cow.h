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
    ~Cow();

    // 更新
    void update();
    // 描画
    void draw();
};
