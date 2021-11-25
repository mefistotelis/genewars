/******************************************************************************/
// Free implementation of Bullfrog's GeneWars strategy game.
/******************************************************************************/
/** @file paletsel.hpp
 *     PaletteSelector classes.
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
#ifndef PALETSEL_HPP_
#define PALETSEL_HPP_

#include "bftypes.h"

class Thing;

enum PaletteSelectorMode { // type=int8_t
    PSM_BUILDINGS = 0,
    PSM_PLANTS,
    PSM_SHEPHERD,
    MAX_PSM,
};

class PaletteSelector { // sizeof=81
    Thing *activeThing;
    PaletteSelectorMode mode; // offset=4
    BBOOL active; // offset=5
    UBYTE top[3]; // offset=6
    SBYTE select[3]; // offset=9
    UBYTE mapTo[32]; // offset=12
    UBYTE error[32]; // offset=44
    UBYTE listSize; // offset=76
    UBYTE saveSelectFilter; // offset=77
    SBYTE x; // offset=78
    SBYTE slideDelta; // offset=79
    uint8_t selectFilterStored:1; // offset=80 bit=0
    uint8_t closed:1; // offset=80 bit=1
    uint8_t open:1; // offset=80 bit=2
public:
    PaletteSelector();
    void Init();
    void Create(Thing *tng1);
    void Close();
    void CreateBuildingMenu();
    void CreatePlantMenu();
    void CreateShepherdMenu();
    BBOOL Update(SWORD arg1);
    void Draw();
    void LockPalette();
    void UnlockPalette();
    SBYTE GetSelected();
    void SlideOpen();
    void SlideClose();
    BBOOL IsSelectActive();
    void ClearSelect();
    void SetSelectFilter(UBYTE arg1);
    void RestoreSelectFilter();
    //PaletteSelector(PaletteSelector &arg1); -- generate default copy constructor
};


#endif // PALETSEL_HPP_
/******************************************************************************/
