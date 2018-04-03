#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    float Tot,Dis,many,cup,size;
    char menu,other,member,e,a,l,c,m,s,t,g,v,y,n;
    cout<<"Welcome to A Cup-with-love Coffe!!"<<endl;
    cout<<"Enter your menu (E/A/L/C/M): ";
    cin>>menu;
              if(e||a){
               cout<<"Enter size (S/T/G/V): ";
               cin>>size;
                         }
                         if(s){
                         (size=40);
                         }
                         if(t){
                         (size=50);
                         }
                          if(g){
                         (size=60);
                         } 
                         if(v){
                         (size=70);
                         }
                       
              else if(c||l){
              cout<<"Enter size (S/T/G/V): ";
               cin>>size;
                         }
                         if(s){
                         (size=50);
                         }
                        else if(t){
                         (size=60);
                         }
                         else if(g){
                         (size=70);
                         } 
                        else if(v){
                         (size=80);
                         }
               else{
               cout<<"Enter size (S/T/G/V): ";
               cin>>size;
                         
                         }
                         if(s)
                         {
                         (size=60);
                         }
                        else if(t){
                         (size=70);
                         }
                         else if(g){
                         (size=80);
                         } 
                        else if(v){
                         (size=90);
                         }
               cout<<"How many cups?: ";
               cin>>cup;
               cout<<"Do you want other menu? (Y/N): ";
               cin>>other;
                          if(y){
                                cout<<"Enter your menu (E/A/L/C/M): ";
                                cin>>menu;
                                           if(e||a){
                                           cout<<"Enter size (S/T/G/V): ";
                                           cin>>size;
                                                     }
                                                     if(s){
                                                     (size=40);
                                                      }
                                                    else if(t){
                                                     (size=50);
                                                       }
                                                     else if(g){
                                                      (size=60);
                                                      } 
                                                      else if(v){
                                                       (size=70);
                                                        }
                                             else if(c||l){
                                              cout<<"Enter size (S/T/G/V): ";
                                               cin>>size;
                                                    }
                                                     if(s){
                                                      (size=50);
                                                       }
                                                       else if(t){
                                                         (size=60);
                                                          }
                                                           else if(g){
                                                             (size=70);
                                                              } 
                                                             else if(v){
                                                                (size=80);
                                                                 }
                                             else{
                                               cout<<"Enter size (S/T/G/V): ";
                                               cin>>size;
                                                       }
                                                        if(s){
                                                        (size=60);
                                                        }
                                                        else if(t){
                                                        (size=70);
                                                        }
                                                        else if(g){
                                                         (size=80);
                                                         } 
                                                         else if(v){
                                                           (size=90);
                                                            }          
                                cout<<"How many cups?: ";
                                cin>>cup;
                                cout<<"Do you want other menu? (Y/N): ";
                                cin>>other;
                                    if(y){
                                cout<<"Enter your menu (E/A/L/C/M): ";
                                cin>>menu;
                                           if(e||a){
                                           cout<<"Enter size (S/T/G/V): ";
                                           cin>>size;
                                                    }
                                                     if(s){
                                                     (size=40);
                                                      }
                                                     if(t){
                                                     (size=50);
                                                       }
                                                      if(g){
                                                      (size=60);
                                                      } 
                                                       if(v){
                                                       (size=70);
                                                        }
                                             else if(c||l){
                                              cout<<"Enter size (S/T/G/V): ";
                                               cin>>size;
                                                     }
                                                     if(s){
                                                      (size=50);
                                                       }
                                                       else if(t){
                                                         (size=60);
                                                          }
                                                           else if(g){
                                                             (size=70);
                                                              } 
                                                             else if(v){
                                                                (size=80);
                                                                 }
                                             else{
                                               cout<<"Enter size (S/T/G/V): ";
                                               cin>>size;
                                                       }
                                                        if(s){
                                                        (size=60);
                                                        }
                                                        else if(t){
                                                        (size=70);
                                                        }
                                                        else if(g){
                                                         (size=80);
                                                         } 
                                                         else if(v){
                                                           (size=90);
                                                            }          
                                             else{
                                             cout<<"Are you a member? (Y/N): ";
                                             cin>>member;
                                                 if(y){
                                                 cout<<"Total"<<(size*cup)<<"Bath"<<endl;
                                                 cout<<"Discount"<<(size*cup)/10<<"Bath"<<endl;
                                                 cout<<"You pay"<<(size*cup)-(size*cup)/10<<"Bath"<<endl;
                                                 cout<<"Thank you."<<endl;
                                                 }
                                                 else{
                                                 cout<<"Total"<<(size*cup)<<"Bath"<<endl;
                                                 cout<<"Discount"<<"0"<<"Bath"<<endl;
                                                 cout<<"You pay"<<(size*cup)<<"Bath"<<endl;
                                                 cout<<"Thank you."<<endl;
                                                 }
                                                 
                                
                                      else{        
                                              cout<<"How many cups?: ";
                                              cin>>cup;
                                              cout<<"Do you want other menu? (Y/N): "
                                              cin>>other;
                                              cout<<"Are you a member? (Y/N): ";
                                              cin>>member;
                                                 if(y){
                                                 cout<<"Total"<<(size*cup)<<"Bath"<<endl;
                                                 cout<<"Discount"<<(size*cup)/10<<"Bath"<<endl;
                                                 cout<<"You pay"<<(size*cup)-(size*cup)/10<<"Bath"<<endl;
                                                 cout<<"Thank you."<<endl;
                                                 }
                                                 else{
                                                 cout<<"Total"<<(size*cup)<<"Bath"<<endl;
                                                 cout<<"Discount"<<"0"<<"Bath"<<endl;
                                                 cout<<"You pay"<<(size*cup)<<"Bath"<<endl;
                                                 cout<<"Thank you."<<endl;
                                                 }
                                                 }
                          else{        
                                              cout<<"How many cups?: ";
                                              cin>>cup;
                                              cout<<"Do you want other menu? (Y/N): "
                                              cin>>other;
                                              cout<<"Are you a member? (Y/N): ";
                                              cin>>member;
                                                 if(y){
                                                 cout<<"Total"<<(size*cup)<<"Bath"<<endl;
                                                 cout<<"Discount"<<(size*cup)/10<<"Bath"<<endl;
                                                 cout<<"You pay"<<(size*cup)-(size*cup)/10<<"Bath"<<endl;
                                                 cout<<"Thank you."<<endl;
                                                 }
                                                 else{
                                                 cout<<"Total"<<(size*cup)<<"Bath"<<endl;
                                                 cout<<"Discount"<<"0"<<"Bath"<<endl;
                                                 cout<<"You pay"<<(size*cup)<<"Bath"<<endl;
                                                 cout<<"Thank you."<<endl;
                                                 }
                                                 }
                                
                                             
                                    
                         
                         
             
    system ("pause");
    return 0;
    
}
