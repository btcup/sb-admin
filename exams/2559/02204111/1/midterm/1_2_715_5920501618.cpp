// 5920501618 Pongnaphat Nivate
#include<iostream>
#include<cmath>
using namespace std;
int  main()
{
     int objective,utiliztion,age;
     float land,cost;
     int U,B,A;
     cout<<"Enter objective (Utilization,Waste) : ";
     cin>>objective;
     
     if(objective==U)
     {
     cout<<"Enter utiliztion type (Business,Agriculture) : ";
     cin>>utiliztion;
     }
     
     
     
     else {    
     cout<<"land cost (million) : ";
     cin>>cost;
     cout<<"land age : ";
     cin>>age;
     if(age>=1&&age<=3){
                        
     cout<<"Your estate cost is "<<cost<<"million bath."<<endl;
     cout<<"The land tax is exemption.";}
     //land=(cost+(cost*(1.2/100)));
     if(age>=4&&age<=6)
     {
     cout<<"Your estate cost is "<<(cost+(cost*(1.2/100)))<<"("<<cost<<"+"<<cost*(1.2/100)<<") million bath."<<endl;
     cout<<"The land tax is exemption.";
     }
     if(age>=7)
     {
     cout<<"Your estate cost is "<<(cost+(cost*(2.4/100)))<<"("<<cost<<"+"<<cost*(2.4/100)<<") million bath."<<endl;
     cout<<"The land tax is exemption.";}
     }
     system("pause");
     return 0;
}
