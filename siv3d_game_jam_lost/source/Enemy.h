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
    // 2Dテクスチャによる作成
    Enemy(Vec3 _location, Texture* _texture);
    // 3Dモデルによる作成
    Enemy(Vec3 _location, Mesh* _mesh);
    ~Enemy();

    // 更新
    void update();
    // 描画
    void draw();
};
