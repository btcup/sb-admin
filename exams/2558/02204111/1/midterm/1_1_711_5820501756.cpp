#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float p,k;
    cin>>p;
    cout<<"Please input usage : "<<p<<endl;
    cin>>k;
    cout<<"please input voltage : "<<k<<endl;
    cout<<"Electricity cost : "<<(p*2.4649)<<endl;
    cout<<"Service : "<<228.17<<endl;
    cout<<"Ft : "<<(46.38*p)/100<<endl;
    cout<<"Vat 7 % : "<<42.62307<<endl;
    
    cout<<"Total cost : "<<(p*2.4649)+228.17+((46.38*p)/100)+42.62307<<" Baht"<<endl; 

    system("pause");
    return 0;
}
    
