
/* 
 * File:   main.cpp
 * Author: Sandra Salgado
 * Purpose: Miles per Gallon
 * Created on January 11, 2016, 12:52 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    unsigned short hldgll = 12,
            mlsdrv = 350,
            mpg;
    
    //calculate total miles per gallon
    mpg = mlsdrv / hldgll;
    cout << "Number of miles per gallon: " << mpg << endl;
    return 0;
}

