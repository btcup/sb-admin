#include<iostream>
using namespace std;
int main (){
    int h,w,d,sum;
    char x,y ;
    cout<<"Welcome to The Fantastic Tiles!!"<<endl;
    cout<<"Please enter room size in meter (HxWxD):";
    cin>>h>>w>>d ;
    cout<<"Please select floor tile...(A/B/C):";
    cin>>x; 
     if(x=='a')
          sum=55;
     else if(x=='b')
          sum=80;
     else if(x=='c')
          sum=90;
    cout<<"Please select wall tile...(A/B/C):";
     cin>>y; 
     if(y=='a')
          sum=17;
     else if(y=='b')
          sum=32;
     else if(y=='c')
          sum=50;          
                
              
    
    
    system("pause");
    return 0;
}
