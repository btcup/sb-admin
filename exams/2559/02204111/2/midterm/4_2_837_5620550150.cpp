//5620550150 Nattapong Santipholthum
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int i,n;
   cout<<"Enter a positive integer:";
   cin>>n;
   if(n>0)
   {
   if(n%2==0)
   {
   if(n%2==0)
   {
   cout<<"Number of digit is 2 "<<endl;
   cout<<"Factor of are:"<<n<<endl;
   }
   else if(n%4==0)
    {
   cout<<"Number of digit is 4 "<<endl;
   cout<<"Factor of are:"<<n<<endl;
   }
    else if(n%6==0)
    {
   cout<<"Number of digit is 6 "<<endl;
   cout<<"Factor of are:"<<n<<endl;
   }
    else if(n%8==0)
    {
   cout<<"Number of digit is 8 "<<endl;
   cout<<"Factor of are:"<<n<<endl;
   }
    else if(n%10==0)
    {
   cout<<"Number of digit is 10 "<<endl;
   cout<<"Factor of are:"<<n<<endl;
   }
   }
   else if(n%2==1)
   {
    if(n%1==0)
   {
   cout<<"Number of digit is 1 "<<endl;
   cout<<"Factor of are:"<<n<<endl;
   }
    else if(n%3==0)
    {
   cout<<"Number of digit is 3 "<<endl;
   cout<<"Factor of are:"<<n<<endl;
   }    
    else if(n%5==0)
    {
   cout<<"Number of digit is 5 "<<endl;
   cout<<"Factor of are:"<<n<<endl;
   }
    else if(n%7==0)
    {
   cout<<"Number of digit is 7 "<<endl;
   cout<<"Factor of are:"<<n<<endl;
   }
    else if(n%9==0)
    {
   cout<<"Number of digit is 9 "<<endl;
   cout<<"Factor of are:"<<n<<endl;
   }
   }
   }
   else
   cout<<"Invalid number"<<endl;
   i=1;
   while(i<=n)
   {
   
   }
    
 system("pause");
 return 0;   
}
