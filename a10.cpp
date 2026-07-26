#include<iostream>
using namespace std;

inline int maxofthree(int a, int b, int c){
    if(a>>b && a>>c){
        return a;
    }
    else if(b>>c && b>>a){
        return b;
    }
    else
    return c; 

}
int main(){
    int a,b,c;
    cout << "Enter the value of a:" <<endl;
    cin >> a;
    cout << "Enter the value of b: " << endl;
    cin >> b;
    cout << "Enter the value of c:" << endl;
    cin >> c;
    cout << "Maximum value is:" << maxofthree(a,b,c);
    return 0;

}