#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter the two numbers:";
    cin >> a >> b;
    char op;
    cout << "Enter the operator:(+,-,*,/)";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "Result:" << a+b;
        /* code */
        break;

    case '-':
        cout << "Result" << a-b;
        break;

    case '*':
        cout << "Result" << a*b;
        break;

    case '/':
        cout << "Result" << a/b;
        break;
        
    
    default:
        break;
    }


    return 0;
}