//5920501626  Ponpimon  Nopparatnitiphong
#include<iostream>
using namespace std;
int main()
{
    int n,i,a;
    do{
        cout<<"input value:";
        cin>>n;
        
        
           if(n>9)
           {
               cout<<"Invalid Input!! Try Again"<<endl;
               continue;
           }
           if(n<0)
           {
            
               break;
           }
           for(i=1;(n>=i&&n<10);i=i+1)
          {
              if(i%3==0)
              {
              cout<<",";
              }
              a=n;
           }
    
    }while(n>=0);
    
    cout<<endl;
    cout<<"Total is "<<a<<endl;
    
    system("pause");
    return 0;
}
