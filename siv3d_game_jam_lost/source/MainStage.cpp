//
// MainStage.cpp
//

#include "stdafx.h"

using namespace std;

MainStage::MainStage()
{
    // ���e�N�X�`��
    t_cow = Texture(L"Assets/Textures/Cow.png");
    if (!t_cow) assert(false && "���̃e�N�X�`�����ǂݍ��߂܂���ł���");
    // �ԃe�N�X�`��
    t_car = Texture(L"Assets/Textures/Car.png");
    if (!t_car) assert(false && "�Ԃ̃e�N�X�`�����ǂݍ��߂܂���ł���");
    // �w�i�e�N�X�`��
    t_background = Texture(L"Assets/Textures/Background.png");
    if (!t_background) assert(false && "�w�i�̃e�N�X�`�����ǂݍ��߂܂���ł���");

    // ���C���X�^���X�쐬
    character.push_back(make_shared<Cow>(Vec3(0.f, 0.f, 0.f) ,&t_cow));
    // �ԃC���X�^���X�쐬
    character.push_back(make_shared<Car>(Vec3(0.f, 0.f, 0.f), &t_car));
}

MainStage::~MainStage()
{

}

// �X�V
void MainStage::update(eScene* _next_scene)
{

}

// �`��
void MainStage::draw()
{

}
