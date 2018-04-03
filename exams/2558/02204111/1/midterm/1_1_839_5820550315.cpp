#include <iostream>
using namespace std;
int main()
{
    float a,b;
    cout<<"Please input usage :";
    cin>>a;
    cout<<"Please input voltage :";
    cin>>b;
    if (b>22&&b<33)
         {
         cout<<"Electric Cost : "<<a*2.4649<<endl;
         cout<<"Service : 228.17"<<endl;
         cout<<"Ft : "<<46.38*a*0.01<<endl;
         cout<<"Vat 7 % :"<<42.62307<<endl;
         cout<<"Total cost : "<<(a*2.4649)+228.17+(0.4638*a)+42.62307<<endl;       
         }
    else if (b<22)
       if (a<=150)
       {
              cout<<"Electric Cost 0-150 :"<<a*1.8047<<endl;
              cout<<"Service : 40.90"<<endl;
              cout<<"Ft : "<<46.38*a*0.01<<endl;
              cout<<"Vat 7 % :"<<26.68225<<endl;
              }
       if(a>150&&a<400)
        {
                    cout<<"Electric Cost 0-150 : "<<150*1.8047<<endl;
                    cout<<"Electric Cost 151-400 : "<<(a-150)*2.7781<<endl;
                    cout<<"Service : 40.90"<<endl;
                    cout<<"Ft : "<<46.38*a*0.01<<endl;
                    cout<<"Vat 7 % :"<<38.0289<<endl;
                    }
        if(a>400)
        {
             cout<<"Electric Cost 0-150 : "<<150*1.8047<<endl;
             cout<<"Electric Cost 151-400 : "<<250*2.7781<<endl;
             cout<<"Electric Cost 401 : "<<(a-400)*2.9780<<endl;
             cout<<"Service : 40.90"<<endl;
             cout<<"Ft : "<<46.38*a*0.01<<endl;
             cout<<"Vat 7 % :"<<95.4618<<endl;
             }
    
    system("pause");
    return 0;
}
    
    
