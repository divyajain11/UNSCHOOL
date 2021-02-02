/* Staircase detail

This is a staircase of size n=4
   #
  ##
 ###
####
Its base and height are both equal to n. It is drawn using # symbols and spaces. The last line is not preceded by any spaces.

Write a program that prints a staircase of size n.*/

#include <iostream>
using namespace std;
void staircase (int n)
{
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = i; j < (n-1) ; j++)
            cout << " ";
        for (int k = 0 ; k < (i+1) ; k++)
            cout << "#";
        cout << "\n";
    }
}
int main()
{
    int n;

    cin >> n;

    staircase(n);
    return 0;
}
