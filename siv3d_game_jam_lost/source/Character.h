//
// Character.h
//

#pragma once

// キャラクター基底クラス
class Character
{
protected:
    // 座標
    Vec3 location;
    // テクスチャ
    Texture texture;
    // 3Dメッシュ
    Plane mesh;
    // サイズ
    float size;
    // 移動速度
    float speed;
    // 当たり判定範囲
    Box collision_box;

public:
    Character();
    // 2Dテクスチャによる作成
    Character(Vec3 _location, Texture* _texture, float _size);
    ~Character();

    // 更新
    virtual void update() = 0;
    // 描画
    void draw();

    // 当たり判定取得
    Box get_collision();
};
