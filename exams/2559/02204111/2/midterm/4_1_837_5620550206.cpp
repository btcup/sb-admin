// 5620550206 Thanawut Kitcharoennon
#include<iostream>
using namespace std;
int main(){
    char a;
    double c,b,d,f;
    int e,g,h,i,j,l,n,k,m;
    
    cout<<"Type of vehicle ((C)Car or (M)Motorcycle)  : ";
    cin>>a;
    cout<<"Arrival time : ";
    cin>>b;
    cout<<"Leave time : ";
    cin>>d;
   e=b*100;
   g=d*100;
   f=(g-e)/100;
   i=b;
   j=d;
   h=e-(i*100);
   l=g-(j*100);
   n=60-h+l;
   if(n>60)
   n=l-h; 
   if(b<d){
   cout<<f<<" hours and "<<n<<" minuter "<<h<<" "<<l<<endl;
   
if(a=='C'){
   if(f>2)
   {
        if(f>=3&&f<=5)
        k=f*30;
        else if(f>=6&&f<=7)
        k=150+(f-5)*50;
        else
        k=500;}
    else
   k=0;    
      cout<< "You have to pay "<<k<<" bath" <<endl;  
       }

if(a=='M'){
   if(f>3)
   {
        if(f>=4&&f<=7)
        k=f*10;
        else
        k=150;}
    else
   k=0;  
   cout<< "You have to pay "<<k<<" bath" <<endl;   
        }}
        else
        cout<<"You can't leave before arrival time"<<endl;

   
    system("pause");
    return 0;
    
}
