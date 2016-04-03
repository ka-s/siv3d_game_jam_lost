//
// Cow.cpp
//

#include "stdafx.h"

Cow::Cow()
{

}

// 2Dテクスチャによる作成
Cow::Cow(Vec3 _location, Texture* _texture, float _size) : Player(_location, _texture, _size)
{
    speed = 0.4f;
}

Cow::~Cow()
{

}
