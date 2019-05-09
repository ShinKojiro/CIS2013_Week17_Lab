#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#define DEBUG false

int add_numbers(int &x, int y){
    return x+= y;
}

int main(){

    // bool TRUE = true;

    // if(DEBUG){
    //     cout << "Value of TRUE: " << TRUE << endl;
    // }

    // cout <<"This is something to the screen." << endl;
    // if(TRUE){
    //     cout << "... and more to the screen." << endl;
    // } else {
    //     cout << "...else less to screen." << endl;
    // }

    int num1 = 5;
    int num2 = 300;
    // int addr = &num2;
    int *ptr = &num2;

    cout << "Value of num2 is " << num2 << endl;
    cout << "Value of ptr is " << ptr << endl;

    num2 = 9999;
    cout << "Value of num2 is " << num2 << endl;
    cout << "Value of ptr is " << ptr << endl;
    ptr = &num1;
    cout << "Value of num2 is " << num2 << endl;
    cout << "Value of ptr is " << ptr << endl;
    num2 = 555;
    cout << "Value of num2 is " << num2 << endl;
    cout << "Value of num1 is " << num1 << endl;
    cout << "Value of ptr is " << ptr << endl;
    cout << "Value of *ptr is " << *ptr << endl;

    // cout << "Value of addr is " << addr << endl;
    // cout << "Adding 5 to 300 = " << add_numbers(num1, num2) << endl;
    // cout << "Adding 5 to 300 = " << add_numbers(num1, num2) << endl;
    // cout << "Adding 5 to 300 = " << add_numbers(num1, num2) << endl;

    return 0;
}