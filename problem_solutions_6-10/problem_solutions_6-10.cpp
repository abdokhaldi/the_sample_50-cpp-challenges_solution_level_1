// problem_solutions_6-10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

           // PROBLEM 6 : GET FULL NAME
struct stInfo {
    string FirstName;
    string LastName;
};
stInfo ReadInfo() {
    stInfo Info;
    cout << "please enter your first name : ";
    cin >> Info.FirstName;
    cout << "please enter your last name : ";
    cin >> Info.LastName;
    return Info;
}
string GetFullName(stInfo Info, bool Reversed) {
    string FullName="";
    if(Reversed)
        FullName = Info.LastName + " " + Info.FirstName;
    else
        FullName = Info.FirstName + " " + Info.LastName;
        
    return FullName;
}
void PrintFullName(string fullName) {
    cout << "\n your full name is :  " << fullName;
}
    // PROBLEM 7 : PRINT HALF OF NUMBER
int ReadNumber() {
    int Num;
    cout << "please enter number : \n";
    cin >> Num;
    return Num;
   }
float CalculateHalfOfNamber(int Num) {
    return (float)Num / 2;
}
void PrintHalfOfNumber(int Num) {
    cout << "the half of number  " << to_string(Num) << " is " << to_string(CalculateHalfOfNamber(Num));
}

                // PROBLEM 8 : Pass or Fail

enum enMarkPasFail{Pass=1,Fail=2};

int ReadMark() {
    cout << "enter your mark ?";
    int Mark;
    cin >> Mark;
    return Mark;
}
enMarkPasFail CheckPassFail(int Mark) {

    if (Mark >= 50)
       return enMarkPasFail::Pass;
    else 
       return enMarkPasFail::Fail;
      
 }
void PrintPassFail(int Mark) {
    if (CheckPassFail(Mark) == enMarkPasFail::Pass)
        cout << "you are Passed";
    else
        cout << "you are Failed";
}

                // PROBLEM 9 : SUM OF 3 NUMBERS
void ReadNumbers(int& Num1,int& Num2,int& Num3) {
    cout << "please enter number 1 :";
    cin >> Num1;
    cout << "please enter number 2 :";
    cin >> Num2;
    cout << "please enter number 3 :";
    cin >> Num3;
}

int SumOf3Nums(int Num1, int Num2, int Num3) {
    
   return  Num1 + Num2 + Num3;
     
}

void PrintResult(int Result) {
    cout << "the result is : " << Result << endl;
}

                                // PROBLEM 10 : AVERAGE OF 3 MARKS .
void ReadMarks(int Mark[3]) {
    cout << "please enter Mark 1 :";
    cin >> Mark[0];
    cout << "please enter Mark 2 :";
    cin >> Mark[1];
    cout << "please enter Mark 3 :";
    cin >> Mark[2];
}
int CalcAverageOf3Marks(int Mark[3]) {
    return (float)SumOf3Nums(Mark[0] , Mark[1], Mark[2]) / 3;
}
void PrintAverage( float Average) {
    cout << "the Average of 3 Marks is : " << to_string(Average) << endl;
}
int main()
{
       
   // PrintFullName(GetFullName(ReadInfo(),true)); // Problem 6
   // PrintHalfOfNumber(ReadNumber());  // Problem 7
   // PrintPassFail(ReadMark());    // Problem 8
   
       // start Problem 9  *************************
   // int Num1, Num2, Num3;   
   // ReadNumbers(Num1, Num2, Num3);// Problem 9
   // PrintResult(SumOf3Nums(Num1, Num2, Num3));  // end Problem 9  ******************

    // PROBLEM 10
    int Marks[3];
    ReadMarks(Marks);
    PrintAverage(CalcAverageOf3Marks(Marks));
}   

