#include <iostream>
using namespace std;
int main()
{
    char o,t;
    double land,building,age,sum;
    cout<<"Enter objective (Living, Agriculture):";
    cout<<"Enter living type (Main, Second):";
    cout<<"Enter land cost (million):";
    cout<<"Enter building cost(million)";
    cout<<"Building age:";
    cin>>o>>t>>land>>building>>age;
    if(o=='l'||o=='L')
    
       if(t=='M'||t=='m')
       {
          if(land<50)
          cout<<"your estate cost is"<<sum<<"million bath"<<endl;
          cout<<""
          else if (land>=50&&land<100)
          else 
          }
       else if (t=='S'||t=='s')
       {
          if(land<5)
          else if (land>=5&&land<10)
          else
         }
    else if(o=='A'||o=='a')
       if(land<40)
       cout<<"your estate cost is"<<land<<"million bath"<<endl;
       cout<<"The land tax is exemption.";
       else if (land>=40&&land<80)
       cout<<"your estate cost is"<<sum<<"million bath"<<endl;
       else
    
    
    system("pause");
    return 0;
