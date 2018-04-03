//5720551361 Nuttanon Inpoomes
#include<iostream>
using namespace std;
int main()
{
int N,i,e;
cout<<"Enter a positive integer : "<<endl;
cin>>N;
if(N>0)
   {
      for(i=1;i<=N;i++)
      {
              cout<<"Number of digit is "<<endl;
              break;
      }
              cout<<"Factor of "<<N<< "are :"<<endl;
      for(i=1;i<=N;i++)
   {
   if(N%i==0)
     cout<<i<<" * ";
   }
    for(i=1;i<=N;i--)
      if(N%i==0)
      
}

   else if(N<=0)
   cout<<"Invalid number!!"<<endl;
    system("pause");
    return 0;
}
