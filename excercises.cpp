// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
    // Task 0
    cout << "\"Shte si mina OOP-to hihi!\"" << endl;

    // Task 1
    int num1, num2;

    cin >> num1 >> num2;

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int division = num1 / num2;
    int reminderAfterDevision = num1 % num2;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Division: " << division << endl;
    cout << "Reminder: " << reminderAfterDevision << endl;

    // Task 2    
    int a, b;
    cin >> a >> b;

    a = a + b;

    b = a - b;

    a = a - b;

    cout << a << " " << b;
    


    // VARIANT 2
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;

    

    // Task 3
    int fourDigitNumber;

    cin >> fourDigitNumber;

    int firstDigit = fourDigitNumber / 1000;
    int secondDigit = (fourDigitNumber / 100) % 10;
    int thirdDigit = ((fourDigitNumber / 10) - 100) % 10;
    int forthDigit = ((fourDigitNumber - 1000) % 100) % 10;
    int sum = firstDigit + secondDigit + thirdDigit + forthDigit;

    cout << "First digit: " << firstDigit << endl;
    cout << "Second digit: " << secondDigit << endl;
    cout << "Third digit: " << thirdDigit << endl;
    cout << "Forth digit: " << forthDigit << endl;
    cout << "Sum: " << sum << endl;

    // Task 4
    int fourDigitNumber;

    cin >> fourDigitNumber;

    int firstDigit = fourDigitNumber / 1000;
    int secondDigit = (fourDigitNumber / 100) % 10;
    int thirdDigit = ((fourDigitNumber / 10) - 100) % 10;
    int forthDigit = ((fourDigitNumber - 1000) % 100) % 10;
    int sum = firstDigit + secondDigit + thirdDigit + forthDigit;
    int finalDigit = (forthDigit * 1000) + (thirdDigit * 100) + (secondDigit * 10) + (firstDigit);

    cout << finalDigit << endl;

   //Task 5
   // Въведете 3 числа от клавиатурата а1, а2 и а3.
   // Разменете стойностите им, така че а1 да има стойността на а2, 
   // а2 да има стойността на а3, а а3 да има старата стойност на а1.

    int a1, a2, a3;

    cin >> a1 >> a2 >> a3;

    int temp;

    temp = a1;
    a1 = a2;
    a2 = a3;
    a3 = temp;

    cout << "a1 = " << a1 << endl;
    cout << "a2 = " << a2 << endl;
    cout << "a3 = " << a3 << endl;*/

    /*float degreesInCelsius;
    float degreesInFahrenheit;

    cin >> degreesInCelsius;

    degreesInFahrenheit = degreesInCelsius * 9 / 5 + 32;

    cout << degreesInFahrenheit << endl;

    return 0;
  
    

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
