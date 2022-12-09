// problem_solutions1-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;



                                       // SOLUTION 1 : PRINT YOUR NAME .
void PrintName(string Name) {
    cout << "your name is : " << Name << "\n";
}
                                   // SOLUTION 2 : READ AND PRINT YOUR FULL NAME .
string ReadName() {
     cout << "please enter your name : ";
     string Name;
     getline(cin, Name);
     return Name;
}
void PrintYourName(string Name) {
    cout << Name << "\n";
}
                                 // SOLUTION 3 : CHECK ODD OR EVEN NUMBER
enum enNumber {ODD=1,EVEN=2};
int ReadNumber() {
    cout << "please enter number : ";
    int Num;
    cin >> Num;
    return Num;
}
enNumber CheckNumberType(int Num) {
    int result = Num % 2;
    if (result == 0) {
        return enNumber::EVEN;
    }
    else {
        return enNumber::ODD;
    }

}

void PrintNumberType(enNumber checkType) {
    if ( checkType == enNumber::EVEN) {
        cout << "the number is even \n";
    }
    else {
        cout << "the number is odd \n";
    }
}

// SOLUTION 4-5: HIRE A DRIVER 2 PROBLEMS IN 1 WITH ADD HAS_RECOMMENDATION TO P 5
struct stInfo{
    int Age;
    bool HasDriverLicense;
    bool HasRecommendation; //belongs to problem 5
};

stInfo ReadUserInfo() {
    stInfo Info;
    cout << "please enter your age : \n";
    cin >> Info.Age;
    cout << "Do you have Driver License ?\n";
    cin >> Info.HasDriverLicense;
    cout << "Do you haveRecommendation ?\n";
    cin >> Info.HasRecommendation; //belongs to problem 5
    return Info;
}

bool IsAccepted(stInfo Info) {
    if (Info.HasRecommendation) {
        return true; // belongs to problem 5
    }else{
    return (Info.Age >= 21 && Info.HasDriverLicense);
    }
}

void PrintIfHiredOrRejected(stInfo Info) {
    if (IsAccepted(Info)) {
        cout << "Hired \n" << endl;
    }
    else {
        cout << "Rejected \n" << endl;
    }
}
 
int main()
{
    // aplly functions
       // problem 1
  // PrintName("Abdenabi Khaldi ");
       //problem 2
  // PrintYourName(ReadName());
       // problem 3
  //PrintNumberType(CheckNumberType(ReadNumber()));
       // problem 4
   PrintIfHiredOrRejected(ReadUserInfo());
      


    
    
}