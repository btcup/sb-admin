#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float use , volt , elcost = 0 , elcost2 = 0 , elcost3 = 0 , service , ft, vat;
    cout << "Please input usage : ";
    cin >> use;
    if (use < 0)
    {
    cout << endl;
    cout << "Invalid input !!!\n";
    }
    else
    {
    cout << "Please input voltage : ";
    cin >> volt;
    cout << endl;

    if(volt >= 22 && volt <= 33) 
         {
            elcost = 2.4649*use;
            service = 228.17;
            cout << "Elctricity Cost : " << elcost << endl;
         }   
    else if(volt < 22)
         {
            service = 40.90;
            if(use >=0 && use <= 150 ) elcost = 1.8047*use;
            else if(use >= 151 && use <= 400) 
                {
                   elcost = 1.8047*150;
                   elcost2 = 2.7781*(use-150);
                }
            else if(use >= 401)
                {
                   elcost = 1.8047*150;
                   elcost2 = 2.7781*(400-150);
                   elcost3 = 2.9780*(use-400);
                }
            if(use >=0) cout << "Elctricity Cost 0-150 : " << elcost  << endl;
            if(use >= 151) cout << "Elctricity Cost 151-400 : " << elcost2 << endl;
            if(use >= 401)cout << "Elctricity Cost 400 -> : " << elcost3 << endl;
         }
       cout << "Service : " << service << endl;
       ft = 0.4638 * use;
       cout << "Ft : " << ft << endl;
       vat = (elcost + elcost2 + elcost3 + service + ft)*7.0/100;
       cout << "Vat 7 % : " << vat << endl;
       cout << endl;
       cout << "Total cost : " << ceil(elcost + elcost2 + elcost3 + service + ft + vat) << " Baht"<< endl;
    }

    system("pause");
    return 0;
}
