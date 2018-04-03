//5920501570 Niracha Ngernpisutsilp
#include<iostream>
using namespace std;
int main(){
    int a,b;
    string c,e;
    cout<<"Number of subject :";
    cin>>a;
    cout<<"Number of student :";
    cin>>b;
    
    for(int i=1;i<=a;i++){
    cout<<"score of Subject"<<i<<":";
    getline(cin,c,'\n');}
   
    cout<<"Select graph (1-score,2-max):";
    getline(cin,e,'\n');
    
   system("pause");
   return 0;
}

 
 
 
 
 
 
 
  
