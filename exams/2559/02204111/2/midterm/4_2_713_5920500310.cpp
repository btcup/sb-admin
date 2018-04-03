//5920500310 Jirayut Kotcharit
#include<iostream>
using namespace std;
int main()
{
    int a,i,j,b,c,d,e,one,two,three,four,sum;
    cout<<"Enter a positive integer:";
    cin>>a;
    b=a/1;c=a/10;d=a/100;e=a/1000;
    if(b>=1){
            one=1;
            }else if(c>=1){
                  two=1;
                  }else if(d>=1){
                        three=1;
                        }else if(e>=1){
                              four=1;
                              }else if(b<1){
                                   one=0;
                              }else if(c<1){
                                    two=0;
                                    }else if(d<1){
                                          three=0;
                                          }else if(e<1){
                                                four=0;
                                                }
                         sum=one+two+three+four;     
    if(a<=0){
             cout<<"Invalid number!!";
             cout<<endl;
             }else{
                   cout<<"Number of digit is "<<sum;
                   cout<<endl;
                   cout<<"Factor of "<<a<<" are:";
                   cout<<endl;
                   for(i=1;i<=a;i++){
                                    if(a%i==0){
                                               cout<<i<<"*"<<j<<"="<<a;
                                                       cout<<endl;
                                                       }  
                                                       }            
                   }
             system("pause");
             return 0;
             }
             
                   
