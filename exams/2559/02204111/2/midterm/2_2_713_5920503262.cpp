////5920503262 Sakarin Khajaroen
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int N,i,b=1,sum=0,j;
    cout<<"Enter an integer: ";
    cin>>N;
    for(i=10;i<=N;i=i*10){
                         if((N/i)!=0){
                               b=b+1;   
                         }
                         
    }cout<<"Number of digit is "<<b<<endl;
    for(i=10;i<=N;i=i*10){
                         if(N/i!=0){
                                j=((N%i)/(i/10));
                                sum=sum+pow(j,float(b));
                         }
    }
    j=((N%i)/(i/10));
    sum=sum+pow(j,float(b));
    if(sum==N){
               cout<<N<<" is target number.\n";
    }else{
               cout<<N<<" is not target number.\n";
    }
    system("pause");
    return 0;
}
