//C++ program to find sum, difference, product and quotient of 2 numbers
#include<iostream>
using namespace std;
int main(){

    int num1, num2, sum, product,difference, remainder;
    float quotient;
    cout<<"Enter number1: ";
    cin>>num1;
    cout<<"Enter number2: ";
    cin>>num2;

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1*num2;
    quotient = num1/num2;
    remainder = num1%num2;

    cout<<"The sum of 2 numbers are = "<<sum<<endl;
    cout<<"The difference of 2 numbers are = "<<difference<<endl;
    cout<<"The product of 2 numbers are = "<<product<<endl;
    cout<<"The quotient of 2 numbers are = "<<quotient<<endl;
    cout<<"The remainder of 2 numbers are = "<<remainder<<endl;


    return 0;
}