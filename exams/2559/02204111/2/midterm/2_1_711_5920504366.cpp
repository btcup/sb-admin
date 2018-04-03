#include<iostream>
using namespace std;
int main()
{   
   
    int A,B,C,J,N,M;
    float F,I;
    cout<<"-------car lease calculator-------"<<endl;
    cout<<"Enter car model:"<<endl;
    cin>>A>>B>>C>>J; 
    cout<<"Enter number of years (1-6):"<<endl;
    cin>>N;
    cout<<"Enter your salary:"<<endl;
    cin>>M;
    cout<<"-------------------------------------"<<endl;
    if(A==1385000){
               cout<<"Financing amount:"<<A-(N*2.09)<<endl;
               cin>>F;
               cout<<"Amount of interest:"<<F*2.09*N<<endl;
               cin>>I;
               cout<<"Monthly payment:"<<(F+I)/(N*12)<<endl;
               }
    if(B==511500){
               cout<<"Financing amount:"<<A-(N*1.79)<<endl;
               cin>>F;
               cout<<"Amount of interest:"<<F*1.79*N<<endl;
               cin>>I;
               cout<<"Monthly payment:"<<(F+I)/(N*12)<<endl;
               }
    if(C==738000){
               cout<<"Financing amount:"<<A-(N*1.99)<<endl;
               cin>>F;
               cout<<"Amount of interest:"<<F*1.99*N<<endl;
               cin>>I;
               cout<<"Monthly payment:"<<(F+I)/(N*12)<<endl;
               }
    if(J==694000){
               cout<<"Financing amount:"<<A-(N*1.99)<<endl;
               cin>>F;
               cout<<"Amount of interest:"<<F*1.99*N<<endl;
               cin>>I;
               cout<<"Monthly payment:"<<(F+I)/(N*12)<<endl;
               }
               
system ("pause");
return 0;
}
