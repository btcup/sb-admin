#include <iostream>
using namespace std;
int main()
{
    float x,y,z,z2,z3,v,c,f;
    cout<<"Please input usage : ";
    cin>>x;
    cout<<"Please input voltage : ";
    cin>>y;
    if(y>=22)
    {
             z=x*2.4649;
             v=z*7/100;
             f=(46.38*x);
             c=z+228.17+f+v;
             cout<<"Electricity Cost : "<<z<<endl;
             cout<<"Service : 228.17"<<endl;
             cout<<"Ft : 46.38"<<endl;
             cout<<"Vat 7% : "<<v<<endl;
             cout<<endl;
             cout<<"Total cost : "<<c<<endl;
             }
    if(y<22)
    {
            if(x<=150){
                      z=x*1.8047;
                      v=z*7/100;
                       f=(46.38*x);
                      c=z+40.90+f+v;
                      cout<<"Electricity Cost 0-150 : "<<z<<endl;
                      cout<<"Service : 40.90"<<endl;
                      cout<<"Ft : 46.38"<<endl;
                      cout<<"Vat 7% : "<<v<<endl;
                      cout<<endl;
                      cout<<"Total cost : "<<c<<endl;
             }
             if(x>150&&x<=400){
                                z=x*1.8047;
                                z2=x*2.7781;
                      v=z*7/100;
                       f=(46.38*x);
                      c=z+z2+40.90+f+v;
                      cout<<"Electricity Cost 0-150 : "<<z<<endl;
                      cout<<"Electricity Cost 150-400 : "<<z2<<endl;
                      cout<<"Service : 40.90"<<endl;
                      cout<<"Ft : 46.38"<<endl;
                      cout<<"Vat 7% : "<<v<<endl;
                      cout<<endl;
                      cout<<"Total cost : "<<c<<endl;}
                      
                      }
             system("pause");
             return 0;
}
