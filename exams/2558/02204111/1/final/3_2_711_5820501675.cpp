#include<iostream>
using namespace std;
int mian()
{int x,y,z,c,v,e,r,j,k,l;
cout<<"Enter a matrix size:";
cin>>x;
if(x==2){ 
          cout<<"Enter matrix values:";
          cin>>y>>z;
          cout<<endl;
          cin>>c>>v;
          cout<<endl;
          if(z==0&&c==0){cout<<"The following matrix is diagonal matrix:"<<endl;
                                    cout<<"|"<<y<<z<<"|"<<endl;
                                    cout<<"|"<<c<<v<<"|"<<endl;}
          else{cout<<"The following matrix is not diagonal matrix:"<<endl;
                                    cout<<"|"<<y<<z<<"|"<<endl;
                                    cout<<"|"<<c<<v<<"|"<<endl;}
          }
if(x==3){
          cout<<"Enter matrix values:";
          cin>>y>>z>>r;
          cout<<endl;
          cin>>c>>v>>e;
          cout<<endl;
          cin>>j>>k>>l;
          cout<<endl;
          if(z==0&&r==0&&e==0&&c==0&&j==0&&k==0){cout<<"The following matrix is diagonal matrix:"<<endl;
                                                            cout<<"|"<<y<<z<<r<<"|"<<endl;
                                                            cout<<"|"<<c<<v<<e<<"|"<<endl;
                                                            cout<<"|"<<j<<k<<l<<"|"<<endl;}
          else{cout<<"The following matrix is not diagonal matrix:"<<endl;
                          cout<<"|"<<y<<z<<r<<"|"<<endl;
                          cout<<"|"<<c<<v<<e<<"|"<<endl;
                          cout<<"|"<<j<<k<<l<<"|"<<endl;}
          }
system("pause");
return 0 ;
         }
