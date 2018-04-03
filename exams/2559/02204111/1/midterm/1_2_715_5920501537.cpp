// 5920501537 Thanot Wasuntararat

#include<iostream>
using namespace std;
int main()
{
    char a,b;
    double c,d,e,f,g,h,i;
    cout<<"Enter objective (Living, Agriculture) : ";
    cin>>a;
    if(a=='a'||a=='A')
    {cout<<"Enter land cost (million) : " ;
    cin>>c;
    if(c<40)cout<<"You estate cost is "<<c<<" million bath. "<<endl<<"The land tax is exemption."<<endl;
    if(c>=40&&c<80){cout<<"Enter building cost (million) : ";
    cin>>d;
    cout<<"Building age : ";
    cin>>e;
    if(e<=15)f=e*1.2;
    else if(e>=16&&e<=40)f=e*2.5+18;
    else if(e>40)f=65;
    g=e-((e/100)*f);
    h=d+g;
    cout<<"You estate cost is "<<h<<"("<<d<<"+"<<g<<") million bath. "<<endl;
    i=(h/100)*0.04;
    cout<<"The land tax is "<<i<<" million bath."<<endl;}
    if(c>=80){cout<<"Enter building cost (million) : ";
    cin>>d;
    cout<<"Building age : ";
    cin>>e;
    if(e<=15)f=e*1.2;
    else if(e>=16&&e<=40)f=(e-15)*2.5+18;
    else if(e>40)f=65;
    g=e-((e/100)*f);
    h=c+g;
    cout<<"You estate cost is "<<h<<"("<<c<<"+"<<g<<") million bath. "<<endl;
    i=(h/100)*0.08;
    cout<<"The land tax is "<<i<<" million bath."<<endl;}}
    else if(a=='l'||a=='L')
    {
                        cout<<"Enter living type (Main, Second) : ";
                        cin>>b;
    cout<<"Enter land cost (million) : " ;
    cin>>c;
    cout<<"Enter building cost (million) : ";
    cin>>d;
    cout<<"Building age : ";
    cin>>e;
    if(e<=15)f=e*1.2;
    else if(e>=16&&e<=40)f=(e-15)*2.5+18;
    else if(e>40)f=65;
    g=d-((d/100)*f);
    h=c+g;
    if(h<50&&(b=='m'||b=='M'))cout<<"You estate cost is "<<c<<" million bath. "<<endl<<"The land tax is exemption."<<endl;
    else if(h>=50&&h<100&&(b=='m'||b=='M')){cout<<"You estate cost is "<<h<<"("<<c<<"+"<<g<<") million bath. "<<endl;
    i=(h/100)*0.06;
    cout<<"The land tax is "<<i<<" million bath."<<endl;}
    else if(h>=100&&(b=='m'||b=='M')){cout<<"You estate cost is "<<h<<"("<<c<<"+"<<g<<") million bath. "<<endl;
    i=(h/100)*0.12;
    cout<<"The land tax is "<<i<<" million bath."<<endl;}
    else if(h<5&&(b=='s'||b=='S')){cout<<"You estate cost is "<<h<<"("<<c<<"+"<<g<<") million bath. "<<endl;
    i=(h/100)*0.3;
    cout<<"The land tax is "<<i<<" million bath."<<endl;}
    else if(h>=5&&h<10&&(b=='s'||b=='S')){cout<<"You estate cost is "<<h<<"("<<c<<"+"<<g<<") million bath. "<<endl;
    i=(h/100)*0.6;
    cout<<"The land tax is "<<i<<" million bath."<<endl;}
    else if(h>=10&&(b=='s'||b=='S')){cout<<"You estate cost is "<<h<<"("<<c<<"+"<<g<<") million bath. "<<endl;
    i=(h/100)*0.9;
    cout<<"The land tax is "<<i<<" million bath."<<endl;}}
    system("pause");
    return 0;
}
         
