#include <iostream> //5920503289 Supanut Ubalee
#include <cmath>
using namespace std;
int main()
{
    float in,out,x,y,z;
    cout<<"Arrival time : ";
    cin>>in;
    in=(in*100);
    cout<<"Leave time : ";
    cin>>out;
    x=out-in;
    cout<<(int(x)%60)<<" Hours and "<<(int(x)%100)<<endl;
system ("pause");       
return 0;
}
