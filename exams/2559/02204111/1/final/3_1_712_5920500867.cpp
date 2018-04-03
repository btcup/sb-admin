#include<iostream>
#include<cmath>
using namespace std;
void mySearch(string x,string y){
     int m=0,s,k;
     s=y.size();
     for(int i=0;i<s;i++){
     if(y[0]=='*'){cout<<"Incorrect keyword!"<<endl;break;}
     else if(y[i]!='*'){
          m=m+1;
          if(m==s){
          k=x.find(y,0);
          if(k>=0)cout<<"'"<<y<<"' is in above text."<<endl;
          else if(k==-1)cout<<"'"<<y<<"' is not in above text."<<endl;
          }
     else if(y[i]=='*'){
          y.erase(i,1);
          int q=x.find(y,0);
          if(q>=0)cout<<"'"<<y<<"' is in above text."<<endl;
          else if(q==-1)cout<<"'"<<y<<"' is not in above text."<<endl;
     }
     
}






}}
          
    
     int main(){
         string x,y;
         cout<<"Enter text: ";
         getline(cin,x,'\n');
         cout<<"Enter keyword: ";
         getline(cin,y,'\n');
         mySearch(x,y);
         
         
         system("pause");
         return 0;
         }
