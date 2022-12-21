
#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int ReadPositiveNumber(string message) {
    int Hour;
    cout << message << endl;
    cin >> Hour;
   return Hour;
}
// problem 41 : calculate hours to days and weeks
float HoursToDays(float NumberOfHours) {
    return (float)NumberOfHours / 24 ;
}
float HoursToWeeks(float NumberOfHours) {
    return (float)NumberOfHours / 24 / 7 ;
}
float DaysToWeeks(float NumberOfDays) {
    return (float)NumberOfDays / 7 ;
}
float Remainder(float Num1 , float Num2) {
    return (int)Num1 % (int)Num2;
}
     // problem 42 : calculate  seconds , minutes , hours ,  and days to seconds  
struct stTaskDuration {
    int DurationHours, DurationMinutes, DurationSeconds, DurationDays;
};
stTaskDuration ReadTaskDuration() {
    stTaskDuration TaskDuration;
    TaskDuration.DurationDays = ReadPositiveNumber("enter number of days : ");
    TaskDuration.DurationHours = ReadPositiveNumber("enter number of hours : ");
    TaskDuration.DurationMinutes = ReadPositiveNumber("enter number of minutes : ");
    TaskDuration.DurationSeconds = ReadPositiveNumber("enter number of seconds : ");

    return TaskDuration;
}
int DurationToSecond(stTaskDuration DurationToSeconds) {
    int TaskDuration = 0;
    TaskDuration = DurationToSeconds.DurationDays * 24 * 60 * 60;
    TaskDuration += DurationToSeconds.DurationHours * 60 * 60;
    TaskDuration += DurationToSeconds.DurationMinutes * 60 ;
    TaskDuration +=  DurationToSeconds.DurationSeconds ;

    return TaskDuration;

}
  // problem 43 : calculate seconds to days , hours , minutes , seconds 
stTaskDuration SecondsToTaskDuration(int TotalSeconds) {
    stTaskDuration TaskDuration;
    const int secondsPerDay = 24 * 60 * 60 ;
    const int secondsPerHours = 60 * 60;
    const int secondsPerMinutes = 60;
    
    int Remainder = 0;
    TaskDuration.DurationDays = floor(TotalSeconds / secondsPerDay);
    Remainder = TotalSeconds % secondsPerDay;
    TaskDuration.DurationHours = floor(Remainder / secondsPerHours);
    Remainder = Remainder % secondsPerHours;
    TaskDuration.DurationMinutes = floor(Remainder / secondsPerMinutes);
    Remainder = Remainder % secondsPerMinutes;
    TaskDuration.DurationSeconds = Remainder;

    return TaskDuration;
}

void PrintTaskDurationDetails(stTaskDuration TaskDuration) {

    cout << TaskDuration.DurationDays << " : "
        << TaskDuration.DurationHours << " : "
        << TaskDuration.DurationMinutes << " : "
        << TaskDuration.DurationSeconds << endl;
}

  // problem 44 : the day of week
enum enDayOfWeek {sanday=1,monday=2,tuesday=3,wednesday=4,thursday=5,friday=6,saturday=7};
int ReadDayInRange(string message , int From , int To) {
    int Number = 0;
    do {
        cout << message << endl;
        cin >> Number;
    } while (Number < From || Number > To);

    return Number;
}

enDayOfWeek ReadDayOfWeek() {
    return (enDayOfWeek)ReadDayInRange("please enter the day of week : ", 1, 7);
}

string GetDayOfWeek(int Day) {
    switch (Day) {
    case enDayOfWeek::sanday:
        return "Sanday";
    case enDayOfWeek::monday:
        return "Monday";
    case enDayOfWeek::tuesday:
        return "Tuesday";
    case enDayOfWeek::wednesday:
        return "Wednesday";
    case enDayOfWeek::thursday:
        return "Thursday";
    case enDayOfWeek::friday:
        return "Friday";
    case enDayOfWeek::saturday:
        return "Saturday";
        default :
            return " it's invalid day ";

   }
}

// problem 45 : the Month of year
enum enMonthOfYear { january = 1, february = 2, march = 3, april = 4, may = 5, june = 6, julay = 7 , augest = 8, september= 9, october=10, november=11,desember=12 };
int ReadMonthInRange(string message, int From, int To) {
    int Number = 0;
    do {
        cout << message << endl;
        cin >> Number;
    } while (Number < From || Number > To);

    return Number;
}

enDayOfWeek ReadMonthOfYear() {
    return (enDayOfWeek)ReadMonthInRange("please enter the month of year : ", 1, 12);
}

string GetMonthOfYear(int Day) {
    switch (Day) {
    case enMonthOfYear::january:
        return "january";
    case enMonthOfYear::february:
        return "february";
    case enMonthOfYear::march:
        return "march";
    case enMonthOfYear::april:
        return "april";
    case enMonthOfYear::may:
        return "may";
    case enMonthOfYear::june:
        return "june";
    case enMonthOfYear::julay:
        return "julay";
    case enMonthOfYear::augest:
        return "augest";
    case enMonthOfYear::september:
        return "september";
    case enMonthOfYear::october:
        return "october";
    case enMonthOfYear::november:
        return "november";
    case enMonthOfYear::desember:
        return "desember";
   
    default:
        return " it's invalid Month ";

    }
}

int main()
{ 
    // problem 41 
    /*
    float NumberOfHours = ReadPositiveNumber("enter number of hours : ");
    float NumberOfDays =  HoursToDays(NumberOfHours);
    float NumberOfWeeks = HoursToWeeks(NumberOfHours) ; 
    float HoursRemainder = Remainder(NumberOfHours, 24);
    float DaysRemainder = Remainder(NumberOfDays, 7);
    cout << "Total Hours = " << NumberOfHours << endl;
    cout << "Total Days = " << round(NumberOfDays) << " and " << HoursRemainder << " hours " << endl;
    
    cout << "Days to week = " << round(DaysToWeeks(NumberOfDays)) << " and " << DaysRemainder << "Days"  << endl;
    */
   
    // problem 42
   /* stTaskDuration TaskDuration ;
   cout << "the Number of seconds is " << DurationToSecond(ReadTaskDuration());
   */

    // problem 43 
    /*
    int TotalSeconds = ReadPositiveNumber("enter seconds : ");
    PrintTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));
    */

    // problem 44
   /* cout << GetDayOfWeek(ReadDayOfWeek());*/

    // problem 45
    cout << GetMonthOfYear(ReadMonthOfYear());
}

