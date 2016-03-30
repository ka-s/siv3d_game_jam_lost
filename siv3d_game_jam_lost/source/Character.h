//
// Character.h
//

#pragma once

// キャラクター基底クラス
class Character
{
private:
    // 座標
    Vec3 location;
    // テクスチャ
    Texture texture;
    // 3Dメッシュ
    Mesh mesh;

public:
    Character();
    // 2Dテクスチャによる作成
    Character(Vec3 _location, Texture* _texture);
    // 3Dモデルによる作成
    Character(Vec3 _location, Mesh* _mesh);
    ~Character();

    // 更新
    void update();
    // 描画
    void draw();
};
