#include <iostream>
#include <string>
using namespace std;


    int GetIntVal (string strConvert)
    {
        int intReturn;
        intReturn = atoi (strConvert.c_str());
        return (intReturn);
    }
    
  
    
    int main()
   {
        int A,B,C,D,;
        int E,F,G,H;
   string strConvert;
   strConvert = "Hello";
   
     GetIntVal(strConvert);
     cout<<"Enter decimal number :";
     cin>>A;
     cout<<"Enter base (2-9) :";
     cin>>B;
     cout<<A<<"b10 is 1000b"<<B<<endl;
     
     cout <<"Enter decimal number :";
     cin>>C;
     cout<<"Enter base (2-9) :";
     cin>>D;
     
   
     
     
      
    
     
    
    
    
     system("pause");
     return 0;
     
}
