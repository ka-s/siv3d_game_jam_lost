//
// MainStage.h
//

#pragma once

// ���C���V�[���N���X
class MainStage : public Scene
{
private:

public:
    MainStage();
    ~MainStage();

    // �X�V
    void update(eScene* _next_scene) override;
    // �`��
    void draw() override;
};
