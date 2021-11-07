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

class Vector { // sizeof=6
    class Vector * operator=(class Vector *arg1);
    class Vector * Vector(class Vector *arg1);
    SWORD ComputeComponentVector(ComponentVector *arg1);
    void Clear();
    void Set(SWORD arg1, SWORD arg2, SWORD arg3);
    Vector operator<<(int arg1);
    Vector operator>>(int arg1);
    class Vector * Vector(SWORD arg1, SWORD arg2, SWORD arg3);
    class Vector * Vector();
    SWORD angle; // offset=0
    SWORD angleZ; // offset=2
    SWORD length; // offset=4
};

typedef class Vector Vector;

typedef class ComponentVector ComponentVector;

class ComponentVector { // sizeof=6
    class ComponentVector * operator=(class ComponentVector *arg1);
    class ComponentVector * ComponentVector(class ComponentVector *arg1);
    SWORD ComputeVector(Vector *arg1);
    SLONG Length();
    void Clear();
    void Set(SWORD arg1, SWORD arg2, SWORD arg3);
    class ComponentVector * ComponentVector(SWORD arg1, SWORD arg2, SWORD arg3);
    class ComponentVector * ComponentVector();
    BBOOL operator!=(ComponentVector arg1);
    BBOOL operator==(ComponentVector arg1);
    ComponentVector operator<<=(int arg1);
    ComponentVector operator>>=(int arg1);
    ComponentVector operator/=(int arg1);
    ComponentVector operator*=(int arg1);
    ComponentVector operator-=(ComponentVector arg1);
    ComponentVector operator-(ComponentVector arg1);
    ComponentVector operator+=(ComponentVector arg1);
    ComponentVector operator+(ComponentVector arg1);
    SWORD dx; // offset=0
    SWORD dy; // offset=2
    SWORD dz; // offset=4
};

Vector::Vector( short, short, short );
Vector Vector::operator >>( int );
void Vector::Set( short, short, short );
Vector::Vector();
short Vector::ComputeComponentVector( ComponentVector & ) const;
Vector::Vector( Vector const & );
Vector & Vector::operator =( Vector const & );

void ComponentVector::Set( short, short, short );
ComponentVector ComponentVector::operator +=( ComponentVector );
ComponentVector::ComponentVector();
short ComponentVector::ComputeVector( Vector & ) const;
ComponentVector ComponentVector::operator +( ComponentVector );
ComponentVector::ComponentVector( short, short, short );
void ComponentVector::Clear();
ComponentVector::ComponentVector( ComponentVector const & );
ComponentVector & ComponentVector::operator =( ComponentVector const & );
long ComponentVector::Length();

#endif // CVECTOR_HPP_
/******************************************************************************/
