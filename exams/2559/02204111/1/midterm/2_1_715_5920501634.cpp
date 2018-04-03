//5920501634 Patcharamai Panwanichaiyakij
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    double a,r;
    
    do
    {
           cout<<"Enter n, a and r:";
           cin>>n>>a>>r;
           if(n<=0){
           cout<<"n cannaot be both a negative integer and a zero"<<endl;}
           if(a==0&&r==0){
           cout<<"a and r can not be zeros"<<endl; }
           else if(a==0){
           cout<<"a can not be a zero"<<endl;}
           else if(r==0){
           cout<<"r can not be a zero"<<endl;}
           
           }while(n<=0||a==0||r==0);{
           if(a==0){
           cout<<"a can not be a zero"<<endl;}
           else if(r==0){
           cout<<"r can not be a zero"<<endl;}
           }
          
          
           
           system("pause");
           return 0;
           }

