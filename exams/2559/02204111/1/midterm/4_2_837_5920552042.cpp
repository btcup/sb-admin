#include<iostream>
using namespace std ;
int main()
{
  int A,B,C,D ;
  cout<<"Enter 1st number:"<<A<<endl;
  cout<<"Enter 2nd number:"<<B<<endl;
  cout<<"Enter 3rd number:"<<C<<endl;
  cout<<"Enter 4th number:"<<D<<endl;
  cin>>A>>B>>C>>D ;
  if(A>B&&A>C&&A>D){
     cout<<"1st number is Maximum"<<endl;               
     else if(B>A&&B>C&&B>D)
     cout<<"2nd number is Maximum"<<endl;
     else if(C>A&&C>B&&C>D)
     cout<<"3rd number is Maximum"<<endl;
     else if(D>A&&D>B&&D>C)
     cout<<"4th number is Maximum"}<<endl;
     }
     if(A<B&&A<C&&A<D){
     cout<<"1st number is Minimum"<<endl;
     else if(B<A&&B<C&&B<D)
     cout<<"2nd number is Minimum"<<endl;
     else if(C<A&&C<B&&C<D)
     cout<<"3rd number is Minimum"<<endl;
     else if(D<A&&D<B&&D<C)
     cout<<"4th number si Minimum"<<endl;}
                    
                    
     system("pause");
     return 0 ;
  
    
  
  
      
    }
