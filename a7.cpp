// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,i;
//     cout << "Enter the number:";
//     cin >> n;
//     for(i=2;i<n-1;i++)
//     {
//         if(n%i==0)
//         {
//             cout << "Not a prime number";
//         }
//         else
//         {
//             cout << "Prime number";
//         }
//     }
//     return 0;

// }

#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout << "Enter the number of terms:";
    cin >> n;

    for(i=1;i<=n;i++)
    {
        int count=0;
        
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                count++;
            }
        if(count==2){
        cout << i;
        }
    }
    return 0;
}

