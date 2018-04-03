//
//  main.cpp
//  exam3_1
//
//  Created by Lisa on 3/21/2558 BE.
//  Copyright (c) 2558 Lisa. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
 int main()
{
    int n=2,i=0;
    
    cout << "Enter number grade : ";
    cin >> n;
    
    int credit[n];
    string grade[10];
    
    while (i<n)
    {
        cout << "Enter Grade & Credit #"<<i+1<<" : ";
        cin >> grade[i];
        cin >> credit[i];
        i++;
    }
    
    float numGrade,sumGrade=0,sumCredit=0;
    
    for ( i=0 ; i<n ; i++) {
        
        if(grade[i] == "A" || grade[i] == "a") numGrade = 4.0;
        else if(grade[i] == "B+" || grade[i] == "b+") numGrade = 3.5;
        else if(grade[i] == "B" || grade[i] == "b") numGrade = 3.0;
        else if(grade[i] == "C+" || grade[i] == "c+") numGrade = 2.5;
        else if(grade[i] == "C" || grade[i] == "c") numGrade = 2.0;
        else if(grade[i] == "D+" || grade[i] == "d+") numGrade = 1.5;
        else if(grade[i] == "D" || grade[i] == "d") numGrade = 1.0;
        else if(grade[i] == "F" || grade[i] == "f") numGrade = 0;
        
        sumGrade += (numGrade * credit[i]);
        sumCredit += credit[i];
    }
    
    cout << "Current GPA of your is : " << sumGrade/sumCredit << endl;
    
    return 0;
}
