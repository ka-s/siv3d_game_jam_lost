//
// Car.cpp
//

#include "stdafx.h"

Car::Car()
{

}

// 2Dテクスチャによる作成
Car::Car(Vec3 _location, Texture* _texture, float _size) : Enemy(_location, _texture, _size)
{

}

Car::~Car()
{

}
