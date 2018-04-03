#include<iostream>
using namespace std;
int main ()
{                                            
 float total;
 char YN,menu,size;
 int K,;
 
YN='Y';
 while (YN=='Y'||YN=='y'){

 cout<<"Welcome to A cup-with-love coffee !!  :"<<endl;
 cout<<"Enter your menu (E/A/L/C/M) : ";
 cin>>menu;
 cout<<"Enter size (S/T/G/V) :";
 cin>>size;
 
       switch(menu=='e'||menu=='E')
           {
           case 'S':cout<<(menu=40)<<endl;
           case 'T':cout<<(menu=50)<<endl;
           case 'G':cout<<(menu=60)<<endl;
           case 'V':cout<<(menu=70)<<endl;
           
           case 's':cout<<(menu=40)<<endl;
           case 't':cout<<(menu=50)<<endl;
           case 'g':cout<<(menu=60)<<endl;
           case 'v':cout<<(menu=70)<<endl;
           }
           switch(menu=='A'||menu=='a')
           {
           case 'S':cout<<(menu=40)<<endl;
           case 'T':cout<<(menu=50)<<endl;
           case 'G':cout<<(menu=60)<<endl;
           case 'V':cout<<(menu=70)<<endl;
           
           case 's':cout<<(menu=40)<<endl;
           case 't':cout<<(menu=50)<<endl;
           case 'g':cout<<(menu=60)<<endl;
           case 'v':cout<<(menu=70)<<endl;
           }
           switch(menu=='C'||menu=='c')
           {
           case 'S':cout<<(menu=50)<<endl;
           case 'T':cout<<(menu=60)<<endl;
           case 'G':cout<<(menu=70)<<endl;
           case 'V':cout<<(menu=80)<<endl;
           
           case 's':cout<<(menu=50)<<endl;
           case 't':cout<<(menu=60)<<endl;
           case 'g':cout<<(menu=70)<<endl;
           case 'v':cout<<(menu=80)<<endl;
           }
            switch(menu=='L'||menu=='l')
           {
           case 'S':cout<<(menu=50)<<endl;
           case 'T':cout<<(menu=60)<<endl;
           case 'G':cout<<(menu=70)<<endl;
           case 'V':cout<<(menu=80)<<endl;
           
           case 's':cout<<(menu=50)<<endl;
           case 't':cout<<(menu=60)<<endl;
           case 'g':cout<<(menu=70)<<endl;
           case 'v':cout<<(menu=80)<<endl;
           }
           
            switch(menu=='V'||menu=='v')
           {
           case 'S':cout<<(menu=60)<<endl;
           case 'T':cout<<(menu=70)<<endl;
           case 'G':cout<<(menu=80)<<endl;
           case 'V':cout<<(menu=90)<<endl;
           
           case 's':cout<<(menu=60)<<endl;
           case 't':cout<<(menu=70)<<endl;
           case 'g':cout<<(menu=80)<<endl;
           case 'v':cout<<(menu=90)<<endl;
           
               
           }
 
 cout<<"How meny cup ? :";
 cin>>K;
cout<<"Do you want other menu ? (Y/N)";
 cin>>YN;
 
}


  cout<<"are you a member ? (Y/N) :";
 cin>>YN;
 
if(YN=='N'||YN=='n')
 
 total= menu*K;
cout<<"Total "<<(total)<<" "<<"baht"<<endl;
cout<<"Discount "<<(total*0.1)<<"baht"<<endl;
cout<<"you pay "<<(total-(total*0.1))<<endl;

          
 
 
 
    
    
    
    
 
 
 
    
    system("pause");
    return 0;
}

