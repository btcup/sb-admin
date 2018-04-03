//5720550348 Anuwat Seedawomg
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float x=0;
    double y=0,z=0;
    while(x<=0){
     cout<<"Enter electricity cost per unit (baths): " ;
     cin>>x;         
    }
    
    while(z<=y){
      cout<<"Eter last unit: "     ;
      cin>>y;
      cout<<"Enter current unit: "  ;
      cin>>z;  
      if(z<y)
      cout<<"Invailid current unit"<<endl;      
                
      }       
         
    cout<<"Unit used = "<<(y-z)*-1<<endl;
    cout<<"Electricity charg (bahts) = "<<((y-z)*-1)*x<<endl;


    
    
    
    system("pause");
    return 0;
    
    }
