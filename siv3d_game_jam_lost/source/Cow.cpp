//
// Cow.cpp
//

#include "stdafx.h"

Cow::Cow()
{

}

// 2D�e�N�X�`���ɂ��쐬
Cow::Cow(Vec3 _location, Texture* _texture, float _size) : Player(_location, _texture, _size)
{
    speed = 0.4f;
}

Cow::~Cow()
{

}
