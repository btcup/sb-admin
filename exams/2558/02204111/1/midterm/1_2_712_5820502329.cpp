#include <iostream>

using namespace std;
int main ( )
{
    int usage,voltage;
    cout <<"Please input usage : ";
    cin  >> usage ;
    cout <<"Please input voltage : ";
    cin  >> voltage ;
   
    if (voltage >= 22 && voltage <= 33) ;
    {
                cout << "Electricity Cost : " << usage * 2.4649 << endl;
                cout << "Service : " << 228.17 << endl;
                cout << "Ft : " << (voltage * 46.38) / 100 << endl ;
                cout << "Vat 7% : " << ( usage * 24649 + 228.17 + (voltage * 46.38) / 100 ) * 7 /100 << endl ;
                cout << "Total cost : " << usage * 2.4649 + 228.17 + (voltage * 46.38) / 100 + ( usage * 24649 + 228.17 + (voltage * 46.38) / 100 ) * 7 /100 <<"Baht" << endl;
                
    }
    if (voltage < 22 && voltage >=0)
    {
                if (usage >=0 && usage <=150 )
                cout <<"Electricity Cost 0-150 : " << usage * 1.8047 << endl; 
                cout << "Service : " << 40.90 << endl;
                cout << "Ft : " << (voltage * 46.38) / 100 << endl ;
                cout << "Vat 7% : " << ( usage * 1.8047 + 40.90 + (voltage * 46.38) / 100 ) * 7 /100<< endl ;
                cout << "Total cost : " << usage * 1.8047 + 40.90 +(voltage * 46.38) / 100 + ( usage * 1.8047 + 40.90 + (voltage * 46.38) / 100 ) * 7 /100 <<"Baht" << endl;
                
                if (usage >=151 && usage <=400 )
                cout <<"Electricity Cost 0-150 : " << usage * 1.8047 << endl; 
                cout <<"Electricity Cost 0-150 : " << usage * 2.7781 << endl;
                cout << "Service : " << 40.90 << endl;
                cout << "Ft : " << (voltage * 46.38) / 100 << endl ;
                cout << "Vat 7% : " << ( usage * 1.8047 + usage * 2.7781 + 40.90 + (voltage * 46.38) / 100 ) * 7 /100<< endl ;
                cout << "Total cost : " << usage * 1.8047 + usage * 2.7781 + 40.90 + (voltage * 46.38) / 100 + ( usage * 1.8047 + usage * 2.7781 + 40.90 + (voltage * 46.38) / 100 ) * 7 /100 <<"Baht" << endl;
                if (usage > 400)
                cout <<"Electricity Cost 0-150 : " << usage * 1.8047 << endl; 
                cout <<"Electricity Cost 0-150 : " << usage * 2.7781 << endl;
                cout <<"Electricity Cost 0-150 : " << usage * 2.9780 << endl;
                cout << "Service : " << 40.90 << endl;
                cout << "Ft : " << (voltage * 46.38) / 100 << endl ;
                cout << "Vat 7% : " << ( usage * 1.8047 + usage * 2.7781 + usage * 2.9780 + 40.90 + (voltage * 46.38) / 100 ) * 7 /100 << endl;
                cout << "Total cost : " << usage * 1.8047 + usage * 2.7781 + usage * 2.9780 + 40.90 + (voltage * 46.38) / 100 + ( usage * 1.8047 + usage * 2.7781 + usage * 2.9780 + 40.90 + (voltage * 46.38) / 100 ) * 7 /10 <<"Baht" << endl;
                
    }
    

   
    system ("paues");
    return 0;
    
}
