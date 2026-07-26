#include<iostream>
using namespace std;
int main()
{
    int n,digit,temp,sum=0;
    cout << "Enter the integer:";
    cin >> n;

    temp=n;
    while(n>0)
    {
    digit = n%10;
    sum = sum + (digit*digit*digit);
    n= n/10;
    }

    if(temp==sum)
    {
        cout << "Number is armstrong";
    }
    else
    {
        cout << "Number is not armstrong";
    }
    
    return 0;
}