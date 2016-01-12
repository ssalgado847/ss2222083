
/* 
 * File:   main.cpp
 * Author: Sandra Salgado
 * Purpose: Sales Prediction
 * Created on January 11, 2016, 12:01 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float Etcst = .62,
             ttlEt,
            ttlSls;
    int sales = 4600000;
    
    //calculate sales
    ttlEt = sales * Etcst;
    ttlSls = sales - ttlEt;
    cout << "Total East Coast sales: $" << ttlSls << endl;
    return 0;
}

