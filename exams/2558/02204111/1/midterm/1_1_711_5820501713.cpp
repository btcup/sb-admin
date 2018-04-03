#include<iostream>
using namespace std;
int main()
{   
    float u,v,s,b;
    cout<<" Please input usage : ";cin>>u;
    cout<<" Please input voltage : ";cin>>v;
    if(v>=22&&v<=33)
    { cout<<" Electricity cost : "<< u*2.4649<<endl;
    cout<<" Service : 228.17"<<endl;
    cout<<" Ft : "<<u*0.4638<<endl;
    cout<<" vat 7% : "<<(u*2.4649+228.17+60.294)*0.07<<endl;
    cout<<" Total cost : "<<(u*0.4638)+228.17+(u*2.4649)+(u*2.4649+228.17+60.294)*0.07<<endl;
    cout<<endl;} 

    else if(v<22);
    cout<<" Electricity cost 0-150 : 270.705"<<endl;
    cout<<" Electricity cost 151-400 : 138.905 "<<endl;
    cout<<" Service : 40.90"<<endl;
    cout<<" Ft : "<<u*0.4638<<endl;
    cout<<" vat 7% : "<<(40.90+u*0.4638+138.905+270.705)*0.07<<endl;
    cout<<" Total cost : "<<(40.90+u*0.4638+138.905+270.705)*0.07+u*0.4638+40.90+138.905+270.705<<endl;
    
    
    system("pause");
    return 0;
} 
