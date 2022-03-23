/**
 * Purpose: **Implementation of function to multiply items in array **
 * Class:   Enjoy the Process
 * Author:  ** Fransiskus Agapa **
 */

#include "ProductArray.h"
#include <iostream>

double productArr(double doubleArr[], const int sizeArr, double productArr)
{
    productArr = 1;
    for(size_t i = 0; i < sizeArr; ++i)
    {
        productArr *= doubleArr[i];
    }
    return productArr;
}