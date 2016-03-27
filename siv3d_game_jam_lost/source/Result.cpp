//
// Result.cpp
//

#include "stdafx.h"

Result::Result()
{
    // �t�H���g
    f_text = Font(64);
    f_sub_text = Font(32);
}

Result::~Result()
{

}

// �X�V
void Result::update(eScene* _next_scene)
{
    // �N���b�N�Ń^�C�g����ʂ�
    if (Input::MouseL.clicked)
        *_next_scene = TITLE;
}

// �`��
void Result::draw()
{
    f_text(L"Game Over...").drawCenter(MAX_X / 2, MAX_Y / 2);
    f_sub_text(L"Click to Title").drawCenter(MAX_X / 2, MAX_Y / 2 + 128);
}
