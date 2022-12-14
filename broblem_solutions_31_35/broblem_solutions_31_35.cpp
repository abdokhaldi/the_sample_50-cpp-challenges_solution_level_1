// problem_solutions_31-35.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>

using namespace std;
// problem 31 : calculate and print Number power 2 , 3, 4
int ReadNumber() {
    int Number;
    cout << "please enter Number : ";
    cin >> Number;
    return Number;
}
void CalculatePowerNumberOf_234(int Number) {
    int a, b, c;
    a = Number * Number;
    b = Number * Number * Number;
    c = Number * Number * Number * Number;
    cout << Number << "^2 is " << a << endl << Number << "^3 is " << b << endl << Number << "^4 is " << c << endl;
}
// problem 32 : calculate and print Number power M (Number^M)
int ReadNumber2() {
    int Number;
    cout << "please enter Number : ";
    cin >> Number;
    return Number;
}
int ReadPower() {
    int M;
        cout << "please enter Power : ";
        cin >> M;
        return M;
}

int ReadPowerOfNumber(int Number, int M) {
    if (M == 0) {
        return 1;
   }

    int P = 1;
    for (int i = 1; i <= M; i++) {
        P = P * Number;
    }
    return P;
}

////// problem 33 : GRADE A,B,C,D,E,F
int ReadNumberInRange(int From, int To) {
    int Grade=0;
    do {
        cout << "please enter Number 0 to 100 : \n";
        cin >> Grade;
    } while (Grade < From || Grade > To);
    return Grade;
}
char GetGradeLetter(int Grade) {
    if (Grade >= 90) {
        return 'A';
    }
    else if (Grade >= 80) {
        return 'B';
    }
    else if (Grade >= 70) {
       return 'C';
    }
    else if (Grade >= 60) {
        return 'D';
    }
    else if (Grade >= 50) {
        return 'E';
    }
    else{
        return 'F';
    }
   
}
   ////// problem 34 : COMMISION PERCENTAGE 
int ReadTotalSales() {
    int TotalSales;
    cout << "enter total sales: \n";
    cin >> TotalSales;
    return TotalSales;
}
float GetCommisionPercentage(int TotalSales) {
    if (TotalSales >= 1000000) {
        return 0.01;
     }
    else if (TotalSales >= 500000) {
        return 0.02;
    }else if(TotalSales >= 100000){
        return 0.03;
    }
    else if (TotalSales >= 50000) {
        return 0.05;
    }
    else {
        return 0.00;
    }
}
float CalculateTotalComision(float TotalSales) {
    return GetCommisionPercentage(TotalSales) * TotalSales ;
}


   // problem 35 : Pigy Bank Content

struct stPiggyBankContent {
    int Pennies, Nickels, Dimes, Quarters, Dollars;
};
stPiggyBankContent ReadPiggyBankContent() {
    stPiggyBankContent PiggyBank;

    cout << "enter Total Pennies : \n";
    cin >> PiggyBank.Pennies;
    
    cout << "enter Total Nickels : \n";
    cin >> PiggyBank.Nickels;
   
    cout << "enter Total Dimes : \n";
    cin >> PiggyBank.Dimes;
   
    cout << "enter Total Quarters : \n";
    cin >> PiggyBank.Quarters;
   
    cout << "enter Total Dollars : \n";
    cin >> PiggyBank.Dollars;
    
    return PiggyBank;
}
int CalculatePiggyBankContent(stPiggyBankContent PiggyBankContent) {
    int TotalPennies = 0;
    TotalPennies = PiggyBankContent.Pennies * 1 + PiggyBankContent.Nickels * 5 + 
                   PiggyBankContent.Dimes * 10 +PiggyBankContent.Quarters * 25 +
                   PiggyBankContent.Dollars * 100;
    return TotalPennies;
}

int main() {

      ////// problem 31
 // CalculatePowerNumberOf_234(ReadNumber());


     ////// problem 32 
 // cout <<  ReadPowerOfNumber(ReadNumber2(),ReadPower());

     ////// problem 33
 // cout << " Grade " << GetGradeLetter(ReadNumberInRange(0, 100));

    /////// problem 34
 // float TotalSales = ReadTotalSales();
 // cout << "Comision Percentage  " << GetCommisionPercentage(TotalSales) << endl;
 // cout << "Total Comision " << CalculateTotalComision(TotalSales) << endl;

    /////// problem 35
    int TotalPennies = CalculatePiggyBankContent(ReadPiggyBankContent());
    cout << endl << "Total Pennies " << TotalPennies << endl;
    cout << endl << "Total Dollars " << (double) TotalPennies / 100 << "$" << endl;

    return 0;
}

