#include <iostream>

using namespace std;

int main()
{
int choice;
float r=5.5,b=4,h=5;
int l=10,w=8;
cout <<"Enter Choice No.: ";
cin >>choice;
switch(choice)
{
    case 1:cout <<"\nArea Of Circle: "<<3.14*r*r;
    break;
    case 2:cout <<"\nArea Of Rectangle: "<<l*w;
    break;
    case 3:cout <<"\nArea Of Triangle: "<<0.5*b*h;
    break;
    default:cout <<"Enter Correct Choice No. ";
}
    return 0;
}
