#include<iostream>
using namespace std;
int main()
{
    int n,l;
    cout<<"Enter the number for which you want the multiplication table: "<<endl;
    cin>>n;
    cout<<"\nEnter the number till which you want your given number to be multiplied: "<<endl;
    cin>>l;
    for(int i=1;i<=l;i++)

        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    return 0;

}
