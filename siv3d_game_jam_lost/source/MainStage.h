//
// MainStage.h
//

#pragma once

// リザルトシーンクラス
class MainStage : public Scene
{
private:

public:
    MainStage();
    ~MainStage();

    // 更新
    void update(eScene* _next_scene) override;
    // 描画
    void draw() override;
};
