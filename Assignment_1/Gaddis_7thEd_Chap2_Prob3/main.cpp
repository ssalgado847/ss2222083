
/* 
 * File:   main.cpp
 * Author: Sandra Salgado
 * Purpose: Sales Tax
 * Created on January 11, 2016, 12:38 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    unsigned short prch = 52,
            tax1,
            tax2,
            ttlSt,
            ttlCnty;
            float sttax = .04,
            cntytax = .02;
            
    //calculate sales tax
            tax1 = prch * sttax;
            ttlSt = prch + tax1;
            cout << "Purchase total with state sales tax: $" << ttlSt << endl;
            
            tax2 = prch * cntytax;
            ttlCnty = prch + tax2;
            cout << "Purchase total with county sales tax: $" << ttlCnty <<
                    endl;
            return 0;
}

