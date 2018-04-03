#include<iostream> //5920550481 Miss Kittika Khotchompoo 
using namespace std;
int main()
{
    char x;
    int y;
    double z,a,b,c,d;
    cout<<"------ Car lease calculator -----------"<<endl;
    cout<<"Enter car model : ";
    cin>>x;
    cout<<"Enter number of years (1-6) : ";
    cin>>y;
    cout<<"Enter your salary : ";
    cin>>z;
    cout<<"---------------------------------------";
    d=12*y;
    
    if(x=='A'){
                a=1385000-((1385000*25)/100);
                cout<<"Finacing amount : "<<a<<endl;
                b=((a*2.09)/100)*y;
                cout<<"Amou of interest : "<<b<<endl;
                c=(a+b)/d;
                cout<<"Monthly payment : "<<c<<endl;
                }
                
                else if(c>(z/2)){
                     cout<<"the mothly payment is over than 50% of your salary!!"<<endl;
                     }
                else {
                     cout<<"good decision, enjoy your new car "<<endl;
                     }
    if(x=='B'){
                a=511500-((511500*25)/100);            
                cout<<"Finacing amount : "<<a<<endl;
                b=((a*1.79)/100)*y;
                cout<<"Amou of interest : "<<b<<endl;
                c=(a+b)/d;
                cout<<"Monthly payment : "<<c<<endl;
                }
               
                else if(z>(y/2)){
                     cout<<"the mothly payment is over than 50% of your salary!!"<<endl;
                     } 
                else {
                     cout<<"good decision, enjoy your new car "<<endl;
                     }
    if(x=='C'){
                a=738000-((738000*25)/100);
                cout<<"Finacing amount : "<<a<<endl;
                b=((a*1.99)/100)*y;
                cout<<"Amou of interest : "<<b<<endl;
                c=(a+b)/d;
                cout<<"Monthly payment : "<<c<<endl;
                }
                
                else if(c>(z/2)){
                     cout<<"the mothly payment is over than 50% of your salary!!"<<endl;
                     }
                else {
                     cout<<"good decision, enjoy your new car "<<endl;
                     }
    if(x=='J'){
                a=694000-((694000*25)/100);
                cout<<"Finacing amount : "<<a<<endl;
                b=((a*1.99)/100)*y;
                cout<<"Amou of interest : "<<b<<endl;
                c=(a+b)/d;
                cout<<"Monthly payment : "<<c<<endl;
                }
               
                else if(c>(z/2)){
                     cout<<"the mothly payment is over than 50% of your salary!!"<<endl;
                     } 
                else {
                     cout<<"good decision, enjoy your new car "<<endl;
                     }
                     system("pause");
                     return 0;
                     
               }
