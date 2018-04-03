//5920500301_Jirat_Yensabai
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c,d,max,min;
        cout<<"Enter 1st number : ";
        cin>>a;
        
        cout<<"Enter 2nd number : ";
        cin>>b;
        cout<<"Enter 3rd number : ";
        cin>>c;
        cout<<"Enter 4th number : ";
        cin>>d;
        cout<<"                                        "<<endl;
            if (a<b&&a<c&&a<c)
            {
                   cout<<"1st number is Minimun"<<endl;
                   min=a;
            }
            else if (b<a&&b<c&&b<d)
            {
                   cout<<"2nd number is Minimun"<<endl;
                   min=b;
            }
            else if (c<a&&c<b&&c<d)
            {
                   cout<<"3rd number is Minimun"<<endl;
                   min=c;
            }
            else 
            {
                   cout<<"4th number is Minimun"<<endl;
                   min=d;
                   }
        
            if (a>b&&a>c&&a>c)
            {
               cout<<"1st number is Maximun"<<endl;
               max=a;
            }
            else if (b>a&&b>c&&b>d)
            {
               cout<<"2nd number is Maximun"<<endl;
               max=b;
            }
            else if (c>a&&c>b&&c>d)
            {
               cout<<"3rd number is Maximun"<<endl;
               max=c;
            }
            else 
            {
                 cout<<"4th number is Maximun"<<endl;
                 max=d;
                 }    
    
    cout<<"The difference betweem Min. and Max. is "<<(max-min)<<endl;
        
    
    
    
    
    
    
    system ("pause");
    return 0;
}
