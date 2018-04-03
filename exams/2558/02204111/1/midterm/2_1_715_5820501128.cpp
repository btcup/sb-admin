#include <iostream>
using namespace std;
int main()
{
    int n;
    float sum=0;
    char m,s,a,k;
    cout<<"Welcome to A Cup-with-love Coffee!!"<<endl;
    do
    {
                   cout<<"Enter your menu (E/A/L/C/M) : "; cin>>m;
                   cout<<"Enter size (S/T/G/V) : "; cin>>s;
                   cout<<"How many cups? : "; cin>>n;
                   cout<<"Do you want other menu? (Y/N) :"; cin>>k;
                   if(m=='E'||m=='e'||m=='E'||m=='e')
                   {
                                     if(s=='S'||s=='s') sum=sum+n*40.0;
                                     if(s=='T'||s=='t') sum=sum+n*50.0;
                                     if(s=='G'||s=='g') sum=sum+n*60.0;
                                     if(s=='V'||s=='v') sum=sum+n*70.0;
                   }
                   else if(m=='C'||m=='c'||m=='L'||m=='l')
                   {
                                     if(s=='S'||s=='s') sum=sum+n*50.0;
                                     if(s=='T'||s=='t') sum=sum+n*60.0;
                                     if(s=='G'||s=='g') sum=sum+n*70.0;
                                     if(s=='V'||s=='v') sum=sum+n*80.0;
                   }
                   else if(m=='M'||m=='m')
                   {
                                     if(s=='S'||s=='s') sum=sum+n*60.0;
                                     if(s=='T'||s=='t') sum=sum+n*70.0;
                                     if(s=='G'||s=='g') sum=sum+n*80.0;
                                     if(s=='V'||s=='v') sum=sum+n*90.0;
                   }
                   
    }
    while(k!='N'&&k!='n');
    cout<<"Are you a member? (Y/N) : "; cin>>a;
    if(a=='Y'||a=='y') 
    {
                       cout<<"Total "<<sum<<" Baht"<<endl;
                       cout<<"Discount "<<sum*10/100<<" Baht"<<endl;
                       cout<<"You pay "<<sum*90/100<<" Baht"<<endl;
    }
    else 
    {
                       cout<<"Total "<<sum<<" Baht"<<endl;
                       cout<<"Discount 0 Baht"<<endl;
                       cout<<"You pay "<<sum<<" Baht"<<endl;
    }
    cout<<"Thank you."<<endl;
    system("pause");
    return 0;
}
                                     
