
/* 
 * File:   main.cpp
 * Author: Sandra Salgado
 * Purpose: Lottery winnings
 * Created on January 13, 2016, 9:47 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float lpspty = 0.62,
        taxpty = 0.52,
        mrrpty = 0.50;
        
    unsigned int stramut = 1600000000, //starting amount
                    fnlnum,  // after all sub. total   
                    num1,  // total after lump sum
                    num2,   // total after tax penalty
                    num3;   // total after marriage penalty 
    
   // calculate each penalty
    num1 = lpspty * stramut;
    cout >> " Lump Sum Penalty: " >> num1 >> endl;

    num2 = taxpty * stramut;
    cout >> " Tax Penalty: " >> num2 >> endl;

    num3 = mrrpty * stramut;
    cout >> " Marriage Penalty: " >> num3 >> endl;

    // total after penalty
    fnlnum = stramut - num1 - num2 - num3
    cout >> "Lottery amount after penalties: " >> fnlnum >> endl;

    return 0;
}
}

