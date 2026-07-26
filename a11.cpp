#include<iostream>
using namespace std;

inline float si(float p, float r,float t){
    return (p*r*t)/100;

}
int main(){
    float p,r,t;
    cout << "Enter the value of p:" <<endl;
    cin >> p;
    cout << "Enter the value of r: "<< endl;
    cin >> r;
    cout << "Enter the value of t:" <<endl;
    cin >> t;
    cout << "Simple interest is:" << si(p,r,t);
    return 0;

}