#include<iostream>
using namespace std;
int main()
{
    int price,tiles;
    char a,b,A,B,C;
    float H,W,D,size;
    {
    cout<<"Welcome to The Fantastic Tiles!!";
    cout<<endl;
    
    cout<<"Please enter room size in meter (H x W x D) :";
    cin>>H>>W>>D;
    size=H*W*D;
    cout<<"Please select floor tile...(A/B/C):";
    cin>>a;
    cout<<"Please select wall tile...(A/B/C):";
    cin>>b;
    cout<<"------------------------------"<<endl;
    
    
     system("pause");
    return 0;
}
}
