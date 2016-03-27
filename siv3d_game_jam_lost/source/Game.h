//
// Game.h
//

#pragma once

// �Q�[���N���X
//   �Q�[���S��,��ɃQ�[���V�[�����Ǘ�����N���X
class Game
{
private:
    // �Q�[���V�[���C���X�^���X
    std::shared_ptr<Scene> scene;

    // ���݂̃V�[��
    eScene now_scene;
    // ���̃V�[��
    eScene next_scene;

    // �X�V
    void update();
    // �`��
    void draw();

    // �V�[���؂�ւ�
    void scene_changer();

public:
    Game();
    ~Game();

    // �Q�[���𑖂点��
    void run();
};
