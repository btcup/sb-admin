#include<iostream>
using namespace std;
int main()
{
    char f, z;
    int ft,wt,pay=0;
    float h,w,d;
    cout<<"Welcome to The Fantastic Tiles!!"<<endl;
    while(true){
                pay=0;
                cout<<"Please enter room size in meter (H x W x D) : ";
                cin>>h>>w>>d;
                cout<<"Please select floor tile ...(A/B/C) : " ;
                cin>>f;
                cout<<"Please select wall tile ...(A/B/C) : " ;
                cin>>z;
                cout<<"---------------------------------------"<<endl;
                if(f=='A'||f=='a') {pay=55;
                                   ft=w*d*10000/900;}
                if(f=='B'||f=='b') {pay=80;
                                   ft=w*d*10000/2025;}
                if(f=='C'||f=='c') {pay=90;
                                   ft=w*d*10000/3600;}
                if(z=='A'||w=='a') {pay=17;
                                   wt=((2*h*d*10000/400)+(2*h*w*10000/400));}
                if(z=='B'||w=='b') {pay=32;
                                   wt=((2*h*d*10000/400)+(2*h*w*10000/600));}
                if(z=='C'||w=='c') {pay=50;
                                   wt=((2*h*d*10000/400)+(2*h*w*10000/400));}
                cout<<"Number of floor tiles : "<<ft<<" --> Price ="<<pay*ft<<endl;
                
                cout<<"Number of floor tiles : "<<wt<<" --> Price ="<<pay*wt<<endl;
                cout<<"Total price : "<<(pay*ft)<<" + "<<(pay*wt)<<" = "<<(pay*ft)+(pay*wt) <<"Baht"<<endl;
                cout<<"---------------------------------------"<<endl;
}
system("pause");
return 0;
}
                
                
