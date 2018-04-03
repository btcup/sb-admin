//5920503807 Peerapun Pupanead
#include<iostream>
using namespace std;
int main()
{
    int age;
    float land,sum,buil,building,cost;
    char ob,util;
    cout<<"Enter objective (Utiltzasation, Wasre):";
    cin>>ob;
    if (ob=='U')
    {
    cout<<"Enter utilization type (Business, Agriculture):";
    cin>>util;
    cout<<"Enter land cost(million)";
    cin>>land;
    cout<<"Enter building cost (milion):";
    cin>>buil;
    cout<<"Enter age:";
    cin>>age;
    
              
              if (util=='A')
                 if (land<30.0)
                 {   cost==land;
                     }
                 
                 else if (land>=30.0 || land<60.0)
                 {   cost=(land*0.06)/100;
                     
                 }
                 else 
                 {   cost=(land*0.12)/100;}
                     
              
              else if(util == 'B') 
              {   if (land<20.0)
                 {   cost==(cost*0.3)/100;}
                     
                 else if (land>=20.0 || land<50.0)
                 {   cost=(land*0.5)/100; }
                 else 
                 {   cost=(land*0.7)/100;}    
              }      
              
              if (buil>0)
              {       if (age<=10)
                     building=(buil*1.5)/100;
                     else if(age>=11||age<=40)
                     building=(buil*1.8)/100;
                     else if (age>41)
                     building=(buil*70.8)/100;}
              }
    
    }
    else if (ob =='W')
    {cout<<"land cost(milion):";
    cin>>land;
    cout<<"land age:";
    cin>>age;
             if (age<=3)
             {cost==land;}
             else if (age>=4 || age<=6)
             {cost=(land*1.2)/100}
             else if (age>=7)
             {cost=(land*2.4)/100}
        }
    
    sum=cost+building;    
    cout<<"Your estate cost is "<<sum<<"("<<land<<"+"<<cost<<") million bath.";
    cout<<"The land tax is"<< <<"exempion.";
     
     system("pause");
    return 0;
}       
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
        
                     
                     
                                
                 
     
