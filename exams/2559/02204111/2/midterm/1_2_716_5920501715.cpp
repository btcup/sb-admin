//5920501715 Wisallaya Kiattikhunrat

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i=2,max=0,a;
   do
   {
        cout<<"Enter N : ";
        cin>>n;
   }
   while(n<0);
  while(i<n)
   {
                    if(n%i==0)
                      max=i;
                    while(i<max)
                      if(max%a==0)
                      max=a;
                      a++;
                      i++;
                     
   } 
   cout<<"The great factor of "<<n<<" is "<<max<<endl;
   system("pause");
   return 0;
}
