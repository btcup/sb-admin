//5920500867 Sila Pethai
#include<iostream>
using namespace std;
int main(){
    char x,y;
    float a,b,c,d,e,f;
    cout<<"Enter objective (Utilization, Waste) : ";
    cin>>x;
    if(x=='U'){
               cout<<"Enter utilization type (Business, Agriculture) : ";
               cin>>y;
               if(y=='B'){
                         cout<<"Enter land cost (million) : ";
                         cin>>a;
                         cout<<"Enter building cost (million) : ";
                         cin>>b;
                         cout<<"Building age : ";
                         cin>>c;
                         if(1<=c && c<=10){
                                 d=b*(100-(1.5*c))/100;
                                 e=a+d;
                                 cout<<"Your estate cost is "<<e<<" ("<<a<<"+"<<d<<") million bath."<<endl;
                                 if(e<20){
                                          cout<<"The land tax is "<<(e*0.3/100)<<" million bath"<<endl;
                                          }
                                 else if(20<=e && e<50){
                                          cout<<"The land tax is "<<(e*0.5/100)<<" million bath"<<endl;
                                          }
                                 else if(e>=50){
                                          cout<<"The land tax is "<<(e*0.7/100)<<" million bath"<<endl;
                                          }}
                         else if(11<=c && c<=40){
                                 d=b*(85-(1.8*(c-10)))/100;
                                 e=a+d;
                                 cout<<"Your estate cost is "<<e<<" ("<<a<<"+"<<d<<") million bath."<<endl;
                                 if(e<20){
                                          cout<<"The land tax is "<<(e*0.3/100)<<" million bath"<<endl;
                                          }
                                 else if(20<=e && e<50){
                                          cout<<"The land tax is "<<(e*0.5/100)<<" million bath"<<endl;
                                          }
                                 else if(e>=50){
                                          cout<<"The land tax is "<<(e*0.7/100)<<" million bath"<<endl;
                                          }}
                         else if(c>=41){
                                 d=b*(100-70.8)/100;
                                 e=a+d;
                                 cout<<"Your estate cost is "<<e<<" ("<<a<<"+"<<d<<") million bath."<<endl;
                                 if(e<20){
                                          cout<<"The land tax is "<<(e*0.3/100)<<" million bath"<<endl;
                                          }
                                 else if(20<=e && e<50){
                                          cout<<"The land tax is "<<(e*0.5/100)<<" million bath"<<endl;
                                          }
                                 else if(e>=50){
                                          cout<<"The land tax is "<<(e*0.7/100)<<" million bath"<<endl;
                                          }}}
               else if(y=='A'){
                         cout<<"Enter land cost (million) : ";
                         cin>>a;
                         cout<<"Enter building cost (million) : ";
                         cin>>b;
                         cout<<"Building age : ";
                         cin>>c;
                         if(1<=c && c<=10){
                                 d=b*(100-(1.5*c))/100;
                                 e=a+d;
                                 cout<<"Your estate cost is "<<e<<" ("<<a<<"+"<<d<<") million bath."<<endl;
                                 if(e<30){
                                          cout<<"The land tax is exemption."<<endl;
                                          }
                                 else if(30<=e && e<60){
                                          cout<<"The land tax is "<<(e*0.06/100)<<" million bath"<<endl;
                                          }
                                 else if(e>=60){
                                          cout<<"The land tax is "<<(e*0.12/100)<<" million bath"<<endl;
                                          }}
                         else if(11<=c && c<=40){
                                 d=b*(85-(1.8*(c-10)))/100;
                                 e=a+d;
                                 cout<<"Your estate cost is "<<e<<" ("<<a<<"+"<<d<<") million bath."<<endl;
                                 if(e<30){
                                          cout<<"The land tax is exemption."<<endl;
                                          }
                                 else if(30<=e && e<60){
                                          cout<<"The land tax is "<<(e*0.06/100)<<" million bath"<<endl;
                                          }
                                 else if(e>=60){
                                          cout<<"The land tax is "<<(e*0.12/100)<<" million bath"<<endl;
                                          }}
                         else if(c>=41){
                                 d=b*(100-70.8)/100;
                                 e=a+d;
                                 cout<<"Your estate cost is "<<e<<" ("<<a<<"+"<<d<<") million bath."<<endl;
                                 if(e<30){
                                          cout<<"The land tax is exemption."<<endl;
                                          }
                                 else if(30<=e && e<60){
                                          cout<<"The land tax is "<<(e*0.06/100)<<" million bath"<<endl;
                                          }
                                 else if(e>=60){
                                          cout<<"The land tax is "<<(e*0.12/100)<<" million bath"<<endl;
                                          }}}}
    else if(x=='W'){
         cout<<"land cost (million) : ";
         cin>>a;
         cout<<"land age : ";
         cin>>b;
         cout<<"Your estate cost is "<<a<<" million bath."<<endl;
         if(1<=b && b<=3)
                 cout<<"The land tax is exemption."<<endl;
         else if(4<=b && b<=6)
                 cout<<"The land tax is "<<(a*1.2/100)<<" million bath"<<endl;
         else if(b>=7)
                 cout<<"The land tax is "<<(a*2.4/100)<<" million bath"<<endl;
                 }
         
    
    
    system("pause");
    return 0;
}
