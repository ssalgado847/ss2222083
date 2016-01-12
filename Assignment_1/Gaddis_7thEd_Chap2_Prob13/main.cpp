/* 
 * File:   main.cpp
 * Author: Sandra Salgado
 * Purpose: Circuit Board Price
 * Created on January 10, 2016, 11:03 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float
            profit = .4, 
            sllprc = 12.67, //selling price
            ttlprf,         // profit * selling price
            ttlprc;         // total
    
    //calculate profit 
    ttlprf= sllprc * profit;
    cout << "Profit made: $" << ttlprf << endl; 
    //calculate total
    ttlprc = sllprc + ttlprf;
    cout << "Total Selling Price: $" << ttlprc << endl;
    
    return 0;
}

