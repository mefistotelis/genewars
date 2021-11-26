/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file cvector.cpp
 *     Implementation of related functions.
 * @par Purpose:
 *     Unknown.
 * @par Comment:
 *     None.
 * @author   Tomasz Lis
 * @date     12 Nov 2008 - 05 Nov 2021
 * @par  Copying and copyrights:
 *     This program is free software; you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation; either version 2 of the License, or
 *     (at your option) any later version.
 */
/******************************************************************************/
#include "cvector.hpp"

Vector::Vector()
{
// code at 0001:00004bac
}

Vector::Vector(Vector const &src)
{
  // code at 0001:000013b8
  this->angle = src.angle;
  this->angleZ = src.angleZ;
  this->length = src.length;
}

Vector::Vector(SWORD nang, SWORD nangZ, SWORD nlen)
{
  // code at 0001:00040b04
  this->angle = nang;
  this->angleZ = nangZ;
  this->length = nlen;
}

Vector Vector::operator >>(int arg1)
{
// code at 0001:00049c6c
}

void Vector::Set(SWORD nang, SWORD nangZ, SWORD nlen)
{
// code at 0001:00049c30
}

SWORD Vector::ComputeComponentVector(ComponentVector &v1) const
{
// code at 0001:000038c8
}

Vector & Vector::operator =(Vector const &v1)
{
// code at 0001:00001388
}

ComponentVector ComponentVector::operator +=(ComponentVector v1)
{
// code at 0001:00040ab0
}

ComponentVector::ComponentVector()
{
  // code at 0001:00040a68
  this->dz = 0;
  this->dy = 0;
  this->dx = 0;
}

SWORD ComponentVector::ComputeVector(Vector &v1) const
{
// code at 0001:000409a0
}

SLONG ComponentVector::Length()
{
// code at 0001:00088f68
}

ComponentVector::ComponentVector(ComponentVector const &v1)
{
  // code at 0001:0003ffc4
  this->dx = v1.dx;
  this->dy = v1.dy;
  this->dz = v1.dz;
}

ComponentVector ComponentVector::operator +(ComponentVector v1)
{
// code at 0001:00049bc8
}

ComponentVector::ComponentVector(SWORD nx, SWORD ny, SWORD nz)
{
  // code at 0001:00049b84
  this->dx = nx;
  this->dy = ny;
  this->dz = nz;
}

void ComponentVector::Clear()
{
// code at 0001:00049b44
}

void ComponentVector::Set(SWORD nx, SWORD ny, SWORD nz)
{
// code at 0001:00004b70
}

ComponentVector & ComponentVector::operator =(ComponentVector const &v1)
{
// code at 0001:00001404
}

/******************************************************************************/
