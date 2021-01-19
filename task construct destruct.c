//task: constructor and destructor for calculator
#include <iostream>

using namespace std;
class cal
{
    int x,y,i;
public:
    cal()
    {
        cout<<"To choose an operation, press it's corresponding number:\n 1.Addition 2.Subtraction 3.Multiplication 4.Division 5.Modulus\n";
        cin>>i;
        switch (i)
        {
        case (1):cout<<"Addition\n Enter two numbers:\n";
               break;
        case (2):cout<<"Subtraction\n Enter two numbers:\n";
               break;
        case (3):cout<<"Multiplication\n Enter two numbers:\n";
               break;
        case (4):cout<<"Division\n Enter two numbers:\n";
               break;
        case (5):cout<<"Modulus\n Enter two numbers:\n";
               break;
        }
    }
void get()
{
    switch (i)
    {


    case (1):
        {
            cin>>x>>y;
            cout<<"Addition of "<<x<<" and "<<y<<" = "<<x+y;
            break;
        }
    case (2):
        {
            cin>>x>>y;

            cout<<"Subtraction of "<<x<<" and "<<y<<" = "<<x-y;
            break;
        }
    case (3):
        {
            cin>>x>>y;
            cout<<"Multiplication of "<<x<<" and "<<y<<" = "<<x*y;
            break;
        }
    case (4):
        {
            cin>>x>>y;
            cout<<"Division of "<<x<<" and "<<y<<" = "<<x/y;
            break;
        }
    case (5):
        {
            cin>>x>>y;
            cout<<"Modulus of "<<x<<" and "<<y<<" = "<<x%y;
            break;

        }
    }
}
~cal()
{
    cout<<"\nDestructor called";
}
};

int main()
{
cal obj;
obj.get();
return 0;
}
