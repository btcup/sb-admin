//5920500697 Name Narongrit Lastname Tawai
#include<iostream>
using namespace std;
int main(){
int ba,la;
float lc,bc,ec,lt;
char o,u;
cout<<"Enter objective (Utillization, Waste) : ";
cin>>o;
if(o=='u'||o=='U')
{
                  cout<<"Enter utillization type (Business, Agriculture) : ";
                  cin>>u;
                  cout<<"Enter land cost (million) : ";
                  cin>>lc;
                  cout<<"Enter building cost (million) : ";
                  cin>>bc;
                  cout<<"Building age : ";
                  cin>>ba;
                  if(u=='b'||u=='B')
                  {
                                    if(ba>0&&ba<11){bc=bc-(bc*(ba*1.5/100));}
                                    else if(ba>10&&ba<41){bc=bc-(bc*(ba*1.8/100));}
                                    else{bc=bc-(bc*70.8/100);}
                                    ec=lc+bc;
                                    if(ec>0&&ec<20){lt=ec*0.3/100;}
                                    else if(ec>=20&&ec<50){lt=ec*0.5/100;}
                                    else if(ec>=50){lt=ec*0.7/100;}
                  }
                  if(u=='a'||u=='A')
                  {
                                    if(ba>0&&ba<11){bc=bc-(bc*(ba*1.5/100));}
                                    else if(ba>10&&ba<41){bc=bc-(bc*(ba*1.8/100));}
                                    else{bc=bc-(bc*70.8/100);}
                                    ec=lc+bc;
                                    if(ec>0&&ec<30){lt=0;}
                                    else if(ec>=30&&ec<60){lt=ec*0.06/100;}
                                    else if(ec>=60){lt=ec*0.12/100;}
                  }
                  cout<<"Your estate cost is "<<ec<<" ("<<lc<<"+"<<bc<<") million bath."<<endl;
                  if(lt==0){cout<<"The land tax is exemption."<<endl;}
                  else{cout<<"The land tax is "<<lt<<" million bath."<<endl;}
}
if(o=='w'||o=='W')
{
                  cout<<"Enter land cost (million) : ";
                  cin>>lc;
                  cout<<"Enter land age (million) : ";
                  cin>>la;
                  if(la>0&&la<4){lt=0;}
                  else if(la>3&&la<7){lt=lc*1.2/100;}
                  else if(la>7){lt=lc*2.4/100;}  
                  cout<<"Your estate cost is "<<lc<<" million bath."<<endl;
                  if(lt==0){cout<<"The land tax is exemption."<<endl;}
                  else{cout<<"The land tax is "<<lt<<" million bath."<<endl;}
}
system("pause");
return 0;
}
