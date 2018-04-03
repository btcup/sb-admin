//5920500557Suwanna Chinmuni
#include<iostream>
using namespace std;
int main()
{
    char o,L,A,M,S;
    float t,c,b,a,x;
    cout<<"Enter objective (Living,Agriculture): ";
    cin>>o;

    if (o =='A')
{
    cout<<"Enter land cost(million): ";
    cin>>c;
    {
           if(c<40){
           cout<<"Your estate cost is "<<c<<"million bath."<<endl;
           cout<<"The land tax is exemption."<<endl;
           }
           else if (c>=40&&c<80){
           cout<<"Your estate cost is "<<c<<" million bath."<<endl;
           cout<<"The land tax is "<<c*(0.04/100)<<"million bath"<<endl;
           }
           else{
           cout<<"Your estate cost is "<<c<<" million bath."<<endl;
           cout<<"The land tax is "<<c*(0.08/100)<<"million bath"<<endl;
           }
           }
           }
           
    else if (o=='L')
{
    cout<<"Enter living type (Main,Second): ";
    cin>>t;
    if(t=='M');
    cout<<"Enter land cost (million) : ";
    cin>>c;
    cout<<"Enter building cost (million): ";
    cin>>b;
    cout<<"Building age: ";
    cin>>a;
    else if ()
}
           
system ("pause");
return 0;
}


