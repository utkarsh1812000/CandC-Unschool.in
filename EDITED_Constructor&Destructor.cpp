#include<iostream>
using namespace std ;
class add
{
    int c=0,a,b;
    public:
        add(int a,int b)
        {
            cout<<"Constructor Called\n";
            c=a+b;
        }
void display()
   {
    cout<<"the sum of "<<a<<"and"<<b<<"is- "<<c;

   }
~add()
    {
    cout<<"\nDestructor called";
    }
};
class sub
{
    int c=0,b,a;
    public:
        sub(int a,int b)
        {
            cout<<"Constructor Called\n";
            c=a-b;
        }
void display()
{
    cout<<"the subtraction of "<<a<<"and"<<b<<"is- "<<c;
}
~sub()
    {
    cout<<"\nDestructor called";
    }
};
class mul
{
    int c=0,b,a;
    public:
        mul(int a,int b)
        {
            cout<<"Constructor Called\n";
            c=a*b;
        }
void display()
{
    cout<<"the multiplication of "<<a<<"and"<<b<<"is- "<<c;
}
~mul()
    {
    cout<<"\nDestructor called";
    }
};
class did
{
    int b,a;
    float c;
    public:
        did(int a,int b)
        {
            cout<<"Constructor Called\n";
            c=a/b;
        }
void display()
{
    cout<<"the division of "<<a<<"and"<<b<<"is- "<<c;
}
~did()
    {
    cout<<"\nDestructor called";
    }
};
class mod
{
    int c=0,b,a;
    public:
        mod(int a,int b)
        {
            cout<<"Constructor Called\n";
            c=a%b;
        }
void display()
{
    cout<<"the remainder of "<<a<<"and"<<b<<"is- "<<c;
}
~mod()
    {
    cout<<"\nDestructor called";
    }
};

int main()
{
    int n1,n2,opr;
    int i;
    label:;
    cout<<"ENTER THE FIRST NUMBER\n";
    cin>>n1;
    cout<<"ENTER THE SECOND NUMBER\n";
    cin>>n2;
    cout<<"SELECT THE OPERATOR\n 1.ADDITION \n 2.SUBSTRACTION \n 3.MULTIPLICATION \n 4.DIVISION \n 5.MODULOUS\n";
    cin>>opr;
    switch(opr)
    {
        case 1: {
                 add a1(n1,n2);
                 a1.display();
                 }
                 break;

        case 2: {
                 sub s1(n1,n2);
                 s1.display();
                 }
                 break;

        case 3: {
                 mul a1(n1,n2);
                 a1.display();
                }
                break;

        case 4: {
                 did s1(n1,n2);
                 s1.display();
                 }
                 break;

        case 5: {
                 mod a1(n1,n2);
                 a1.display();
                 }
                 break;
         default: {cout<<"\n WRONG OPTION!!!!!!!\n";}
       }
    cout<<"\nwant to solve another problem?(yes=1 & no=0)";
    cin>>i;
    if(i == 1)
    {
        goto label;
    }
return 0;
}
