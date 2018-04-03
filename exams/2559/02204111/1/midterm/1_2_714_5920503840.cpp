#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,d,L,M,S;
    float c;
    cout<<"Enter objecttive (Living,Agriculture) : ";
    cin>>a;
    if(a==L) 
    {   
       cout<<"Enter living type (Main, Second) : ";
       cin>>b;     
        if(b==M)
           {
           cout<<"Enter land cost (million) : ";
           cin>>c;
           }
        else
          {
           cout<<"Enter land cost (million) : ";
           cin>>c;
           }         
    }
    else
    {
       cout<<"Enter land cost (million) : ";
       cin>>c;
       if(c<40)
       cout<<"Your estate cost is"<<c<<"million bath."<<endl;
       cout<<"THe land tax is examption."<<endl; 
    }
    system("pause");
    return 0;
}
