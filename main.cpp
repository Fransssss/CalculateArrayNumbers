/**
 * Title:   Sum and Product of items in Array type double
 * Purpose: ** sum/multiply items in array with type double **
 * Class:   Enjoy the process
 * Author:  ** Fransiskus Agapa **
 */

#include <iostream>
#include "SumArray.h"
#include "ProductArray.h"
using std::cout;
using std::endl;
using std::cin;

int main() {
    double numDouble[] = {11.2, 12.4, 13.5, 14.6, 15.8};
    const int SIZE = 5;
    double totalArr;
    double sumdoubleArr;
    double prodtArr ;
    char select = ' ';

    cout << "\nThe numbers in array are ( 11.2, 12.4, 13.5, 14.6, 15.8 )"
            "\nInput [ 'S' or 's' ] for the Sum of the numbers and [ 'M' or 'm' ] for the Products" << endl;
    cin >> select;

    if( select == 'S' || select == 's')
    {
        totalArr = 0;
        sumdoubleArr = sumArr(numDouble, SIZE, totalArr);
        cout << " The sum of items in array is " << sumdoubleArr << endl;
    } else if( select == 'P' || select == 'p')
    {
        totalArr = 1;
        prodtArr = productArr(numDouble, SIZE, totalArr);
        cout << " The product of items in array is " << prodtArr << endl;
    } else
    {
        cout << " Invalid Input " << endl;
    }
    return 0;
}
