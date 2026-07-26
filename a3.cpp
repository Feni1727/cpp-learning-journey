#include<iostream>
using namespace std;
int main()
{
    float c,f;
    cout << "Enter the temperature in fahrenheit:";
    cin >> f;
    c=(f-32)/1.8;
    cout << "Celsius value is:" << c;

    return 0;
}
