//5420501520 Jirawat Pipatsakuldech
#include<iostream>;
using namespace std;
int main()
{
    int x ;
    char C,M;
    cout<< "type of vehicle ((C) Car or (M) Motorcycle )" << endl ;
    cin >> x ;
    if (x = 'C')
    { cout << " Arrival time " <<endl ;
    cin >> D  ;
     if ( D <= 2) 
     { cout << "Leave time" << endl;
     cin >> L,P ;
     P=L-D;
           if (L-D >=0&&L-D<=2)
           { 
               cout<< "P" <<" hours" << endl;
            cout<< " you have to pay 0 bath" << endl;
           }
           else 
           { cout << " you can't leave before arrival time " << endl;
           }
     }
     else if (D>=3&&D<=5)
     { cout << "Leave time" << endl;
     cin >> L,P;
     P=L-D
           if (L-D >=3&& L-D<=5)
           {  cin>> bath ;
           bath=L-D*30;
           cout<< "P" <<" hours" << endl;
           cout<< "you have to pay" << "bath"<< endl ;
           }
           else
           { cout << " you can't leave before arrival time " << endl;
           }
     }     
      else if (D>=6&&D<=8)
     { cout << "Leave time" << endl;
     cin >> L,P;
     P=L-D
           if (L-D >=6&& L-D<=8)
           {  cin>> bath ;
           bath=L-D*50;
           cout<< "P" <<" hours" << endl;
           cout<< "you have to pay" << "bath"<<endl ;
           }
           else
           { cout << " you can't leave before arrival time " << endl;
           }
     }          
      else
          { cout <<"P" <<" hours" << endl;
        cout << " you have to pay  500 bath " <<endl; 
      }   
    }
    if (x = 'M')
    { cout << " Arrival time " <<endl ;
    cin >> D ; 
     if ( D <= 2) 
     { cout << "Leave time" << endl;
     cin >> L,P ;
     P=L-D;
           if (L-D >=0&&L-D<=3)
           { cout<< "P" <<" hours" << endl;
            cout<< " you have to pay 0 bath" << endl;
           }
           else 
           { cout << " you can't leave before arrival time " << endl;
           }
     }
     else if (D>=4&&D<=7)
     { cout << "Leave time" << endl;
     cin >> L,P;
     P=L-D
           if (L-D >=4&& L-D<=7)
           {  cin>> bath ;
           bath=L-D*10;
           cout<< "P" <<" hours" << endl;
           cout<< "you have to pay" << "bath"<< endl ;
           }
           else
           { cout << " you can't leave before arrival time " << endl;
           }
     }     
     else if (D>7)
      { cout <<"P" <<" hours" << endl;
        cout << " you have to pay  150 bath " <<endl; 
     }          
    }
    else
    { cout << " Error " << endl; }
    system("pause");
    return 0;
}
