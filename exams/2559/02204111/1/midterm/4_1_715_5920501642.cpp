// 5920501642 Patcharawan Chaowanitkul

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,y=0,z=0;
   for(y=1;x>0;)
   {
                   cout << "input value : " ;
                   cin >> x;
                   if (x<0) break;
                   if (x>=10){
                              cout << " Invalid Input!!" <<endl;
                              continue;}
                   z=z*10;
                   z= z+x ;
                   y=y+1;
   }
   cout <<endl;
   cout << "your money is"  <<z<<" = " ;
   
   cout << z/y;
system ("pause");
return 0;
}   
