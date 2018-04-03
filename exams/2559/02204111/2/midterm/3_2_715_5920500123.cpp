//5920500123 Tanakorn Lekmark
#include <iostream>
using namespace std;
int main()
{
    float a,b,c,d;
    cout<<"Enter electricity cost per unit (bath):";
    cin>>d;
    do
    {   
        if(d>=1)
        {
        
                  
                  cout<<"Enter last unit:";
                  cin>>a;
                  if(a==-1)
                  {
                           break;
                  }
                  cout<<"Enter current unit:";
                  cin>>b;
                  if(b>a)
                  {
                         c=b-a;
                         cout<<"Used = "<<c<<endl;
                         cout<<"Electricity charge (bath)="<<c*d<<endl;
                         c++;      
                  }
                  else
                  {
                      cout<<"Invalid current unit!"<<endl;
                  }
        }
        else if(a==-1)
        {
            cout<<"--End of Calaculation--";
        }
        
    }while(a!=-1);
    cout<<"Total of Electricity charge (baths)="<<c<<endl;
    system("pause");
    return 0;
}
      
