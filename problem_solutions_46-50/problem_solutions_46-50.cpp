// problem_solutions_46-50.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// problem 46 : print letters from A to Z ;
void PrintLetters() {
    int i;
    for (i= 65; i <= 90; i++) {
        cout << char(i) << endl;
    }
}

// problem 47 : loan Instalement Months

float ReadPositiveNumber(string message) {
    float Number = 0;
    do {
        cout << message;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

float  TotalMonths(float LoanAmount , float MonthlyPayment) {
    return (float) LoanAmount / MonthlyPayment;
}

// problem 48 : monthly loan instalement 
float  totalAmountPerMonth(float LoanAmount, float MonthlyLInstalment) {
    return (float)LoanAmount / MonthlyLInstalment ;
}

// problem 49 : Read the ATM PIN code from user then check is if PIN code = 1234 ,
//  then show the balance to user otherwise print "wrong Pin " enter PIN code again . 

string ReadPrintCode() {
   string PinCode ;
   cout << " enter pin code : \n";
   cin >> PinCode;
   return PinCode;
}

bool Login() {
    string PinCode;
    
    do {
        PinCode = ReadPrintCode();
        if (PinCode == "1234") {
            return 1;
        }
        else {
            cout << "\n Wrong Pin \n";
            system("color 4F");
        }
    } while (PinCode != "1234");
}

 // problem 50 : Read the ATM PIN code 3 times if not true print "please call the bank for help .

bool Login3Times() {
    string PinCode;
    int counter = 3;
    do {
        counter-- ;
        PinCode = ReadPrintCode();
        if (PinCode == "1234") {
            return 1;
        }
        else {
            system("color 4F");
            cout << "\n Wrong Pin , you have " << counter << " times more : \n";
        }
    } while (counter >= 1 &&  PinCode != "1234");
    return 0;
}
int main()
{
    // problem 46 
   /*PrintLetters();*/ 

    // problem 47
    /*float LoanAmount = ReadPositiveNumber(" enter loan amount : \n");
    float MonthlyPayment = ReadPositiveNumber(" enter monthly payment : \n");
   cout << "the total of months is " << TotalMonths(LoanAmount, MonthlyPayment) << " Months ";*/

   // problem 48
   /*
   float LoanAmount = ReadPositiveNumber(" enter loan amount : \n");
   float HowManyMonths = ReadPositiveNumber(" enter months : \n");
   cout << "monthly instalement is  " << totalAmountPerMonth(LoanAmount, HowManyMonths);
   */
  
   
    if (Login3Times()) {
        system("color 2F"); // green screen
        cout << "your balance is : 7500";
    }
    else {
        cout << " Your Card Is Blocked , please call the bank for help \n";
    }
}

