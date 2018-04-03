#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char name,type;
    float land,cost,age,estate,tax,total;
    
    cout << "Enter objective (Living, Agiculture) : ";
    cin >> name;
    if(name =='L')
    {
        cout << "Enter living type (Main, second) : ";
        cin >> type;
            if(type=='M')
            {
            cout << "Enter land cost (million) : ";
            cin >> land;
                if(land<=50)
                {
                 cout << "Enter building cost (million) : ";
                 cin >> cost;
                     if(cost < 50)
                     {
                        cout << "Buiding age : ";
                        cin >> age;
                        if(age >= 1 && age <= 15)
                        {
                               tax=1.2;
                               total = land+tax;
                               cout << "Your estate cost is " << total << "(" << land << "+" << tax << ")" << " million bath" << endl;
                               cout << "The land tax is " << tax << " million bath" << endl;  
                        }
                        else if(age >= 16 && age <= 40)
                        {
                                 tax=0.06*age;
                                 total = land+tax;
                                 cout<< "Your estate cost is " << total << "(" << land << "+" << tax << ")" << " million bath" << endl;  
                                 cout << "The land tax is " << tax << " million bath" << endl;
                        } 
                        else if(age >= 41)
                        {
                                 tax=0.06*age;
                                 total = land+tax;
                                 cout<< "Your estate cost is " << total << "(" << land << "+" << tax << ")"<< "million bath" << endl;
                                 cout << "The land tax is " << tax << " million bath" << endl;  
                        }     
                     }
                     else if(cost == 50 && cost < 100)
                     {
                        cout << "Buiding age : ";
                        cin >> age;
                        if(age >= 1 && age <= 15)
                        {
                               tax=0;
                               total = land+tax;
                               cout << "Your estate cost is " << total << "(" << land << "+" << tax << ")" << " million bath" << endl;
                               cout << "The land tax is " << tax << " million bath" << endl;  
                        }
                        else if(age >= 16 && age <= 40)
                        {
                                 tax=0.06*age;
                                 total = land+tax;
                                 cout<< "Your estate cost is " << total << "(" << land << "+" << tax << ")"<< " million bath" << endl;  
                                 cout << "The land tax is " << tax << " million bath" << endl;
                        } 
                        else if(age >= 41)
                        {
                                 tax=0.06*age;
                                 total = land+tax;
                                 cout<< "Your estate cost is " << total << "(" << land << "+" << tax << ")"<< "million bath" << endl;
                                 cout << "The land tax is " << tax << " million bath" << endl;  
                        }     
                     }
                     else if(cost < 50)
                     {
                        cout << "Buiding age : ";
                        cin >> age;
                        if(age >= 1 && age <= 15)
                        {
                               tax=0;
                               total = land+tax;
                               cout << "Your estate cost is " << total << "(" << land << "+" << tax << ")" << " million bath" << endl;
                               cout << "The land tax is " << tax << " million bath" << endl;  
                        }
                        else if(age >= 16 && age <= 40)
                        {
                                 tax=0.06*age;
                                 total = land+tax;
                                 cout<< "Your estate cost is " << total << "(" << land << "+" << tax << ")"<< " million bath" << endl;  
                                 cout << "The land tax is " << tax << " million bath" << endl;
                        } 
                        else if(age >= 41)
                        {
                                 tax=0.06*age;
                                 total = land+tax;
                                 cout<< "Your estate cost is " << total << "(" << land << "+" << tax << ")"<< "million bath" << endl;
                                 cout << "The land tax is " << tax << " million bath" << endl;  
                        }     
                     }
                   }
            else if( type == 'S')
            {
             cout << "Enter land cost (million) : ";
             cin >> land;
               if(land<=50)
               {
               cout << "Enter building cost (million) : ";
               cin >> cost;
                    if(cost < 50)
                    {
                        cout << "Buiding age : ";
                        cin >> age;
                        if(age >= 1 && age <= 15)
                        {
                               tax=0;
                               total = land+tax;
                               cout << "Your estate cost is " << total << "(" << land << "+" << tax << ")" << " million bath" << endl;
                               cout << "The land tax is " << tax << " million bath" << endl;  
                            }
                        else if(age >= 16 && age <= 40)
                        {
                                 tax=0.06*age;
                                 total = land+tax;
                                 cout<< "Your estate cost is " << total << "(" << land << "+" << tax << ")"<< " million bath" << endl;  
                                 cout << "The land tax is " << tax << " million bath" << endl;
                        } 
                        else if(age >= 41)
                        {
                                 tax=0.06*age;
                                 total = land+tax;
                                 cout<< "Your estate cost is " << total << "(" << land << "+" << tax << ")" << "million bath" << endl;
                                 cout << "The land tax is " << tax << " million bath" << endl;  
                        }     
                     }
                     else if(cost == 50 && cost < 100)
                     {
                        cout << "Buiding age : ";
                        cin >> age;
                        if(age >= 1 && age <= 15)
                        {
                               tax=0;
                               total = land+tax;
                               cout << "Your estate cost is " << total << "(" << land << "+" << tax << ")" << " million bath" << endl;
                               cout << "The land tax is " << tax << " million bath" << endl;  
                            }
                        else if(age >= 16 && age <= 40)
                        {
                                 tax=0.06*age;
                                 total = land+tax;
                                 cout<< "Your estate cost is " << total << "(" << land << "+" << tax << ")"<< " million bath" << endl;  
                                 cout << "The land tax is " << tax << " million bath" << endl;
                        } 
                        else if(age >= 41)
                        {
                                 tax=0.06*age;
                                 total = land+tax;
                                 cout<< "Your estate cost is " << total << "(" << land << "+" << tax << ")"<< "million bath" << endl;
                                 cout << "The land tax is " << tax << " million bath" << endl;  
                        }     
                     }
                     else if(cost < 50)
                     {
                        cout << "Buiding age : ";
                        cin >> age;
                        if(age >= 1 && age <= 15)
                        {
                               tax=0;
                               total = land+tax;
                               cout << "Your estate cost is " << total << "(" << land << "+" << tax << ")" << " million bath" << endl;
                               cout << "The land tax is " << tax << " million bath" << endl;  
                            }
                        else if(age >= 16 && age <= 40)
                        {
                                 tax=0.06*age;
                                 total = land+tax;
                                 cout<< "Your estate cost is " << total << "(" << land << "+" << tax << ")"<< " million bath" << endl;  
                                 cout << "The land tax is " << tax << " million bath" << endl;
                        } 
                        else if(age >= 41)
                        {
                                 tax=0.06*age;
                                 total = land+tax;
                                 cout<< "Your estate cost is " << total << "(" << land << "+" << tax << ")"<< "million bath." << endl;
                                 cout << "The land tax is " << tax << " million bath." << endl;  
                        }     
                     }
                   }
                }
             } 
       }
       else if(name == 'A')
       {
         cout << "Enter land cost (million) : ";
         cin >> cost;
            if(cost < 40)
            {
                    cout << "your estate cost is " << cost << " million bath." << endl;
                    cout << "The land tax is exemption." << endl;
            }
            else if(cost > 40 && cost < 80)
            {
                    total = 0.04*cost+cost;
                    cout << "your estate cost is " << total << " million bath." << endl;
                    cout << "The land tax is exemption." << endl;
            }
            else if(cost >= 80)
            {
                    total = 0.08*cost+cost;
                    cout << "your estate cost is " << total << " million bath." << endl;
                    cout << "The land tax is exemption." << endl;
            }
       }    

       system("pause");
       return 0;
 }   
