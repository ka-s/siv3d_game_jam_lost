//
// Title.h
//

#pragma once

// �^�C�g���V�[���N���X
class Title : public Scene
{
private:
    // �^�C�g���e�L�X�g
    Font f_title;
    // �T�u�e�L�X�g
    Font f_sub_text;

public:
    Title();
    ~Title();

    // �X�V
    void update(eScene* _next_scene) override;
    // �`��
    void draw() override;
};
