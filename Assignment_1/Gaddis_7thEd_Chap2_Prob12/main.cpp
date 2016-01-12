/* 
 * File:   main.cpp
 * Author: Sandra Salgado
 * Purpose: Land Calculation 
 * Created on January 10, 2016, 11:52 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    unsigned short aceone = 43560; // one acre = 43,560 square feet
    int    trctlnd = 389767; // tract of land = 389,767 square feet
    float ttlace;
    
   // calculate total acres
    ttlace = trctlnd / aceone;
    cout << "Total number of acres: " << ttlace << endl;
    return 0;
}

