#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
using namespace std;

int main()
{
    int deposit_amount,betting_amount,number,num,i,temp,upper,lower;
    string name;
    cout<<"_________________________________\n\n\tCASINO GAME\n_________________________________\n";
    cout<<"\nEnter your name without spaces: ";
    cin>>name;
    cout<<"\nEnter deposit amount to play game: $ ";
    cin>>deposit_amount;
    cout<<"\n---------------------------------------------------------------------\n\t\tRULES OF THE GAME\n---------------------------------------------------------------------\n";
    cout<<"1.Choose any number between 1 to 10\n2.If you win, you will get 10 times of money you bet\n3.If you bet on wrong number, you will lose your betting amount\n---------------------------------------------------------------------\n";
    level:
    cout<<"Your current balance: $"<<deposit_amount;
    cout<<"\n"<<name<<", enter money to bet: $";
    cin>>betting_amount;
    if(betting_amount>deposit_amount)
    {
        cout<<"You don't have enough balance!";
        exit(1);
    }
    cout<<"Choose your number between 1 to 10: ";
    cin>>number;
    srand(time(0));
    lower=1;
    upper=10;
    for(i=0;i<1;i++)
    {
        num=(rand()%(upper-lower+1))+lower;
    }
    if(number==num)
    {
        cout<<"\nCONGRATULATIONS!\n Your chosen number was the winning number!";
        cout<<"\n"<<name<<", you won $"<<betting_amount*10;
        cout<<"\nYou now have $"<<deposit_amount+(betting_amount*10);
        deposit_amount=deposit_amount+(betting_amount*10);
    }
    else if(number>=lower && number<=upper)
    {
        cout<<"\nBETTER LUCK NEXT TIME!\n You lost $"<<betting_amount;
        cout<<"\nThe winning number was "<<num;
        cout<<"\n"<<name<<", you have $"<<deposit_amount-betting_amount;
        deposit_amount=deposit_amount-betting_amount;
    }
    else
        cout<<"Wrong Selection!";
    while(1)
    {
        cout<<"\nDo you want to play again?(1.yes/2.no)\n";
        cin>>temp;
        switch(temp)
        {
            case 1:goto level;
                   break;
            case 2:exit(1);
            default:cout<<"\nWrong Selection!";

        }
    }

     return 0;
}
