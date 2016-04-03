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
    character.push_back(make_shared<Cow>(Vec3(0.f, 1.f, 0.f) ,&t_cow, 2.f));
    // �ԃC���X�^���X�쐬
    character.push_back(make_shared<Car>(Vec3(-8.f, 1.f, 0.f), &t_car, 2.f));

    // �n�ʃ��b�V��
    ground = Plane(Vec3(), 32.f);
    // �w�i���b�V��
    background = Plane(Vec3(), 32.f);
}

MainStage::~MainStage()
{

}

// �X�V
void MainStage::update(eScene* _next_scene)
{
#ifdef _DEBUG

    // �t���[�J����
    //Graphics3D::FreeCamera();

#endif

    // �L�����N�^�[�X�V
    for (auto index : character)
    {
        index->update();
    }
}

// �`��
void MainStage::draw()
{
    // �L�����N�^�[�`��
    for (auto index : character)
    {
        index->draw();
    }

    // �n�ʃ��b�V���`��
    ground.draw(Palette::Green);
    // �w�i���b�V���`��
    ground.asMesh()
        .rotated(Radians(-90.f), 0.f, 0.f)
        .translated(Vec3(0.f, 16.f, 16.f))
        .draw(t_background);
}
