#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   char obj,type; 
   float land,buil,tax,taxsum,est; 
   int age;
   
   cout<<"Enter objective (Utilization, Waste): ";
   cin>>obj;
   if(obj=='U' || obj=='u')
   {
   cout<<"Enter utilization (Busininess, Agriculture) :";
   cin>>type;
             if(type=='B')
             {
                cout<<"Enter land cost (million) :";
                cin>>land;
                cout<<"Enter building cost (million) :";
                cin>>buil;
                cout<<"Building age :";
                cin>>age;
                
             }   
             if(type=='A')
                cout<<"Enter land cost (million) :";
                cin>>land;
                cout<<"Enter building cost (million) :";
                cin>>buil;
                cout<<"Building age :";
                cin>>age;
                            
   }                         
   if(obj=='W')
   {
   cout<<"land cost (million) :";
   cin>>land;
   cout<<"land age :";
   cin>>age;
               if(age>=1 && age<=3)cout<<"Your estate cost is "<<land<<" million bath.\nThe land tax is exemption.\n";
   }
        
    system("pause");
    return 0;
}
