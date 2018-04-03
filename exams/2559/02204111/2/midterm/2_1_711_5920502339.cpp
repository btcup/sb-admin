#include<iostream>//5920502339 Nuttapon joullapan
using namespace std;
int main()
{
 char carmodel;
 float a,b,F,A,M,DPM;
 const float dpm=0.25;
 cout<<"------Car lease calculator ---------"<<endl;
 cout<<"Enter car model:";
 cin>>carmodel;
 cout<<"Enter number of years (1-6):";
 cin>>a;
 cout<<"Enter salary:";
 cin>>b;
 cout<<"------------------------------------"<<endl;
 
 switch(carmodel)
 {
     case 'A':
          DPM=1385000*dpm;
          F=1385000-DPM;
          A=F*2.09*a;
          M=(F+A)/a;
          cout<<"Financing amount:"<<F<<endl;
          cout<<"Amount of interest:"<<A<<endl;
          cout<<"Monthly payment:"<<M<<endl;break;
     case 'B':
          DPM=511500*dpm;
          F=511500-DPM;
          A=F*1.79*a;
          M=(F+A)/a;
          cout<<"Financing amount:"<<F<<endl;
          cout<<"Amount of interest:"<<A<<endl;
          cout<<"Monthly payment:"<<M<<endl;break;
     case 'C':
          DPM=738000*dpm;
          F=738000-DPM;
          A=F*1.99*a;
          M=(F+A)/a;
          cout<<"Financing amount:"<<F<<endl;
          cout<<"Amount of interest:"<<A<<endl;
          cout<<"Monthly payment:"<<M<<endl;break;
     case 'J':
          DPM=694000*dpm;
          F=694000-DPM;
          A=F*1.99*a;
          M=(F+A)/a;
          cout<<"Financing amount:"<<F<<endl;
          cout<<"Amount of interest:"<<A<<endl;
          cout<<"Monthly payment:"<<M<<endl;break;
 
 
 }
 
 
 
 
 
 
 
 system("pause");
 return 0;
    
}
