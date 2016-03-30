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

public:
    MainStage();
    ~MainStage();

    // 更新
    void update(eScene* _next_scene) override;
    // 描画
    void draw() override;
};
