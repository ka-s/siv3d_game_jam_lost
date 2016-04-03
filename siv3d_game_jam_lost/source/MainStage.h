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

    // �J����
    Camera camera;
    // �J�����X�N���[�����x
    float camera_scroll_speed;

    // ��Q��
    std::vector<Box> obstacles;
    // �X�|�[�����[�g
    int spawn_late;

    // �n�ʃ��b�V��
    Plane ground;
    Plane ground2;
    // �w�i���b�V��
    Plane background;
    Plane background2;
    // �w�i�X�N���[���C���f�b�N�X
    float back_scroll_index;
    // �w�i�X�N���[���^�C�~���O
    float scroll_time;

public:
    MainStage();
    ~MainStage();

    // �X�V
    void update(eScene* _next_scene) override;
    // �`��
    void draw() override;
};
