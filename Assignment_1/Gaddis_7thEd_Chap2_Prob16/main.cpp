/* 
 * File:   main.cpp
 * Author: Sandra Salgado
 * Purpose: Diamond Pattern
 * Created on January 10, 2016, 10:11 PM
 */

#include <iostream>

using namespace std;


 
 //Execution begins here
int main(int argc, char** argv)
{
 char letter='x';

///Output results
 cout << "   " << letter << endl;
 cout << "  " << letter << letter << letter << endl;
 cout << " " << letter << letter << letter << letter << letter << endl;
 cout << letter << letter << letter << letter << letter << letter << letter <<
 endl;
 cout << " " << letter << letter << letter << letter << letter << endl;
 cout << "  " << letter << letter << letter << endl;
 cout << "   " << letter << endl;
 
    return 0;
}

