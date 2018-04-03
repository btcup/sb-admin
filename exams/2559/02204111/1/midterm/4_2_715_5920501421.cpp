// 5920501421 Jarukan Janta 
#include <iostream >
using namespace std;
int main ()
{
      int a,b,c,d , M , m,t;
      cout <<"Enter 1st number : " ;
      cin >> a ;
      cout <<"Enter 2nd number : " ;
      cin >> b ;
      cout <<"Enter 3rd number : " ;
      cin >> c ;
      cout <<"Enter 4th number : " ;
      cin >> d ;
     if(a<b && a<c && a<d)
           {    m =a ;
                cout <<"1st number is Minimum" << endl;
            }
      else if(b<d && b<c && b<a )
       { m = b ;
           cout <<"2nd number is Minimum" << endl;
        }
      else if(c<a && c<b && c<d)
         {  m = c ;
           cout <<"3rd number is Minimum" << endl;
           }
      else if(d<a && d<b && d<c )
        {  m = d ;
           cout <<"4th number is Minimum" << endl;
        }  
      if (a>b && a>c && a>d )
       {  M =a ;
          cout <<"1st number is Maximum" << endl;
          }
      else if(b>a && b>c && b>d )
         {   M = b ;
          cout <<"2nd number is Maximum" << endl;
          }
      else if(c>a && c>b && c>d ) 
         {  M =c ;
           cout <<"3rd number is Maximum" << endl;
           }
          
      else if (d>a && d>b && d >c )
      {
             M = d;
           cout <<"4th number is Maximum" << endl;
           }
           t = M-m ;
      cout <<"The difference betwen Min. and Max is " << t << endl;
     
           
      system("pause");
      return 0 ;
      
}
