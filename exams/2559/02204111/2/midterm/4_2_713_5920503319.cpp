//5920503319_Sittichai_Jettanajaroenchai.
#include <iostream>
using namespace std;
int main()
{   int N,a=1,j,sum=0,f=0,g,b,c=1;
    cout << "Enter a positive integer : ";
    cin  >> N;
    if(N>0)
    {   do{   b=N;
        g=b/c;
        if(g>0)
        {f++;}
        sum=sum+f;
        c=c*10;
        }while(g>0);
           cout << "Number of digit is " << f << endl;         
           cout << "Factor of " << N << " are : " << endl;
     for (a=1;a<=N;a++)
      { j=N/a;
        if(a*j==N)
         cout << a << " * " << j << " = " << N << endl;    
      }
    }
     else cout << endl << "Invalid number !! " << endl;    
    system ("pause");
    return 0;   
}
