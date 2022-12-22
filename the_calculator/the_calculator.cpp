

#include <iostream>
using namespace std;
enum enOperationType{Add='+',Subtruct='-',Multiplication='*',Devide='/' };
int ReadNumber(string message) {
    cout << message;
    int Number;
    cin >> Number;
    return Number;
}
enOperationType ReadOperationType() {
    char OT = '+';
    cout << "please enter operation type (+,-,*,/ ) ? \n";
    cin >> OT;
    return (enOperationType)OT;
}
float Calculate(float Number1, float Number2, enOperationType OpType) {
    switch (OpType) {
    case enOperationType::Add :
        return Number1 + Number2;
    case enOperationType::Subtruct:
        return Number1 - Number2;
    case enOperationType::Multiplication:
        return Number1 * Number2;
    case enOperationType::Devide:
        return Number1 / Number2;

    }
}

int main()
{
   float Number1= ReadNumber("please enter Number 1 : ");
   float Number2= ReadNumber("please enter Number 2 : ");
    enOperationType OpTtype = ReadOperationType();
    cout << endl << "Result = " <<  Calculate(Number1, Number2, OpTtype) << endl;
}

