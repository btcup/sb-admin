#include<iostream>
#include<cmath>
using namespace std;
int main()
  {
         float x,y,z,m,n,p;
         char  a,b;
         cout<<"welcome to the fantastic tiles!!"<<endl;
         cout<<"Please enter room size in meter (H x W x D):";
         cin>>x>>y>>z;
         cout<<"please select floor tile...(A/B/C):";
         cin>>a;
         cout<<"please select wall tile...(A/B/C):";
         cin>>b;
         cout<<"_ _ _ _ _ _ _ _ _"<<endl;
         m =120*55;
         n =572*80;
         p=m+n;
         cout<<"Number of floor tiles :120-->price = "<<m <<endl;
         cout<<"Number of wall tiles :572-->price = "<< n <<endl;
         cout<<"Total price"<<p<<endl;
         
          
          
  system("puase");
  return 0;
    
    }
