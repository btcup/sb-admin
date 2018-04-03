//5920503777 Terisara Micaraseth
#include<iostream>
using namespace std;
int main()
{ 
    int a,b,c,d,different,max,min;
    cout<<"Enter 1st number : ";
    cin>>a;
      cout<<"Enter 2nd number : ";
    cin>>b;
      cout<<"Enter 3rd number : ";
    cin>>c;
     cout<<"Enter 4th number : ";
    cin>>d;
 
    if(a<b||a<c||a<d)
    cout<<"1st number is Minimum";
    if(b<a||b<c||b<d)
    cout<<"2rd number is Minimum";
    if(c<a||c<b||c<d)
    cout<<"3rd number is Minimum";
    if(d<a||d<b||d<c)
    cout<<"1st number is Minimum";
      
      if(a>b||a>c||a>d) 
        cout<<"1st number is Maximum";   
    else if(b>a||b>c||b>d)
    cout<<"2rd number is Maximum";
      else if(c>a||c>b||c>d)
    cout<<"3rd number is Maximum";
      else if(d>a||d>b||d>c)
    cout<<"4rd number is Maximum";

    
      different=max-min;
          cout<<"The different between Min. and Max. is"<<different;
      system("pause");
    return 0;
}    
