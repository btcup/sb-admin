//5920550252 Warit Singdee
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    char a;
    float A,L,c;
    int p,d;
    cout<<"Type of vehicle ((C) Car or (M) Motorcycle) :" ;
    cin>>a;
    cout<<"Arrival time :" ;
    cin>>A;
    cout<<"Leave time :";
    cin>>L;
    c= L-A;
    d= ((floor(L)*60 - floor(A)*60)/60);
        if (a=='M')
      {    if (c<0)
           cout << "You can't leave before arrival time"<<endl;
           else    {   if(c<3)
                       { cout<< int(c) <<"hours and"<< d <<"minutes"<<endl;
                        cout<<"You have to pay 0 bath"<<endl; 
                        } 
                       else 
                             { if (c<=7)
                                {  p = ceil(c)*10; 
                                  cout<< int(c) <<"hours and"<< d <<"minutes"<<endl;
                                   cout<<"You have to pay"<< p << "bath"<<endl;  }
                               
                             
                                else  
                                  {  p= ceil(c)*150; 
                                     cout<< int(c) <<"hours and"<< d <<"minutes"<<endl;
                                     cout<<"You have to pay"<< p << "bath"<<endl;  }
                          
                       }    }        
      }        
      
       if (a=='C')
      {    if (c<0)
           cout << "You can't leave before arrival time"<<endl;
                 else     
                   {      
                            if(c<2)
                               { cout<< int(c) <<"hours and"<< d <<"minutes"<<endl;
                                     cout<<"You have to pay 0 bath"<<endl;  }
                               else
                               {  if (c<=5)
                                     {  p = ceil(c)*300; 
                                      cout<< int(c) <<"hours and"<< d <<"minutes"<<endl;
                                        cout<<"You have to pay"<< p << "bath"<<endl;  }
                                  else  
                                    {  if (c<=8)   
                                         { p= ceil(c)*50; 
                                             cout<< int(c) <<"hours and"<< d <<"minutes"<<endl;
                                               cout<<"You have to pay"<< p << "bath"<<endl; }
                                               else 
                                                 {p=500; 
                                                  
                                                   cout<< int(c) <<"hours and"<< d <<"minutes"<<endl;
                                                     cout<<"You have to pay"<< p << "bath"<<endl;}
                              }
                          
                       }    }        
      }               
    
                   
        
system ("pause");
return 0 ;

}
