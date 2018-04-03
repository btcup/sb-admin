#include<iostream>
using namespace std;
int main()
{
    int N,M=2;
    for(N=-1;N<1;N)
    {
          cout<<"Enter N:";
          cin>>N;
          if(N>0)
          {
                 if(N%M==0&&N-M==0)
                 {      
                        M=N;
                        cout<<"The Greatest factor of "<<N<<"is "<<M<<"--> prime number"<<endl;
                 }
                 else if(N%11==0)
                 {
                        M=11;
                        cout<<"The Greatest factor of "<<N<<"is "<<M<<endl;
                 }
                 else if(N%5==0)
                 {
                        M=5;
                        cout<<"The Greatest factor of "<<N<<"is "<<M<<endl;
                 }
                 else if(N%4==0)
                 {
                        M=4;
                        cout<<"The Greatest factor of "<<N<<"is "<<M<<endl;
                 }
                 else if(N%3==0)
                 {
                        M=3;
                        cout<<"The Greatest factor of "<<N<<"is "<<M<<endl;
                 }
                 else if(N%2==0)
                 {
                        M=2;
                        cout<<"The Greatest factor of "<<N<<"is "<<M<<endl;
                 }
              
          }
    }
    
    
   
    

system("pause");
return 0;
}
