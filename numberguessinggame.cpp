#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
    int num, guess, no_of_guesses=1;
    srand(time(0));
    num = rand()%100 + 1;


    do{
        cout<<"Guess the number between 1 to 100\n";
        cin>>guess;
        if(guess>num){
            cout<<"Lower number please!\n";
        }
        else if(guess<num){
            cout<<"Higher number please!\n";
        }
        else{
            cout<<"You guessed it in "<<no_of_guesses<<" attempts\n"<<endl;
        }
        no_of_guesses++;
    }while(guess!=num);

    return 0;
}
