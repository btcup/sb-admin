//5920500328 Jeeranan  Chanmanee
#include <iostream>
using namespace std;
int main()
{
    char b,u;
    float a,c;
    cout<<"Enter objective (Utilization, Wast)";
    cin>>b;
    if(b=='U')
    {
              cout<<"Enter utilization tybe (Business, Agriculture) : ";
              cin>>u;
              if(u=='B')
              {
                        cout<<"Enter land cost (million):";
                        cin>>a;
              }
               if(u=='A')
              {
                        cout<<"Enter land cost (million):";
                        cin>>a;
              }
    }         
    else
    { 
        cout<<"land cost (million):";
      cin>>a;
      cout<<"land age:";
      cin>>c;
    }
     
    system ("pause");
    return 0;
}
