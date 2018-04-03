#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,e,r;
    char ave,sum;
    double h,w,d;
    cout<<"Welcome to The Fantastic Tiles!!"<<endl;
    cout<<"Please enter room size in meter (H x W x D):";
    cin>>h>>w>>d;
    cout<<"Please select floor tile...(A/B/C):";
    cin>>a; 
    //if (a<b<c)
    //{
           //cin>>a;
           //cout<<<<;
           //if else (b>=c<=a)
           //cin>>b;
           //cout<<<<;
           //if else (c>a>b)
           //cin>>c;
           //cout<<<<;
           //}       
    cout<<"Please select well tile...(A/B/C):" <<endl;
    cin>>b;
    cout<<"------------------------------------------"<<endl;
    
    //if 
    //{
           //cin>>a;
           //cout<<<<;
           //if else 
           //cin>>b;
           //cout<<<<;
           //if else 
           //cin>>c;
           //cout<<<<;
           //}
    cout<<"Number of floor tiles :"<<a<<"-->"<<"Price"<<"="<<e<<"Baht"<<endl;
    cout<<"Number of wall tiles :"<<b<<"-->"<<"Price"<<"="<<r<<"Baht"<<endl;
    ave=(r+e);
    cout<<"Total price:"<<r<<"+"<<e<<"="<<ave<<"Bath"<<endl;
    
    
    
    system("pause");
    return 0;
}
