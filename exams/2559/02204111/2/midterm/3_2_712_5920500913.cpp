#include<iostream> //5920500913 Sukallaya Phoosawad
#include<cmath>
using namespace std;
int main()
{
    float unit,last,current;
    int used,charge;
   while(1)
   {   
    cout<<"Enter electric cost per unit:";
    cin>>unit;
    if(unit==0)
    {
    continue;
               }
     if(unit<0)
    {
     continue;
    }
 while(1)
 {
    cout<<"Enter last unit :";
    cin>>last;
     if(last==-1)
    {
    cout<<"-- End of Calculator--"<<endl;
    cout<<"Total of Electricity charge (bahts)= "<<endl;break;
    }
    if(last<-1)
    {
               cout<<"Invalid last unit!"<<endl;
    }
   
    cout<<"Enter current unit:";
    cin>>current;
    
    cout<<"Units used =  "<<current-last<<endl;
    cout<<"Electricity chrage(bahts)="<<unit*(current-last)<<endl;
}  
    
}
    
    
    
    
 system("pause");
 return 0;   
}
