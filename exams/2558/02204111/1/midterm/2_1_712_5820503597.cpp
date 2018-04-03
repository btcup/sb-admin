#include<iostream>
using namespace std;
int main()
{
    char q,w,r,o;
    int z,sum=0,x;
    float j,h;
    cout<<"Welcome to A Cup-with-love Coffee!!"<<endl;
    cout<<"Enter your menu (E/A/L/C/M): ";
    cin>>q;
    cout<<"Enter size (S/T/G/V): ";
    cin>>w;
    cout<<"How many cups?: ";
    cin>>z;
    cout<<"Do you want other manu? (Y/N):";
    cin>>r;
    if(q=='e'||q=='E'||q=='A'||q=='a')
    {
    if(w=='s'||w=='S')
    x=z*40;
    else if(w=='t'||w=='T')
    x=z*50;
    else if(w=='g'||w=='G')
    x=z*60;
    else if(w='v'||w=='V')
    x=z*70;
    sum=sum+x;
    }
     if(q=='c'||q=='C'||q=='l'||q=='L')
    {
    if(w=='s'||w=='S')
    x=z*50;
    else if(w=='t'||w=='T')
    x=z*60;
    else if(w=='g'||w=='G')
    x=z*70;
    else if(w='v'||w=='V')
    x=z*80;
    sum=sum+x;
    }
     if(q=='m'||q=='M')
    {
    if(w=='s'||w=='S')
    x=z*60;
    else if(w=='t'||w=='T')
    x=z*70;
    else if(w=='g'||w=='G')
    x=z*80;
    else if(w='v'||w=='V')
    x=z*90;
    sum=sum+x;
    }
    
    while(r=='y'||r=='Y')
    {       
    cout<<"Enter your menu (E/A/L/C/M): ";
    cin>>q;
    cout<<"Enter size (S/T/G/V): ";
    cin>>w;
    cout<<"How many cups?: ";
    cin>>z;
    cout<<"Do you want other manu? (Y/N):";
    cin>>r;
    if(q=='e'||q=='E'||q=='A'||q=='a')
     {
    if(w=='s'||w=='S')
    x=z*40;
    else if(w=='t'||w=='T')
    x=z*50;
    else if(w=='g'||w=='G')
    x=z*60;
    else if(w='v'||w=='V')
    x=z*70;
    sum=sum+x;
     }
     if(q=='c'||q=='C'||q=='l'||q=='L')
     {
    if(w=='s'||w=='S')
    x=z*50;
    else if(w=='t'||w=='T')
    x=z*60;
    else if(w=='g'||w=='G')
    x=z*70;
    else if(w='v'||w=='V')
    x=z*80;
    sum=sum+x;
     }
     if(q=='m'||q=='M')
     {
    if(w=='s'||w=='S')
    x=z*60;
    else if(w=='t'||w=='T')
    x=z*70;
    else if(w=='g'||w=='G')
    x=z*80;
    else if(w='v'||w=='V')
    x=z*90;
    sum=sum+x;
     }
     
     
    }
    cout<<"Are you member ?(Y/N): ";
     cin>>o;
     if(o=='y'||o=='Y')
     {
     j=sum*0.1;
     h=sum-j;
     cout<<"Total "<<sum<<" Baht"<<endl;
     cout<<"Dis count "<<j<<" Baht"<<endl;
     cout<<"You pay "<<h<<" Baht"<<endl;
     cout<<"Thank you."<<endl;
     }
     else if(o=='n'||o=='N')
     {
     j=sum*0;
     h=sum;
     cout<<"Total "<<sum<<" Baht"<<endl;
     cout<<"Dis count "<<j<<" Baht"<<endl;
     cout<<"You pay "<<h<<" Baht"<<endl;
     cout<<"Thank you."<<endl;
     }
    

    system("pause");
    return 0;
}   
    

