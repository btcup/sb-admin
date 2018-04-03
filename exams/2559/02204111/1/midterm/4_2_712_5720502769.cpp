//5720502769 farid damaroh
#include<iostream>
using namespace std;
int main(){
  int a,b,c,d,o,p;
      cout<<"Enter 1st number:";
      cin>>a;
      cout<<"Enter 2nd number:";
      cin>>b;
      cout<<"Enter 3rd number:";
      cin>>c;
      cout<<"Enter 4th number:";
      cin>>d;
      
            if(a<b && a<c && a<d){
             cout<<"1st number is Minimum"<<endl;
             o=a;
             }
      if(b<a && b<c && b<d){
             cout<<"2rd number is Minimum"<<endl; 
             o=b;}
      if(c<b && a>c && c<d){
             cout<<"3rd number is Minimum"<<endl;
             o=c;}
      if(d<b && d<c && a>d){
             cout<<"4th number is Maximum"<<endl;
             o=d;}
    
      
      if(a>b && a>c && a>d){
             cout<<"1st number is Maximum"<<endl;
             p=a;}
      if(b>a && b>c && b>d){
             cout<<"2rd number is Maximum"<<endl;       
             p=b;}
      if(c>b && a<c && c>d){
             cout<<"3rd number is Maximum"<<endl;
             p=c;}
      if(d>b && d>c && a<d){
             cout<<"4th number is Maximum"<<endl;
             p=d;}
      
      cout<<"The difference betweem Min. and Max. is"<<p-o<<endl;
             
     system("pause");
     return 0;
     }
