// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
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
    cout << "a3 = " << a3 << endl;

    float degreesInCelsius;
    float degreesInFahrenheit;

    cin >> degreesInCelsius;

    degreesInFahrenheit = degreesInCelsius * 9 / 5 + 32;

    cout << degreesInFahrenheit << endl;


    // Task 7
    int a;
    int b;

    cin >> a >> b;

    int prod = a * b;
    int reminder = prod % 1000;
    //int threeNumbers = ((prod - 100) % 10) % 10;
    //int fourNumbers = ((prod - 1000) % 100) % 10;
    int lastDigit = prod % 10;
    bool evenOrOdd = (lastDigit % 2 == 0) ? 1 : 0;


    cout << prod << ", " << lastDigit << " - " << evenOrOdd << endl;


    // Task 8
    int num1, num2;
    cin >> num1 >> num2;
    bool reminder = num2 % num1 == 0;
    cout << boolalpha << reminder << endl;
    
    // Task 9
    int firstSide, secondSide, thirdSide;
    cin >> firstSide >> secondSide >> thirdSide;

    bool firstIsOK = firstSide < secondSide + thirdSide;
    bool secondIsOK = secondSide < firstSide + thirdSide;
    bool thirdIsOK = thirdSide < firstSide + secondSide;

    bool triangleExists = (firstIsOK && secondIsOK && thirdIsOK);
    cout << boolalpha << triangleExists << endl;

    // Task 10
    double firstSide, secondSide, thirdSide, area, perimeterOver2, perimeter;
    cin >> firstSide >> secondSide >> thirdSide;

    bool firstIsOK = firstSide < secondSide + thirdSide;
    bool secondIsOK = secondSide < firstSide + thirdSide;
    bool thirdIsOK = thirdSide < firstSide + secondSide;

    bool triangleExists = (firstIsOK && secondIsOK && thirdIsOK);

    perimeter = firstSide + secondSide + thirdSide;
    perimeterOver2 = perimeter / 2;

    area = std::sqrt(perimeterOver2 * (perimeterOver2 - firstSide)
        * (perimeterOver2 - secondSide)
        * (perimeterOver2 - thirdSide));

    cout << "Area: " << (triangleExists ? area : -1) << endl;
    cout << "Perimeter: " << (triangleExists ? perimeter : -1) << endl;

    // Task 11
    int firstNumber, secondNumber, thirdNumber;
    cin >> firstNumber >> secondNumber >> thirdNumber;

    int maxNumber, minNumber;

    maxNumber = secondNumber;
    if (firstNumber > maxNumber) maxNumber = firstNumber;
    if (thirdNumber > maxNumber) maxNumber = thirdNumber;

    minNumber = secondNumber;
    if (firstNumber < minNumber) minNumber = firstNumber;
    if (thirdNumber < minNumber) minNumber = thirdNumber;

    cout << "Max: " << maxNumber << "\n" << "Min: " << minNumber;
    

    // Task 12
    double num, startOfInterval, endOfInterval;
    cin >> num >> startOfInterval >> endOfInterval;

    bool inInterval = startOfInterval <= num && endOfInterval >= num;

    cout << boolalpha << inInterval << endl;

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
