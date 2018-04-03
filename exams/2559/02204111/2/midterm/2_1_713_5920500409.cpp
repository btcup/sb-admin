//5920500409 Thanatip Khwantong
#include<iostream>
using namespace std;
int main()
{
    char a;
    float x,y,sum1,sum2,sum3;
    cout<<"------- Car lease calculator -------"<<endl;
    cout<<"Enter car model : ";
    cin>>a;
    cout<<"Enter number of years (1-6) : ";
    cin>>x;
    cout<<"Enter your salary: ";
    cin>>y;
    cout<<"------------------------------------"<<endl;
    if(a=='A'){
               if(sum1=1385000-(0.25*1385000)){
               cout<<"Financing amount:"<<sum1<<endl;}
               if(sum2=(sum1*x*2.09)/100){
               cout<<"Amount of interest:"<<sum2<<endl;}
               if(sum3=(sum1+sum2)/(12*x)){               
               cout<<"Monthly payment :"<<sum3<<endl;}
               if(sum3>0.5*y){
               cout<<"The mouthly payment is over than 50 % of your salary!!"<<endl;}
               else if(sum3<=0.5*y){
               cout<<"Good decision,Enjoy your new car"<<endl;}
               }
               
               else if(a=='B'){
               if(sum1=511500-(0.25*511500)){
               cout<<"Financing amount:"<<sum1<<endl;}
               if(sum2=sum1*x*1.79/100){
               cout<<"Amount of interest:"<<sum2<<endl;}
               if(sum3=(sum1+sum2)/(12*x)){               
               cout<<"Monthly payment :"<<sum3<<endl;}
               if(sum3>0.5*y){
               cout<<"The mouthly payment is over than 50 % of your salary!!"<<endl;}
               else if(sum3<=0.5*y){
               cout<<"Good decision,Enjoy your new car"<<endl;}
               }
               
               else if(a=='C'){
               if(sum1=738000-(0.25*738000)){
               cout<<"Financing amount:"<<sum1<<endl;}
               if(sum2=sum1*x*1.99/100){
               cout<<"Amount of interest:"<<sum2<<endl;}
               if(sum3=(sum1+sum2)/(12*x)){               
               cout<<"Monthly payment :"<<sum3<<endl;}
               if(sum3>0.5*y){
               cout<<"The mouthly payment is over than 50 % of your salary!!"<<endl;}
               else if(sum3<=0.5*y){
               cout<<"Good decision,Enjoy your new car"<<endl;}
               }
               
               else if(a=='J'){
               if(sum1=694000-(0.25*694000)){
               cout<<"Financing amount:"<<sum1<<endl;}
               if(sum2=sum1*x*1.99/100){
               cout<<"Amount of interest:"<<sum2<<endl;}
               if(sum3=(sum1+sum2)/(12*x)){               
               cout<<"Monthly payment :"<<sum3<<endl;}
               if(sum3>0.5*y){
               cout<<"The mouthly payment is over than 50 % of your salary!!"<<endl;}
               else if(sum3<=0.5*y){
               cout<<"Good decision,Enjoy your new car"<<endl;}
               }
               
    system("pause");
    return 0;
}




