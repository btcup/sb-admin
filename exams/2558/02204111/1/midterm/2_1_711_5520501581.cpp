#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int cups;
    float baht=0;
    char menu,size,x,y;
    do
    {
    cout<<"Welcom to A Cup-with-love Coffee!!"<<endl;
    cout<<"Enter your menu (E/A/L/M): ";
    cin>>menu;
    cout<<"Enter size (S/T/G/V): ";
    cin>>size;
    cout<<"Howmany cups? : "; 
    cin>>cups;
    cout<<"Do you want other menu? (Y/N) : ";
    cin>>x;
    if(menu=='e'||menu=='E')
                            {
                            if(size=='s'||size=='S')
                            baht==40; baht++;
                            if(size=='t'||size=='T')
                            baht==50; baht++;
                            if(size=='g'||size=='G')
                            baht==60;baht++;
                            if(size=='v'||size=='V')
                            baht==70;baht++;
                            }
    if(menu=='a'||menu=='A')
                            {
                            if(size=='s'||size=='S')
                            baht==40;baht++;
                            if(size=='t'||size=='T')
                           baht==50;baht++;
                            if(size=='g'||size=='G')
                            baht==60;baht++;
                            if(size=='v'||size=='V')
                            baht==70;baht++;
                            }
    if(menu=='c'||menu=='C')
                            {
                            if(size=='s'||size=='S')
                            baht==50;baht++;
                            if(size=='t'||size=='T')
                            baht==60;baht++;
                            if(size=='g'||size=='G')
                            baht==70;baht++;
                            if(size=='v'||size=='V')
                            baht==80;baht++;
                            }
    if(menu=='l'||menu=='L')
                            {
                            if(size=='s'||size=='S')
                            baht==50;baht++;
                            if(size=='t'||size=='T')
                            baht==60;baht++;
                            if(size=='g'||size=='G')
                            baht==70;baht++;
                            if(size=='v'||size=='V')
                            baht==80;baht++;
                            }
    if(menu=='m'||menu=='M')
                            {
                            if(size=='s'||size=='S')
                            baht==60;baht++;
                            if(size=='t'||size=='T')
                            baht==70;baht++;
                            if(size=='g'||size=='G')
                            baht==80;baht++;
                            if(size=='v'||size=='V')
                            baht==90;baht++;
                            }
    }
    while(x=='y'||x=='N');
    cout<<"Are you a member? (Y/N) : ";
    cin>>y;
    cout<<"Total" <<baht<<"Baht"<<endl;
    cout<<"Discount" <<baht*(10/100)<<"Baht"<<endl;
    cout<<"You pay" <<baht*(90/100)<<"Baht"<<endl;
    cout<<"Thank you."<<endl;
    system("pause");
    return 0;
}
