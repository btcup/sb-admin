#include<iostream>
using namespace std;
int main()
{
    char t, s, m,w;
    int n,sum=0,total=0;
    cout<<"Welcome to A cup-with-love Coffee!!"<<endl;
    cout<<"Enter your menu (E/A/L/C/M) : ";
    cin>>t;
    cout<<"Enter size (S/T/G/V) : " ;
    cin>>s;
    cout<<"How many cups ? : " ;
    cin>>n;
    if(s=='S'||s=='s') {
                                             if(t=='E' ||t=='e') {sum=n*40;}
                                             if(t=='A' ||t=='a') {sum=n*40;}
                                             if(t=='C' ||t=='c') {sum=n*50;}
                                             if(t=='L' ||t=='l') {sum=n*50;}
                                             if(t=='M' ||t=='m') {sum=n*60;}
                                             }
    if(s=='T'||s=='t') {
                                             if(t=='E' ||t=='e') {sum=n*50;}
                                             if(t=='A' ||t=='a') {sum=n*50;}
                                             if(t=='C' ||t=='c') {sum=n*60;}
                                             if(t=='L' ||t=='l') {sum=n*60;}
                                             if(t=='M' ||t=='m') {sum=n*70;}
                                             }
    if(s=='G'||s=='g') {
                                             if(t=='E' ||t=='e') {sum=n*60;}
                                             if(t=='A' ||t=='a') {sum=n*60;}
                                             if(t=='C' ||t=='c') {sum=n*70;}
                                             if(t=='L' ||t=='l') {sum=n*70;}
                                             if(t=='M' ||t=='m') {sum=n*80;}
                                             }
    if(s=='V'||s=='v') {
                                             if(t=='E' ||t=='e') {sum=n*70;}
                                             if(t=='A' ||t=='a') {sum=n*70;}
                                             if(t=='C' ||t=='c') {sum=n*80;}
                                             if(t=='L' ||t=='l') {sum=n*80;}
                                             if(t=='M' ||t=='m') {sum=n*90;}
                                             }
    total=total+sum;                           
    while(true){
                sum=0;
                cout<<"Do you want other menu? (Y/N) : ";
                cin>>w;
                if(w=='y' ||w=='Y'){
                          cout<<"Enter your menu (E/A/L/C/M) : ";
                          cin>>t;
                          cout<<"Enter size (S/T/G/V) : " ;
                          cin>>s;
                          cout<<"How many cups ? : " ;
                          cin>>n; 
                          if(s=='S'||s=='s') {
                                             if(t=='E' ||t=='e') {sum=n*40;}
                                             if(t=='A' ||t=='a') {sum=n*40;}
                                             if(t=='C' ||t=='c') {sum=n*50;}
                                             if(t=='L' ||t=='l') {sum=n*50;}
                                             if(t=='M' ||t=='m') {sum=n*60;}
                                             }
                          if(s=='T'||s=='t') {
                                             if(t=='E' ||t=='e') {sum=n*50;}
                                             if(t=='A' ||t=='a') {sum=n*50;}
                                             if(t=='C' ||t=='c') {sum=n*60;}
                                             if(t=='L' ||t=='l') {sum=n*60;}
                                             if(t=='M' ||t=='m') {sum=n*70;}
                                             }
                          if(s=='G'||s=='g') {
                                             if(t=='E' ||t=='e') {sum=n*60;}
                                             if(t=='A' ||t=='a') {sum=n*60;}
                                             if(t=='C' ||t=='c') {sum=n*70;}
                                             if(t=='L' ||t=='l') {sum=n*70;}
                                             if(t=='M' ||t=='m') {sum=n*80;}
                                             }
                          if(s=='V'||s=='v') {
                                             if(t=='E' ||t=='e') {sum=n*70;}
                                             if(t=='A' ||t=='a') {sum=n*70;}
                                             if(t=='C' ||t=='c') {sum=n*80;}
                                             if(t=='L' ||t=='l') {sum=n*80;}
                                             if(t=='M' ||t=='m') {sum=n*90;}
                                             }
                          total=total+sum;
                          }
                if(w=='n' ||w=='N') break;
                }
    cout<<"Are you a member? (Y/N) : ";
    cin>>m;
    if(m=='y' ||m=='Y'){
              cout<<"Total "<<total<<" Bath"<<endl;
              cout<<"Discout "<<total*0.1<<" Bath"<<endl;
              cout<<"You pay "<<total-(total*0.1)<<" Bath"<<endl;
              cout<<"Thank you."<<endl;
              }
    
    if(m=='n' ||m=='N'){
              cout<<"Total "<<total<<" Bath"<<endl;
              cout<<"Discout "<<"0"<<" Bath"<<endl;
              cout<<"You pay "<<total<<" Bath"<<endl;
              cout<<"Thank you."<<endl;
              }
    system("pause");
    return 0;

}
    
    
    
    
    
    
    
    
    
    
    
    
    
