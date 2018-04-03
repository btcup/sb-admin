#include<iostream>
#include<cmath>
using namespace std;
int main(){
    char floor,wall;
    double h,w,d,total,A,B,C,D;
    cout<<"Welcome to The Funtastic Tiles!!"<<endl;
    cout<<"Please enter toom size in meter (H x W x D) : ";
    cin>>h>>w>>d;
    cout<<"Please select floor tile...(A/B/C) : ";
    cin>>floor;
    cout<<"Please select wall tile...(A/B/C) : ";
    cin>>wall;
    cout<<"---------------------------------"<<endl;
    if(floor=='a')
    {
                  A=((w*100)*(d*100))/(30*30);
                  B=(((w*100)*(d*100))/(30*30))*55;
                  cout<<"Number of floor tiles :"<<A<<"-->Price = "<<B<<"Baht"<<endl;
                  }
    else if(floor=='b')
    {
                       A=((w*100)*(d*100))/(45*45);
                       B=(((w*100)*(d*100))/(45*45))*80;
                       cout<<"Number of floor tiles :"<<A<<"-->Price = "<<B<<"Baht"<<endl;
                       }
    else if(floor=='c')
    {
                       A= ((w*100)*(d*100))/(60*60);
                       B= (((w*100)*(d*100))/(60*60))*90;
                       cout<<"Number of floor tiles :"<<A<<"-->Price = "<<B<<"Baht"<<endl;  
                       }
    else if(wall=='a')
    {
                      C=(((w*100)*(h*100)+(d*100)*(h*100))*2)/(20*20) ;  
                      D=((((w*100)*(h*100))+((d*100)*(h*100))*2)/(20*20))*17;
                      cout<<"Number of wall tiles :"<<C<<"-->Price = "<<D<<"Baht"<<endl;
                      }
    else if(wall=='b')
    {
                      C=(((w*100)*(h*100))+((d*100)*(h*100))*2)/(20*30);
                       D=((((w*100)*(h*100))+((d*100)*(h*100))*2)/(20*30))*32;
                       cout<<"Number of wall tiles :"<<C<<"-->Price = "<<D<<"Baht"<<endl; 
                       }    
    else if(wall=='c')
    {
                       C=(((w*100)*(h*100))+((d*100)*(h*100))*2)/(30*30);
                       D=((((w*100)*(h*100))+((d*100)*(h*100))*2)/(30*30))*50;
                       cout<<"Number of wall tiles :"<<C<<"-->Price = "<<D<<"Baht"<<endl;  
                       }
    total=B+D;
    cout<<"Total price : " <<B<<" + "<<D<<" = "<<total<<"Baht"<<endl;
    cout<<"----------------------------"<<endl;
system("pause");
return 0;
}
