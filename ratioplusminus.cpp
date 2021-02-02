/*Given an array of integers, calculate the ratios of its elements that are positive, 
negative, and zero. Print the decimal value of each fraction on a new line with 6 places after the decimal.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,zero=0,positive=0,negative=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if (arr[i]==0)
            zero++;
        else if(arr[i]<0)
            negative++;
        else
            positive++;
    }
    cout<<fixed<<setprecision(6)<<(float)positive/n<<endl;
    cout<<fixed<<setprecision(6)<<(float)negative/n<<endl;
    cout<<fixed<<setprecision(6)<<(float)zero/n<<endl;
    return 0;
}