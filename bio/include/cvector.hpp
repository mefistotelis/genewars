/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file cvector.hpp
 *     Vector utility classes.
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
#ifndef CVECTOR_HPP_
#define CVECTOR_HPP_

#include "bftypes.h"

class ComponentVector;

class Vector { // sizeof=6
public:
    SWORD angle; // offset=0
    SWORD angleZ; // offset=2
    SWORD length; // offset=4
public:
    Vector();
    Vector(SWORD nang, SWORD nangZ, SWORD nlen);
    Vector operator >>(int arg1);
    Vector operator <<(int arg1);
    void Set(SWORD nang, SWORD nangZ, SWORD nlen);
    void Clear();
    SWORD ComputeComponentVector(ComponentVector &vec1) const;
    Vector(Vector const &vec1);
    Vector & operator =(Vector const &vec1);
};

class ComponentVector { // sizeof=6
public:
    SWORD dx; // offset=0
    SWORD dy; // offset=2
    SWORD dz; // offset=4
public:
    ComponentVector operator +(ComponentVector vec1);
    ComponentVector operator +=(ComponentVector vec1);
    ComponentVector operator -(ComponentVector vec1);
    ComponentVector operator -=(ComponentVector vec1);
    ComponentVector operator *=(int arg1);
    ComponentVector operator /=(int arg1);
    ComponentVector operator >>=(int arg1);
    ComponentVector operator <<=(int arg1);
    BBOOL operator ==(ComponentVector vec1);
    BBOOL operator !=(ComponentVector vec1);
    ComponentVector();
    ComponentVector(SWORD nx, SWORD ny, SWORD nz);
    void Set(SWORD nx, SWORD ny, SWORD nz);
    void Clear();
    SLONG Length();
    SWORD ComputeVector(Vector &vec1) const;
    ComponentVector(ComponentVector const &vec1);
    ComponentVector & operator =(ComponentVector const &vec1);
};

#endif // CVECTOR_HPP_
/******************************************************************************/
