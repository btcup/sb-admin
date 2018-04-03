#include<iostream>
using namespace std;
int main (){
    int n,sum;
    char a,b,c,d;
    cout<<"Welcome to A Cup-with-love Coffee!!"<<endl;
    cout<<"Enter your menu (E/A/L/C/M):"<<endl;
    cin>>a;
    cout<<"Enter size (S/T/G/V) :"<<endl;
    cin>>b;
     if(a=='e'||'E'||'a'||'A'){
                if(b=='s'||'S')
               sum=40;
            else if(b=='t'||'T')
               sum=50;
            else if(b=='g'||'G')
               sum=60;
            else if(b=='v'||'V')
               sum=70;
               }
     else if(a=='c'||'C'||'l'||'L'){
                if(b=='s'||'S')
               sum=50;
            else if(b=='t'||'T')
               sum=60;
            else if(b=='g'||'G')
               sum=70;
            else if(b=='v'||'V')
               sum=80;
               }  
     else if(a=='m'||'M'){
         if(b=='s'||'S')
               sum=60;
            else if(b=='t'||'T')
               sum=70;
            else if(b=='g'||'G')
               sum=80;
            else if(b=='v'||'V')
               sum=90;
               }           
    cout<<"How many cup?:";
    cin>>c;
    cout<<"Do you want other menu ?:";
     cin>>d;
     if (d=='y')
          continue;
     else if(d=='n')
          break;
    t=sum*c;
    total=t+t+t;
    cout<<"total"<<total<<"Bath"<<endl;
    discount=total-[(total*10)/100];
    cout<<"discount"<<discount<<"Bath"<<endl;
    pay=total-discount ;
    cout<<"You pay"<<pay<<"Bath"<<endl;
    cout<<"Thank you." ;
    system("pause");
    return 0;
}
