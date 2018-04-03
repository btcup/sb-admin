#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout<<"welcome to the fantastic!!"<<endl;
    double h,w,d,tf,tw;
    char F,W;
    int numf,numw,tt,ts;
    cout<<"please enter room size in meter(H x W x D)";
    cin>>h>>w>>d;
    cout<<"please select floor tile...(A/B/C)";
    cin>>F;
    cout<<"please select wall tile...(A/B/C)";
    cin>>W;
    cout<<"----------------"<<endl;
    tf=d*w;
    tw=2*d*h+2*h*w;
    if(F=='a'||'A') {
                    numf=int(ceil(tf/0.09));
                    tt=numf*55;
                    }
    if(F=='b'||'B'){
                     numf=int(ceil(tf/0.2025));
                     tt=numf*80;
                     }
    if(F=='c'||'C'){
                    numf=int(ceil(tf/0.36));
                    tt=numf*90;
                    }
    if(W=='a'||'A') {
                    numw=int(ceil(tw/0.04));
                    ts=numw*17;
                    }
    if(W=='b'||'B'){
                     numw=int(ceil(tw/0.06));
                     ts=numw*32;
                     }
    if(W=='c'||'C'){
                    numw=int(ceil(tw/0.09));
                    ts=numw*50;
                    }
    cout<<"Number of floor tile:"<<numf<<"-->price="<<tf<<" Bath"<<endl;
    cout<<"Number of wall tile:"<<numw<<"-->price="<<ts<<" Bath"<<endl;
    cout<<"Total price"<<tf<<"+"<<ts<<"="<<(ts+tf)<<" Bath"<<endl;
    system("pause");
    return 0;
}
