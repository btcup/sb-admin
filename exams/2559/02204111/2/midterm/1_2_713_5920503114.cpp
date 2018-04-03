//5920503114 Thanathorn Ruenghirunwanit
#include<iostream>
using namespace std;
int main()
{
    int n,i=2,a=2;
    do
    {
        cout << "Enter N : " ;
       cin >> n; 
        }
        while(n<=0);
 cout << "The greatest factor of " << n << " is " ;
 for(i;i<=n;)
 {
            n = n/i ;
            if(n%i!=0)
            {
                      i++ ;
                      }
            if(n == 1)
            cout << i ;
            break;
            }
          cout << i ;  
 if(n==i-1)
 cout << " --> prime number " << endl;
    system("pause");
    return 0;
    }
