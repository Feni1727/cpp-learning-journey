#include<iostream>
using namespace std;
int main()
{
    int num,digit,sum=0;
    cout << "Enter the integer:";
    cin >> num;

    while (num != 0)
    {
    digit = num % 10;
    sum = sum + digit;
    num= num / 10;
    }

    cout << "Sum is:" << sum;

    return 0;
}