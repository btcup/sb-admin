#include<iostream>
using namespace std;
int main()
{
         int denum,b,i;
         for(i=0;i<=1;i++){ 
         cout<<"Enter decimal number : ";
         cin>>denum;
         if(denum<0)
         break;
         cout<<"Enter base (2-9) : ";
         cin>>b;
         cout<<denum<<"b10"<<" is "<<endl;
         }
         system("pause");
         return 0;
}
