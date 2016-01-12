/* 
 * File:   main.cpp
 * Author: Sandra Salgado
 * Purpose: Stock Commission
 * Created on January 10, 2016, 9:59 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    unsigned short
    stckAln = 21.77,
            stckTtl,
            wtcomm,
            commttl,
            ttlpd;
    float comm = 0.02;
    
    //calculate stock price; bought 600
    stckTtl = 600 * stckAln;
    cout << "Amount paid for the stock alone: $" << stckTtl << endl;
    
    wtcomm = stckAln * comm;
    commttl = stckAln + wtcomm;
    cout << "Amount of the commission: $" << commttl << endl; 
    
    ttlpd = commttl + stckTtl;
    cout << "Total amount paid: $" << ttlpd << endl;
    
    return 0;
}