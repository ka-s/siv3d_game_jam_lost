//
// Game.cpp
//

#include "stdafx.h"

using namespace std;

Game::Game()
{
    // �^�C�g���������V�[���ɐݒ�
    scene = make_shared<Title>();
}

Game::~Game()
{

}

// �X�V
void Game::update()
{
    // �V�[���؂�ւ�
    scene_changer();

    // �V�[�����X�V
    scene->update(&next_scene);
}

// �`��
void Game::draw()
{
    // �V�[����`��
    scene->draw();
}

// �V�[���؂�ւ�
void Game::scene_changer()
{
    // �V�[���؂�ւ�
    if (now_scene != next_scene)
    {
        //switch (next_scene)
        //{
        //case TITLE:
        //    scene = make_shared<Title>();
        //    break;
        //case GAME:
        //    scene = make_shared<Play>();
        //    break;
        //case RESULT:
        //    scene = make_shared<Result>();
        //    break;
        //}
        // �V�[���ԍ��X�V
        now_scene = next_scene;
    }
}

// �Q�[���𑖂点��
void Game::run()
{
    update();
    draw();
}
