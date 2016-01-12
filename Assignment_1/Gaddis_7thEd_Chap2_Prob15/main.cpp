/* 
 * File:   main.cpp
 * Author: Sandra Salgado
 * Purpose: Triangle Pattern
 * Created on January 10, 2016, 10:39 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char letter = 'x';
    
    cout << "   " << letter << endl;
    cout << "  " << letter << letter << letter << endl;
    cout << " " << letter << letter << letter << letter << letter << endl;
    cout << letter << letter << letter << letter << letter << letter << letter 
            << endl;
    
    return 0;
}

