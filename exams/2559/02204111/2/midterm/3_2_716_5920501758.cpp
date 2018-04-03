//5920501758 Sukanya Fendy
#include<iostream>
using namespace std;
int main()
{
    float e,l,c,u,g,sum;
    do
        {
          cout<<"Enter electricity cost per unit (baht) : ";
          cin>>e;
          cout<<endl; 
        }
    while (e<=0);
    do
    {   do
        {
             do
             {
              cout<<"Enter last unit: ";
              cin>>l;
              if (l>99999||l<0&&l!=(1-2)){ cout<<"Invalid last unit!"<<endl;
                                  cout<<endl; }
             }
             while (l>99999||(l<0&&l!=(1-2)));
             
             do
             {
              cout<<"Enter current unit: ";
              cin>>c;
             }
             while (c>99999);
             if (c>99999||(l>c||c<0)&&c!=(1-2)){ cout<<"Invalid current unit!"<<endl;
                                        cout<<endl; }
        }
        while (l>c);
         u=c-l;
        cout<<"Unit used = "<<u<<endl; 
         g=u*e;
        cout<<"Electricity chage (bahts) = "<<g<<endl;
        cout<<endl;
         sum=sum+g;
    }
    while (l!=(1-2)||c!=(1-2));
    cout<<"-- End of Calculation --"<<endl;
    cout<<endl;
    cout<<"Total of Electricity charge (bahts) = "<<sum<<endl;

system("pause");
return 0;   
    
}
