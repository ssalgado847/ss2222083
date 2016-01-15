
/* 
 * File:   main.cpp
 * Author: Sandra Salgado
 * Purpose: Truth table
 * Created on January 13, 2016, 9:33 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    bool x,y;
    cout << "x y !x !y x&&y x||y x^y x^y^y x^y^x "
            "!(x&&y) !x||!y !(x||y) !x&&!y "
            << endl;
    
    x = true;
    y = true;
    
    cout << (x?'T':'F') << " ";
    cout << (y?'T':'F') << "  ";
    cout << (!x?'T':'F') << "  ";
    cout << (!y?'T':'F') << "   ";
    cout << (x&&y?'T':'F') << "   ";
    cout << (x||y?'T':'F') << "   ";
    cout << (x^y?'T':'F') << "     ";
    
    cout << (x^y^y?'T':'F') << "      ";
    cout << (x^y^x?'T':'F') << "      ";
    cout << (!(x&&y)?'T':'F') << "      ";
    cout << (!x||!y?'T':'F') << "       ";
    cout << (!(x||y)?'T':'F') << "       ";
    cout << (!x&&!y?'T':'F') << "        ";
    cout << endl;

    return 0;
}

