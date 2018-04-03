#include<iostream>
using namespace std;
int main()
{
    float H,W,D;
    char x,y;
    cout<<"Welcome to the Fantastic Tiles!!"<<endl;
    cout<<"Please enter room size in meter (H*W*D) :";
    cin>>H>> D>> W;
    cout<<"Please select floor tile...(A/B/C) :";
    cin>>x;
    cout<<"Please select wall tile...(A/B/C) :";
    cin>>y;
    cout<<"----------------------------------"<<endl;
    cout<<"Number of floor tiles :"<<"    "<<"-->"<<"Price = "<<"   "<<"Baht"<<endl;
    cout<<"Number of wall tiles :"<<"    "<<"-->"<<"Price = "<<"   "<<"Baht"<<endl;
    cout<<"Total price :"<< "   "<<"+"<< "   "<<" = "<<"   "<<"Baht"<<endl;
    cout<<"----------------------------------"<<endl;
    
    system ("pause");
    return 0;
}
    
