//
// Scene.h
//

#pragma once

// �V�[���N���X
//   �Q�[���V�[���̐e�N���X
class Scene
{
private:

public:
    Scene() {};
    ~Scene() {};

    // �X�V
    virtual void update(eScene* _next_scene) = 0;
    // �`��
    virtual void draw() = 0;
};
