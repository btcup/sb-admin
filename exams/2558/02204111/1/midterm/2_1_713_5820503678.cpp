#include <iostream>
using namespace std;
int main()
{
    char menu,size,ans,mem;
    int n,sum,disc;
    cout<<"Welcom to A Cup-with-love Coffee!!\n";
    cout<<"Enter your menu (E/A/L/C/M) : ";
    cin>>menu;
    cout<<"Enter size (S/T/G/V) : ";
    cin>>size;
    cout<<"How many cups? : ";
    cin>>n;
    do
    {
           cout<<"Do you want other menu? (Y/N) : ";
           cin>>ans;
           if(ans=='N'||ans=='n')
           break;
           else
           {
               cout<<"Enter your menu (E/A/L/C/M) : ";
               cin>>menu;
               cout<<"Enter size (S/T/G/V) : ";
               cin>>size;
               cout<<"How many cups? : ";
               cin>>n;
           }
    }while(ans=='y'||ans=='Y');
    cout<<"Are you a member? (Y/N) : ";
    cin>>mem;
    sum=0;
    if(size=='s'||size=='S')
    {
                            if(menu=='E'||menu=='e'||menu=='A'||menu=='a')sum=n*40;
                            else if(menu=='C'||menu=='c'||menu=='L'||menu=='l')sum=n*50;
                            else sum=n*60;
    }
    else if(size=='t'||size=='T')
    {
                            if(menu=='E'||menu=='e'||menu=='A'||menu=='a')sum=n*50;
                            else if(menu=='C'||menu=='c'||menu=='L'||menu=='l')sum=n*60;
                            else sum=n*70;
    }
    else if(size=='g'||size=='G')
    {
                            if(menu=='E'||menu=='e'||menu=='A'||menu=='a')sum=n*60;
                            else if(menu=='C'||menu=='c'||menu=='L'||menu=='l')sum=n*70;
                            else sum=n*80;
    }
    else if(size=='v'||size=='V')
    {
                            if(menu=='E'||menu=='e'||menu=='A'||menu=='a')sum=n*70;
                            else if(menu=='C'||menu=='c'||menu=='L'||menu=='l')sum=n*80;
                            else sum=n*90;
    }
    cout<<"Total "<<sum<<" bath\n";
    if(mem=='y'||mem=='Y')disc=sum*0.1;
    else disc=0;
    cout<<"Discount "<<disc<<" Baht\n";
    cout<<"You pay "<<sum-disc<<" Baht\n";
    system("pause");
    return 0;
}














