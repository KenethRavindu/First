//C++ program to swap 2 numbers
#include<iostream>
using namespace std;
int main(){

    int num1, num2, temp;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout<<"After swapping num1 = "<<num1<<" and num2 = "<<num2<<endl;

    

    return 0;
}