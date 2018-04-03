//5420500604 Nathawut Petharakorn
#include <iostream>
using namespace std;
int main(){
    int number;
    
    cout << "Enter 1st number : ";
    cin >> number ;
    
    cout << "Enter 2nd number : ";
    cin >> number;
    
    cout << "Enter 3rd number : ";
    cin >> number;
    
    cout << "Enter 4th number : ";
    cin >> number;
    
    int A,B;
    cout << "1st number is Minimum" << endl; //change 1st--> 2nd number is Minimum
    cin >> A;
    
    cout << "4th number is Maximum" << endl; //change 4th--> 3rd number is Maximum
    cin >> B;
    
    cout << "The difference between Min. and Max. is : " << B-A << endl;
    cin >> number;
    
    system("pause");
    return 0;
}
    
