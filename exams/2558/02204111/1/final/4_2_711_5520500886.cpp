#include <iosteam>
using namespace std;
int main()
{
    float a,b,c,d,e;
    
    cout<<"Give the number of passengers of day 1:";
    cin>>a;
    cout<<"Give the number of passengers of day 2:";
    cin>>b;
    cout<<"Give the number of passengers of day 3:";
    cin>>c;
    cout<<"Give the number of passengers of day 4:";
    cin>>d;
    cout<<"Give the number of passengers of day 5:";
    cin>>e;
    cout<<"Total passenger for air asia is:"<<a+b+c+d+e<<endl;
    cout<<"The average number of passengers for all days and all flights is :"<<a+b+c+d+e/5<<endl;
    cout<<"The largest number of passengers is:"<<max<<endl;
    
    system ("pause");
    return 0;
}
