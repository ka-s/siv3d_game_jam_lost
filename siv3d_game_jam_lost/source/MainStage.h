//
// MainStage.h
//

#pragma once

// ���C���V�[���N���X
class MainStage : public Scene
{
private:
    // ���e�N�X�`��
    Texture t_cow;
    // �ԃe�N�X�`��
    Texture t_car;
    // �w�i�e�N�X�`��
    Texture t_background;

    // �L�����N�^�[�R���e�i
    std::vector<std::shared_ptr<Character>> character;

public:
    MainStage();
    ~MainStage();

    // �X�V
    void update(eScene* _next_scene) override;
    // �`��
    void draw() override;
};
