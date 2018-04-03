#include <iostream>
using namespace std;
int main()
{
    int x;
    
    cout<<"Size of matrix: " ;
    cin>>x;
    
    if (x!=1)
    {
    cout<<"Value : "<<endl;
    cout<<"1  "<<"2"<<endl;
    cout<<"3  "<<"4"<<endl;
    cout<<endl;
    
    
    cout<<"Sub-matrix :"<<endl;
    cout<<"|4|"<<endl;
    cout<<"----"<<endl;
    cout<<"|3|"<<endl;
    cout<<"----"<<endl;
    cout<<"|2|"<<endl;
    cout<<"----"<<endl;
    cout<<"|1|"<<endl;
     
    cout<<endl;
    }
    else if (x==1)
    {
         cout<<"Error !! no sub matrix"<<endl;
    }
    
    
    system ("pause");
    return 0;
}
