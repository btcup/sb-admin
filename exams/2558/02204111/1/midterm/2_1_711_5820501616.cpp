#include<iostream>
using namespace std;
int main(){
    cout<<"welcome to A Cup-with-love coffee!!"<<endl;
    char m,s,a,mem;
    int c,x,sum=0,dis=0,y=1;
    do{
         cout<<"Enter your menu (E/A/L/C/M):";
         cin>>m;
         cout<<"Enter size(S/T/G/V):";
         cin>>s;
         cout<<"How many cups:";
         cin>>c;
         if(m=='E'||'e'||'A'||'a'){
                                   if(s=='s'||'S') x=c*40;
                                   if(s=='T'||'t') x=c*50;
                                   if(s=='G'||'g') x=c*60;
                                   if(s=='V'||'v') x=c*70;
                                   }
         else if(m=='c'||'C'||'L'||'l'){
                                   if(s=='s'||'S') x=c*50;
                                   if(s=='T'||'t') x=c*60;
                                   if(s=='G'||'g') x=c*70;
                                   if(s=='V'||'v') x=c*80;
                                   }
         else if(m=='m'||'M'){     if(s=='s'||'S') x=c*60;
                                   if(s=='T'||'t') x=c*70;
                                   if(s=='G'||'g') x=c*80;
                                   if(s=='V'||'v') x=c*90;
                         }
         sum=sum+x;
         cout<<"Do you want other menu?(Y/N):";
         cin>>a;
    }
    while(a=='Y'||'y');
    cout<<"Are you member?(Y/N):";
    cin>>mem;
    if(mem=='Y'||'y') dis=dis+sum/10;
    cout<<"Total"<<sum<<" Bath"<<endl;
    cout<<"Discout"<<dis<<" Bath"<<endl;
    cout<<"You pay"<<(sum-dis)<<" Bath"<<endl;
    cout<<"thank you"<<endl;
    system("pause");
    return 0;
}
