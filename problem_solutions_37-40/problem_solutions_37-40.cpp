

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

   // problem 37 : SUM NUMBERS UNTIL -99 , IF THE USER ENTER -99 SUM NUMBERS AND PRINT THEM ON THE SCREEN
float ReadNumber(string message) {
    int Number;
        cout << message << endl;
        cin >> Number;
        return Number;
    }
float SumNumbers() {
    int  Sum = 0, Number=0, Counter=1;
    do {
      
        Number = ReadNumber("Enter Number " + to_string(Counter));
        if (Number == -99) {
            break;
        }
        Sum = Sum + Number;
        Counter++;
    } while (Number != -99);
    return   Sum;
}
// PROBLEM 38 : check if the Number is Prime Or NotPrime 

 enum enPrimeNotPrime{Prime=1,NotPrime=2};
 float ReadPositiveNumber(string message) {
     float Number=0;
     do {
         cout << message << endl;
         cin >> Number;
     } while (Number <= 0);
     return Number;
 }
 enPrimeNotPrime CheckIfPrime(int Number) {
     double M = round(Number / 2);
     for (int Counter = 2; Counter <= M; Counter++) {
         if (Number % Counter == 0) 
             return enPrimeNotPrime::NotPrime;
         
     }
     return enPrimeNotPrime::Prime;
 }
 void PrintNumberType(int Number) {
     switch (CheckIfPrime(Number)) {
         case enPrimeNotPrime::Prime:
             cout << "the number is prime \n ";
             break;
         case enPrimeNotPrime::NotPrime:
             cout << "the number is not prime \n";
             break;
     }
 }

   // Problem 39 :  total bill and cash paid
 float readPositiveNumber(string message) {
     int Number=0;
     do {
         cout << message << endl;
         cin >> Number;
     } while (Number <= 0);
     return Number;
 }
 
 float CalculateRemainder(float paTotalBill, float paCashPaid) {
     return paTotalBill - paCashPaid ;
 }
 // problem 40 : Tee and sales Tax  , the restaurant 10% services Fee and 16% sales tax using ReadPositiveNumberFunction() above
 float faCalculateTotalBill(float paBillValue) {
     
      paBillValue = paBillValue * 1.1;
      paBillValue = paBillValue * 1.16;
     
     return paBillValue ; 
 }

int main()
{
         // problem 37;
   ////// cout << "Result = " << SumNumbers();

    // problem 38
   // PrintNumberType(ReadPositiveNumber("Enter Number : "));
 
    // Problem 39
    /*float TotalBill = ReadPositiveNumber("Enter Total Bill : ");
    float CashPaid = ReadPositiveNumber("Enter Cash Paid : ");
    cout << "Total Bill = " << TotalBill << endl;
    cout << "Total Cash Paid = " << CashPaid << endl;
    cout << " The Remainder is = " << CalculateRemainder(TotalBill , CashPaid);*/

    // problem 40
    float TotalBillValue = ReadPositiveNumber("please enter Bill Value : ");
    cout << "The Bill Value is  = " << TotalBillValue << endl ;
    cout << "the result after Service Fee and Sales Tax =  " 
        << faCalculateTotalBill(TotalBillValue) << endl;


}
