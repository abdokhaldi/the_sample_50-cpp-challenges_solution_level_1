// problem_solutions_11-15.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <string>
using namespace std;

                //  PROBLEM 11 : AVERAGE PASS / FAIL ,
                //if the Average greater than 50 return Pass otherwise return Fail

enum enPassFail {Pass=1,Fail=2};
void Readmarks(int& Mark1, int& Mark2, int& Mark3) {
        cout << "please enter Mark1 : \n";
        cin >> Mark1;
        cout << "please enter Mark2 : \n";
        cin >> Mark2;
        cout << "please enter Mark3 : \n";
        cin >> Mark3;
}
int SumMarks(int Mark1,int Mark2,int Mark3) {
    return Mark1 + Mark2 + Mark3;
}
int CalculateAverrageOfMarks(int Mark1,int Mark2, int Mark3) {
    return (float)SumMarks(Mark1,Mark2,Mark3) / 3 ;
}
enPassFail checkAverrage(float Averrage) {
    
    if (Averrage >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
    }
void PrintAverage(float Averrage) {
    cout << "the average is " << Averrage << endl;

    if (checkAverrage(Averrage) == enPassFail::Pass )
        cout << " you Passed " << endl;
    else
        cout << "  you Failed " << endl;
}

                     //  PROBLEM 12 : Print  MAX OF 2 NUMBERS or if Are Equals Print "the Numbers are Equals"

void Read2Numbers(int& Num1, int& Num2) {
    
    cout << "please enter Number1 : ";
    cin >> Num1;
    cout << "please enter Number2 : ";
    cin >> Num2;
}

int CheckMax(int Num1,int Num2) {
    bool MaxCheck = Num1 > Num2;
    if (MaxCheck)
        return  Num1;
    else if (Num1 == Num2)
        return 0;
    else
        return Num2;
   
}
void PrintMaxNumber(int Max) {

    if (Max == 0) {
        cout << "\n the Numbers are equals";
    }
    else {
        cout << "\n the Max Number is " << Max;
    }
}
                                // //  PROBLEM 13 : Print  MAX OF 3 NUMBERS

void  Read3Numbers(int& Num1, int& Num2, int& Num3) {

    cout << "please enter Number1 : ";
    cin >> Num1;
    cout << "please enter Number2 : ";
    cin >> Num2;
    cout << "please enter Number2 : ";
    cin >> Num3;
}

int CheckMax3(int Num1, int Num2, int Num3) {
    if (Num1 > Num2)
        if (Num1 > Num3)
            return Num1;
        else
            return Num3;
    if (Num2 > Num3)
        return Num2;
    else
        return Num3;

}

void PrintMaxOf3Number(int Max) {

    if (Max == 0) {
        cout << "\n the 3 Numbers are equals";
    }
    else {
        cout << "\n the Max Number is " << Max;
    }
}

                    // //  PROBLEM 14 : Swap 2 NUMBERS

void ReadTwoNumbers(int& Num1, int& Num2) {

    cout << "please enter Number1 : ";
    cin >> Num1;
    cout << "please enter Number2 : ";
    cin >> Num2;
}
void SwapNums(int& A, int& B) {
    int Plate;
    Plate = A;
    A = B;
    B = Plate;
 }
void PrintSwapNumber(int Num1,int Num2) {
    cout << Num1 << endl << Num2 << endl;
}

                                     // PROBLEM 15: CALCULATE RECTANGLE AREA 
void ReadAreaNums(float& A, float& B) {

    cout << "please enter Number1 : ";
    cin >> A;
    cout << "please enter Number2 : ";
    cin >> B;
}
float CalculateRectangleArea(float A,float B) {
    float Area = A * B;
    return Area;
}
void PrintResult(float Result) {
    cout << "The Area Of Rectangle is " << Result << endl;
}
int main()
{
  /// </problem 11>
           /*int Mark1, Mark2, Mark3;
           Readmarks(Mark1,Mark2,Mark3);
            PrintAverage(CalculateAverrageOfMarks(Mark1,Mark2,Mark3));
           */
  /// </End problem 11>

  /// <problem 12>
         /* int Num1, Num2;
          Read2Numbers(Num1, Num2);
          PrintMaxNumber(CheckMax(Num1, Num2));
          */
  /// </End problem 12 

 /// </problem 13>
        /*int Num1, Num2, Num3;
        Read3Numbers(Num1, Num2,Num3);
        PrintMaxOf3Number(CheckMax3(Num1, Num2,Num3));
        */
 /// </End problem 13>

 /// </ problem 14>
   /* int Num1, Num2;
      // <BEFOR SWAP>
    ReadTwoNumbers(Num1,Num2);
    PrintSwapNumber(Num1,Num2);
      // <AFTER SWAP>
    SwapNums(Num1, Num2);
    PrintSwapNumber(Num1, Num2);
    */
    /// </End problem 14>   

    /// </problem 15>  
    float A, B;
    ReadAreaNums(A, B);
    PrintResult(CalculateRectangleArea(A,B));
    /// </End problem 15>
}

