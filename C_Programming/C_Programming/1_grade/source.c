//
//  source.c
//  C_Programming
//
//  Created by SamoYed on 5/16/24.
//

#include <stdio.h>

float inch_to_cm(float inch)
{
    return inch * 2.54;
}

float circum(float r)
{
    float cir = 0.0;
    cir = 3.14 * 2 * r;
    return cir;
}

float circle_area(float r)
{
    float cir = 0.0;
    cir = 3.14 * r * r;
    return cir;
}
