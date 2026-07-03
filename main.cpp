// ------------- FILE HEADER -------------
// Author ✅: 
// Assignment ✅:
// Date ✅:
// Citations: 


// ------------- CODE -------------
#include <iostream>

#include <iomanip>
// https://en.cppreference.com/cpp/header/iomanip
// for setprecision
// https://en.cppreference.com/cpp/io/manip/setprecision

using namespace std;


// Function prototypes (if any)

// Test in terminal
//  g++ main.cpp && ./a.out < test1.txt; rm ./a.out
//  g++ main.cpp && for x in test*txt; do echo -e "\n\nTEST: $x"; ./a.out < $x; done; rm ./a.out


// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main() {
    int cookies = 0;
    double servings = 0.0;
    double calories = 0.0;
    
    cout << "Welcome to the Oreo Calculator!" << endl;

    cout << "Enter the number of Oreos eaten: ";
    cin >> cookies;
    
    const int COOKIES_PER_SERVING = 5;
    const int CALORIES_PER_SERVING = 160;
    // Must use static_cast when doing integer division, to get the answer in float.
    // see zyBooks 2.3 Type Conversions https://learn.zybooks.com/zybook/PCCCS161ASummer26/chapter/2/section/3
    servings = static_cast<double>(cookies) / COOKIES_PER_SERVING;
    calories = servings * CALORIES_PER_SERVING;
    
    cout << fixed << setprecision(1);
    cout << cookies;
    cout << " Oreos equals ";
    cout << servings;
    cout << " servings!";
    cout << endl;
    
    cout << "You consumed ";
    cout << calories;
    cout << " calories";
    cout << endl;
    
    cout << "Keep eating Oreos!" << endl;
  return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name:
Display the number of servings in fixed point notation, rounded to one decimal place of precision.
 
Design:
A. INPUT
Ask the user for the number of Oreo Cookies eaten (whole cookies only, use an integer).
int cookies = 0;

B. OUTPUT
double servings = 0.0;
double calories = 0.0;

C. CALCULATIONS
const int COOKIES_PER_SERVING = 5;
const int CALORIES_PER_SERVING = 160;
servings = cookies / COOKIES_PER_SERVING;
calories = servings * CALORIES_PER_SERVING;

D. LOGIC and ALGORITHMS
WELCOME "Welcome to the Oreo Calculator!"

PROMPT "Enter the number of Oreos eaten: "
INPUT cookies
 
DATA cookies
LABEL " Oreos equals "
DATA servings
LABEL " servings!"
 
LABEL "You consumed "
DATA calories
LABEL " calories"
 
GOODBYE "Keep eating Oreos!"


SAMPLE RUNS
Welcome to the Oreo Calculator!
Enter the number of Oreos eaten: 12
12 Oreos equals 2.4 servings!
You consumed 384.0 calories.
Keep eating Oreos!
 
Welcome to the Oreo Calculator!
Enter the number of Oreos eaten: 3
3 Oreos equals 0.6 servings!
You consumed 96.0 calories.
Keep eating Oreos!

*/
