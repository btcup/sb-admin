// 5920502894 Wikran Tantiphokha

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    char a,b;
    double x,y,z;
    cout<<"Enter objective (Living, Agriculture) : ";
    cin>>a;
    if(a=='L'){
    cout<<"Enter living type (Main, Second) : ";
    cin>>b;
    cout<<"Enter land cost (million) : ";
    cin>>x;
    cout<<"Enter building cost (million) : ";
    cin>>y;
    cout<<"Building age : ";
    cin>>z;
    if(1<=z<=15)
    cout<<"Your estate cost is "<<x+y-y*((z*1.2)/100)<<" ("<<x<<"+"<<y-y*((z*1.2)/100)<<")"<<endl;
    else if(16<=z<=40)
    cout<<"Your estate cost is "<<x+y-y*((18+(z-15)*2.5)/100)<<" ("<<x<<"+"<<y-y*((18+(z-15)*2.5)/100)<<")"<<endl;
    else if(z>=41)
    cout<<"Your estate cost is "<<x+y-y*(65/100)<<" ("<<x<<"+"<<y-y*(65/100)<<")"<<endl;
    }
    else if(a=='A'){
    cout<<"Enter land cost (million) : ";
    cin>>x;
    if(x<=40)
    cout<<"Your estate cost is "<<x<<" million bath."<<endl;
    cout<<"The land tax is exemption."<<endl;;
    }
    system("pause");
    return 0;
}    

    
    
