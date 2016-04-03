//
// MainStage.h
//

#pragma once

// メインシーンクラス
class MainStage : public Scene
{
private:
    // 牛テクスチャ
    Texture t_cow;
    // 車テクスチャ
    Texture t_car;
    // 背景テクスチャ
    Texture t_background;

    // キャラクターコンテナ
    std::vector<std::shared_ptr<Character>> character;

    // カメラ
    Camera camera;
    // カメラスクロール速度
    float camera_scroll_speed;

    // 障害物
    std::vector<Box> obstacles;
    // スポーンレート
    int spawn_late;

    // 地面メッシュ
    Plane ground;
    Plane ground2;
    // 背景メッシュ
    Plane background;
    Plane background2;
    // 背景スクロールインデックス
    float back_scroll_index;
    // 背景スクロールタイミング
    float scroll_time;

public:
    MainStage();
    ~MainStage();

    // 更新
    void update(eScene* _next_scene) override;
    // 描画
    void draw() override;
};
