#include <iostream>
using namespace std;
int main()
{
    char L,M,S,A,t,k;
    double m,n,a,sum;
    sum=53.885;

    cout<<"Enter objective (Living,Agriculture):";
    cin>>t;
    if(t=='L'){
    cout<<"Enter living type (Main,Second):";
    cin>>k;
     if (k=='M')
    {
    cout<<"Enter land cost (million):";
    cin>>m;
     if(m<=50){
    cout<<"Enter building cost(million):";
    cin>>n;
    cout<<"Building age :";
    cin>>a;
    cout<<"Your estate cost is"<<sum<<"("<<m<<"+"<<"8.085"<<")"<<"million bath."<<endl;
    cout<<"The land tax is "<<a<<"million bath."<<endl;
}
 if(m>=50&&m<=100){
    cout<<"Enter building cost(million):";
    cin>>n;
    cout<<"Building age :";
    cin>>a;
    cout<<"Your estate cost is"<<n<<"million bath."<<endl;
    cout<<"The land tax is "<<a<<"million bath."<<endl;

} if(m>100){
    cout<<"Enter building cost(million):";
    cin>>n;
    cout<<"Building age :";
    cin>>a;
    cout<<"Your estate cost is"<<n<<"million bath."<<endl;
    cout<<"The land tax is "<<a<<"million bath."<<endl;
}
}
}
   if (k=='S')
    {
    cout<<"Enter land cost (million):";
    cin>>m;
     if(m<=5){
    cout<<"Enter building cost(million):";
    cin>>n;
    cout<<"Building age :";
    cin>>a;
    cout<<"Your estate cost is"<<"("<<m<<")"<<"million bath."<<endl;
    cout<<"The land tax is "<<a<<"million bath."<<endl;
}
if(m>=5&&m<=10){
    cout<<"Enter building cost(million):";
    cin>>n;
    cout<<"Building age :";
    cin>>a;
    cout<<"Your estate cost is"<<"("<<m<<")"<<"million bath."<<endl;
    cout<<"The land tax is "<<a<<"million bath."<<endl;
}
if(m>10){
    cout<<"Enter building cost(million):";
    cin>>n;
    cout<<"Building age :";
    cin>>a;
    cout<<"Your estate cost is"<<"("<<m<<")"<<"million bath."<<endl;
    cout<<"The land tax is "<<a<<"million bath."<<endl;
}

}
if(t=='A')
{
          if(m<=40){
          cout<<"Enter land cost (milloin):";
          cin>>m;
          cout<<"Your estacost is"<<m<<"million bath."<<endl;
          cout<<"The land tax is exemption."<<endl;
          }
          if(m>=40&&m<=80)
          {
          cout<<"Your estacost is"<<m*0.04<<"million bath."<<endl;
          cout<<"The land tax is exemption."<<endl;
          }
          if(m>80)
          {
          cout<<"Your estacost is"<<m*0.08<<"million bath."<<endl;
          cout<<"The land tax is exemption."<<endl;               
          }
          }
    system("pause");
    return 0;
}
