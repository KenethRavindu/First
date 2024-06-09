//Area and perimeter of a ractangle
#include<iostream>
using namespace std;
int main(){

    int area, perimeter, length, width;
    cout<<"Enter length : ";
    cin>>length;
    cout<<"Enter width: ";
    cin>>width;

    area = length * width;
    perimeter = length + width;

    cout<<"The area of the rectangle is : "<<area<<endl;
    cout<<"The perimeter of the rectangle is : "<<perimeter<<endl;


    return 0;
}