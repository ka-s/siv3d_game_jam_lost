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

    // �J����
    camera.lookat = Vec3(0.f, 0.f, 16.f);
    camera.pos = Vec3(0.f, 4.f, -16.f);
    // �J�����X�N���[�����x
    camera_scroll_speed = SCROLL_SPEED;

    // �n�ʃ��b�V��
    ground = Plane(Vec3(), 32.f);
    ground2 = Plane(Vec3(), 32.f);
    // �w�i���b�V��
    background = Plane(Vec3(), 32.f);
    background2 = Plane(Vec3(), 32.f);
    // �w�i�X�N���[���C���f�b�N�X
    back_scroll_index = 0.f;
    // �w�i�X�N���[���^�C�~���O
    scroll_time = 32.f;
}

MainStage::~MainStage()
{

}

// �X�V
void MainStage::update(eScene* _next_scene)
{
    // �J�����̈ړ�
    camera.pos.x += camera_scroll_speed;
    camera.lookat.x += camera_scroll_speed;

    // �w�i�X�N���[������
    if (camera.pos.x > scroll_time)
    {
        back_scroll_index++;
        scroll_time += 32.f;
    }

    // ��Q���X�|�[��
    if (System::FrameCount() % 60 == 1)
    {
        obstacles.push_back(Box(Vec3(camera.pos.x + 32.f, 0.5f, Random(-16.f, 16.f)), 1));
    }

    // �L�����N�^�[�X�V
    for (auto index : character)
    {
        index->update();
    }
}

// �`��
void MainStage::draw()
{
    // �J�����`��
    Graphics3D::SetCamera(camera);

    // ��Q���`��
    for (auto index : obstacles)
    {
        index.draw();
    }

    // �L�����N�^�[�`��
    for (auto index : character)
    {
        index->draw();
    }

    // �n�ʃ��b�V���`��
    ground.asMesh()
        .translated(Vec3(32.f * back_scroll_index, 0.f, 0.f))
        .draw(Palette::Green);
    ground2.asMesh()
        .translated(Vec3(32.f * (back_scroll_index + 1.f), 0.f, 0.f))
        .draw(Palette::Green);
    // �w�i���b�V���`��
    ground.asMesh()
        .rotated(Radians(-90.f), 0.f, 0.f)
        .translated(Vec3(32.f * back_scroll_index, 16.f, 16.f))
        .draw(t_background);
    ground2.asMesh()
        .rotated(Radians(-90.f), 0.f, 0.f)
        .translated(Vec3(32.f * (back_scroll_index + 1.f), 16.f, 16.f))
        .draw(t_background);
}
