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
    Vector & operator =(Vector const &v1);
    Vector(Vector const &v1);
    SWORD ComputeComponentVector(ComponentVector &v1) const;
    void Clear();
    void Set(SWORD nang, SWORD nangZ, SWORD nlen);
    Vector operator <<(int arg1);
    Vector operator >>(int arg1);
    Vector(SWORD nang, SWORD nangZ, SWORD nlen);
    Vector();
    SWORD angle; // offset=0
    SWORD angleZ; // offset=2
    SWORD length; // offset=4
};

class ComponentVector { // sizeof=6
    ComponentVector & operator =(ComponentVector const &v1);
    ComponentVector(class ComponentVector const &v1);
    SWORD ComputeVector(Vector &v1) const;
    SLONG Length();
    void Clear();
    void Set(SWORD nx, SWORD ny, SWORD nz);
    ComponentVector(SWORD nx, SWORD ny, SWORD nz);
    ComponentVector();
    BBOOL operator !=(ComponentVector v1);
    BBOOL operator ==(ComponentVector v1);
    ComponentVector operator <<=(int v1);
    ComponentVector operator >>=(int v1);
    ComponentVector operator /=(int v1);
    ComponentVector operator *=(int v1);
    ComponentVector operator -=(ComponentVector v1);
    ComponentVector operator -(ComponentVector v1);
    ComponentVector operator +=(ComponentVector v1);
    ComponentVector operator +(ComponentVector v1);
    SWORD dx; // offset=0
    SWORD dy; // offset=2
    SWORD dz; // offset=4
};

#endif // CVECTOR_HPP_
/******************************************************************************/
