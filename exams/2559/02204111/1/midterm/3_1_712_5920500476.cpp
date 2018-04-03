// Ponlawit Archawaphakdee
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"input value : ";
    cin>>a;
    for(b=0;a>=0;)
     {
                if(a<10)
                 {
                        cout<<"input value : " ;
                        b=b*10+a;
                        cin>>a;
                      
                 }
                else
                 {
                        cout<<"Invalid Input !! Try again"<<endl;
                        cout<<"input value : ";
                        cin >> a;
                 }
                        
     } 
     cout<< "Toral is " <<b <<endl;
      system("pause");
      return 0;
      }
