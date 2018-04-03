// 5520552185 Mr.Chanin Chaiya
#include <iostream>
using namespace std;
int main ()
{
    int w,x,y,z,difference;
    cout<<"Enter 1st number : ";
    cin>> w;
    cout<<"Enter 2nd number : ";
    cin>> x;
    cout<<"Enter 3rd number : ";
    cin>> y;
    cout<<"Enter 4th number : ";
    cin>> z;
    cout<<endl;
    {
    if(w<x&&w<y&&w<z)
    cout<<"1st number is Minimun"<<endl;
    else if(x<w&&x<y&&x<z)
    cout<<"2nd number is Minimun"<<endl;
    else if(y<w&&y<x&&y<z)
    cout<<"3rd number is Minimun"<<endl;
    else if(z<w&&z<x&&z<y)
    cout<<"4th number is Minimun"<<endl;
    }   
    {
    if(w>x&&w>y&&w>z)
    cout<<"1st number is Maximun"<<endl;
    else if(x>w&&x>y&&x>z)
    cout<<"2nd number is Maximun"<<endl;
    else if(y>w&&y>x&&y>z)
    cout<<"3rd number is Maximun"<<endl;
    else if(z>w&&z>x&&z>y)
    cout<<"4th number is Maximun"<<endl;
    }
    difference=300;
    cout<<"The difference between Min. and Max. is "<< difference <<endl;
    system("pause");
    return 0;
}
