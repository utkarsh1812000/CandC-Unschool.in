#include <iostream>

using namespace std;

int main()
{
    int x,y;
    int opration;
    int i=0;
    cout<<"\n enter first number: ";
    cin>>x;
    cout<<"\n enter second number: ";
    cin>>y;
    cout<<"\n 1.ADDITION \n 2.SUBSTRACTION \n 3.MULTIPLICATION \n 4.DIVISION \n 5.MODULUS \n 6.CONTINUE \n 7.EXIT";
    do
    {
        cout<<"\nEnter a choice no.: ";
        cin>>opration;
        switch(opration)
    {
    case 1:cout<<"\nConstructor Called!!";
           cout<<"\n addition of both oprands is: "<<x+y;
           break;
    case 2:cout<<"\nConstructor Called!!";
           cout<<"\n substraction of both oprands is: "<<x-y;
           break;
    case 3:cout<<"\nConstructor Called!!";
           cout<<"multiplication of both oprands is: "<<x*y;
           break;
    case 4:cout<<"\nConstructor Called!!";
           cout<<"\n division of both oprands is: "<<x/y;
           break;
    case 5:cout<<"\nConstructor Called!!";
           cout<<"\n modulus of both oprands is:"<<x%y;
           break;
    case 6:cout<<"\n If you want to do any operation listed above press a no. b/w 1 to 5!!";
           break;
    case 7:cout<<"\nDestructor called!!";
           cout<<"EXITING......";
           break;
    default:cout<<"Wrong operation No. selected!!";
    }
    }
    while(opration!=7);


return 0;

}
