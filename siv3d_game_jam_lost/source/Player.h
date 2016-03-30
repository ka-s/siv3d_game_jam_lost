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
    Player(Vec3 _location, Texture* _texture);
    // 3Dモデルによる作成
    Player(Vec3 _location, Mesh* _mesh);
    ~Player();

    // 更新
    void update();
    // 描画
    void draw();
};
