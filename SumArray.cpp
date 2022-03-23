/**
 * Purpose: *Implementation of function to sum items in array **
 * Class:   Enjoy the Process
 * Author:  ** Fransiskus Agapa **
 */

#include "SumArray.h"
#include <iostream>

double sumArr(double arrDouble[],const int sizeArr, double sumDoubleArr)
{
    for(size_t i = 0; i < sizeArr; ++i)
    {
        sumDoubleArr += arrDouble[i];
    }
    return sumDoubleArr;
}