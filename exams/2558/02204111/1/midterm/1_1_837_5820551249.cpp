#include <iostream>
using namespace std;
int main ()
{
    float x,y;
    cout<<"Please input usage : " ;
    cin>> x;
    cout<<"Please input voltage : " ;
    cin>>y;
    cout<<"Electricity Cost :320.437"<<endl;
    cout<<"Servince : 228.17"<<endl;
    cout<<"Ft:60.294"<<endl;
    cout<<"Vat 7% : 42.62307"<<endl;
    cout<<"Total cost : "<<(x*2.4649)+228.17+(60.294/100*x)+42.62307<<" "<<endl;

system ("pause");
return 0;
}
