

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
            // PROBLEM 16 : RECTANGLE AREA BY DIAGONAL AND SIDE 

void ReadA_D(float& A,float& D) {
    cout << "please enter A : ";
    cin >> A;
    cout << "please enter D : ";
    cin >> D;
}
float CalculateRectangleAreaByDiagonalAndSide(float A, float D) {
    return (double)A * sqrt(pow(D, 2) - pow(A, 2));
}
void PrintResult_1(double Result) {
    cout << "the result of rectangle Area is " << Result << endl ;
}
                // PROBLEM 17 : Tringle Area 

void ReadA_H(float& A, float& H) {
    cout << "please enter A : ";
    cin >> A;
    cout << "please enter H : ";
    cin >> H;
}
float CalculateTringleArea(float A,float H) {
    return A / 2 * H;
}
void PrintResult_2(float Result) {
    cout << "the result of Tringle Area is " << Result << endl;
}
                               // Problem 18 : Calculate Circle Area
float ReadR() {
    float R;
    cout << "please enter R : ";
    cin >> R;
    return R;
}
double CalculateCircleArea(float R) {
    const float PAI = 3.14;
    double Area = PAI * pow(R, 2);
    return Area;
}
void PrintCircleArea(double Area) {
    cout << "\n the resul of circle area is " << Area << endl;
}
                        // Problem 19 : Calculate Circle Area Through Diameter

float ReadD() {
    float D;
    cout << "please enter D : ";
    cin >> D;
    return D;
}
double CalculateCircleAreaThroughDiameter(float D) {
    const float PAI = 3.14;
    double Area = PAI * pow(D, 2);
    return Area;
}
void PrintCircleAreaThroughDiameter(double Area) {
    cout << "\n the resul of circle area through diameter  is " << Area << endl;
}

              // Problem 20 : Calculate Circle Area inscribed in square

float ReadA() {
    float A;
    cout << "please enter A : ";
    cin >> A;
    return A;
}
double CalculateCircleAreaInscribedInSquare(float A) {
    const float PAI = 3.14;
    double Area = PAI * pow(A,2) / 4;
    return Area;
}
void PrintCircleAreaInscribedInSquare(double Area) {
    cout << "\n the resul of circle area through diameter  is " << Area << endl;
}
int main()
{
    // Problem 16
    /*float A, D;
    ReadA_D(A,D);
    PrintResult_1(CalculateRectangleAreaByDiagonalAndSide(A,D));
    */
   // End problem 16
   
   // Problem 17
    /*float A, H;
    ReadA_H(A,H);
    PrintResult_2(CalculateTringleArea(A,H));
    */
    // End problem 17

    // Problem 18
       /*PrintCircleArea(CalculateCircleArea(ReadR()));*/
    // End Problem 18

    // Problem 19
    PrintCircleAreaThroughDiameter(CalculateCircleAreaThroughDiameter(ReadD()));
    // End Problem 19
    //PrintCircleAreaInscribedInSquare(CalculateCircleAreaInscribedInSquare(ReadA()));
}

