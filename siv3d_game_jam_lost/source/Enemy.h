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
    Enemy(Vec3 _location, Texture* _texture, float _size);
    ~Enemy();

    // 更新
    void update() override;
};
