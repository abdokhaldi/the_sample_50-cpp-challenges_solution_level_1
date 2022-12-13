

#include <iostream>
#include <string>

using namespace std;
  // problem 26 : print range from 1 to N using diferent 3 ways , for loop , while statement & do while
int ReadNumber() {
    int Number;
    cout << "please enter N : ";
    cin >> Number;
    return Number;
}

void PrintRangeFrom1ToNUsingWhile(int N) {
    int counter = 0;
    cout << "range printed using while statement : \n";
    while(counter < N) {
        counter++;
        cout << counter;
    }
} 
void PrintRangeFrom1ToNUsingDoWhile(int N) {
    int counter = 0;
    cout << "range printed using do while statement : \n";
     do {
        counter++;
        cout << counter;
    }while (counter < N); 
}
void PrintRangeFrom1ToNUsingForLoop(int N) {
    int counter = 0;
    cout << "range printed using for loop: \n";
    for (counter; counter < N; counter++) {
        cout << counter << endl;
    }
}

// problem 27 : Print Number from N to 1 using diferent 3 ways , for loop , while statement & do while

void PrintRangeFromNto1UsingDoWhile(int N) {
    int counter = 1;
    cout << "range printed using for loop: /n";
   do{
        N--;
        cout << N << endl;
    } while (N >= counter); 
}
void PrintRangeFromNto1UsingWhile(int N) {
    int counter = 1;
    cout << "range printed using for loop: \n";
    while (N >= counter) {
        N--;
        cout << N;
    }
}
void PrintRangeFromNto1UsingFor(int N) {
  int counter = 1;
  cout << "range printed using for loop: \n";
  for (N; N >= counter; N--) {
      cout << N << endl;
  }
}

// problem 28 : sum odd Numbers from 1 to N 
enum enOddOrEven{Odd=1,Even=2};
enOddOrEven CheckIfOddOrEven(int Number) {
    if (Number % 2 != 0) {
        return enOddOrEven::Odd ;
    }
    else {
        return enOddOrEven::Even;
    }
}
int SumOddNumbersUsingFor(int N) {
    int counter = 0, sum = 0;
        for (counter; counter <= N; counter++) {
           if (CheckIfOddOrEven(counter) == enOddOrEven::Odd) {
             sum = sum + counter;
           }
   }
        return sum;
}
void PrintOddNumbersFrom1ToN(int Result) {
    cout << "sum of odd Numbers is " << Result << endl;
}

// Problem 29 : Sum even number from 1 to N using while
enOddOrEven checkIfEvenOrOdd2(int number ) {
    if (number % 2 == 0)
        return enOddOrEven::Even;
    else
        return enOddOrEven::Odd;
}
void PrintSumEvenNums(int N) {
    int Counter = 1, Sum=0 ;
    while (Counter <= N){
        Counter++;
        if (checkIfEvenOrOdd2(Counter) == enOddOrEven::Even) {
            Sum += Counter;
        }
    }
    cout << Sum;
}
      // Problem 30 : Calculate Factorial of N  using for
int ReadPositiveNumber(string message) {
    int Number;
    do {
        cout <<  message;
        cin >> Number;
        return Number;
      } while (Number<0);
}

int CalculateFactorialOfN(int N) {
    int Counter, Factorial=1;
    for (Counter=N;Counter>0;Counter--) {
        Factorial *= Counter;
    } 
    return Factorial;
}

int main()
{
  //  int N = ReadNumber(); // this var is an Argument only for problems 26,27,28,29
          ////// problem 26
     //  PrintRangeFrom1ToNUsingWhile(N); //1 way
    // PrintRangeFrom1ToNUsingDoWhile(N); // 2 way
   // PrintRangeFrom1ToNUsingForLoop(N); // 3 way

          ////// problem 27
     //  PrintRangeFromNto1UsingDoWhile(N); // 1 way
    // PrintRangeFromNto1UsingWhile(N); // 2 way
   // PrintRangeFromNto1UsingFor(N);  // 3 way

     ////// Problem 28
  //PrintOddNumbersFrom1ToN(SumOddNumbersUsingFor(N));

       ////// Problem 29 
   // PrintSumEvenNums(N);

    ////// Problem 30
   // cout << CalculateFactorialOfN(ReadPositiveNumber("Enter N : "));
}

