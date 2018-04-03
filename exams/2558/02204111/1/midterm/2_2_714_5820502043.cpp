#include<iostream>
using namespace std;
int main()
{
    int h,w,d,total1,total2,pay1,pay2;
    char a,b;
    cout<<"Welcome to The Fantastic Tiles!!"<<endl;
    do
    {
                   cout<<"Please enter room size in meter (H x W x D) :";
                   cin>>h>>w>>d;
                   cout<<"Please select floor tile...(A/B/C) :";
                   cin>>a;                      
                   cout<<"Please select wall tile...(A/B/C) :";
                   cin>>b;
                   cout<<"-----------------------------"<<endl;
                   if(a=='a'||a=='A')
                   {cout<<"Number of floor title :"<<total1<<"-->Price = "<<endl;
                                  total1=;
                                  pay1=;
                                  if(b=='a'||b=='A')
                                  {
                                  cout<<"Number of wall title :"<<total2<<"-->Price = "<<endl;
                                                total2=;
                                                pay2=;
                                  cout<<"Total price :"<<total1+total2<<endl;
                                  }
                                  if(b=='b'||b=='B')
                                  {
                                  cout<<"Number of wall title :"<<total2<<"-->Price = "<<endl;
                                                total2=;
                                                pay2=;
                                  cout<<"Total price :"<<total1+total2<<endl;
                                  }
                                  if(b=='c'||b=='C')
                                  {
                                  cout<<"Number of wall title :"<<total2<<"-->Price = "<<endl;
                                                total2=;
                                                pay2=;
                                  cout<<"Total price :"<<total1+total2<<endl;
                                  }
                   if(a=='b'||a=='B')
                   {cout<<"Number of floor title :"<<total1<<"-->Price = "<<endl;
                                     total1=;
                                     pay1=;
                                  if(b=='a'||b=='A')
                                  {
                                  cout<<"Number of wall title :"<<total2<<"-->Price = "<<endl;
                                                 total2=;
                                                 pay2=;
                                  cout<<"Total price :"<<total1+total2<<endl;
                                  }
                                  if(b=='b'||b=='B')
                                  {
                                  cout<<"Number of wall title :"<<total2<<"-->Price = "<<endl;
                                                total2=;
                                                 pay2=;
                                  cout<<"Total price :"<<total1+total2<<endl;
                                  }
                                  if(b=='c'||b=='C')
                                  {
                                  cout<<"Number of wall title :"<<total2<<"-->Price = "<<endl;
                                                total2=;
                                                pay2=;
                                  cout<<"Total price :"<<total1+total2<<endl;
                                  }
                   if(a=='c'||a=='C')
                   {cout<<"Number of floor title :"<<total1<<"-->Price = "<<endl;
                                     total1=;
                                     pay1=;
                                  if(b=='a'||b=='A')
                                  {
                                  cout<<"Number of wall title :"<<total2<<"-->Price = "<<endl;
                                                total2=;
                                                pay2=;
                                  cout<<"Total price :"<<total1+total2<<endl;
                                  }
                                  if(b=='b'||b=='B')
                                  {
                                  cout<<"Number of wall title :"<<total2<<"-->Price = "<<endl;
                                                total2=;
                                                pay2=;
                                  cout<<"Total price :"<<total1+total2<<endl;
                                  }
                                  if(b=='c'||b=='C')
                                  {
                                  cout<<"Number of wall title :"<<total2<<"-->Price = "<<endl;
                                                total2=;
                                                pay2=;
                                  cout<<"Total price :"<<total1+total2<<endl;
                                  };
}               
    while(1);                                
    system("pause");
    return 0;
}                                    

