//
// Title.cpp
//

#include "stdafx.h"

Title::Title()
{
    // �^�C�g���e�L�X�g�̑傫���ݒ�
    f_title = Font(32);
    // �T�u�e�L�X�g�̑傫����ݒ�
    f_sub_text = Font(32);
}

Title::~Title()
{

}

// �X�V
void Title::update(eScene* _next_scene)
{
    // �N���b�N�Ń��C���Q�[����ʂ�
    if (Input::MouseL.clicked)
        *_next_scene = GAME;
}

// �`��
void Title::draw()
{
    // �^�C�g���e�L�X�g�`��
    f_title(F_TITLE).drawCenter(MAX_X / 2, MAX_Y / 2);
    // �T�u�e�L�X�g�`��
    f_sub_text(L"Click to Start").drawCenter(MAX_X / 2, MAX_Y / 2 + 128);
}
