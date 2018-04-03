//5920500964 Affan leebumroong
#include<iostream>
using namespace std;
int main()
{
    int n,x,y,i;
    cout<<"Enter the integer"<<endl;
    cin>>n;
   
    
           
          if  (n>10000){
         n=n/10000;
         x=x%n;
         i=5;}
         else if(n>1000){
         n=n/1000;
         x=x%n;
         i=4;}
         else if(n>100){
          x=x/100;
          y=y%x;
          i=3;}
         else if(n>10){
          n=n/10;
          i=2;}
          else if(n>1){
          n=n/1;
          i=1;}
    
    cout<<"NUmber of digit is"<<i<<endl;
    
system("pause");
return 0;    
}
