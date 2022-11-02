
#include <iostream>

using namespace std;
int main()
{
  
    // Task 1
    int num = 0;
    int sum = 0;

    for(int i = 100; i <= 200; i++) {
        if(i % 9 == 0) sum+=i;
    }
    cout << sum;
  
  // Task 2
    int reversedNumber = 0;
    int num = 0;
    int tempNumber = 0;
    cin >> num;


    while(num > 0) {   
        reversedNumber= reversedNumber*10 + (num%10);
        num/=10;
    }
    cout << reversedNumber;
  
  // Task 12

    unsigned int num = 0;
    cin >> num;

    int size = 0;
    unsigned int finalNum = 0;
    unsigned int copyNum = 0;
    while(copyNum > 0) {
        size++;
        copyNum /=10;
    }
    int middle = size / 2;
    
    unsigned int firstPart = 0;
    unsigned int secondPart = 0;

    int step = 1;

    for(int i = 0; i < middle; i++) {
        secondPart = secondPart + (num%10) * step;
        num/=10;
        step *= 10;
    }

    firstPart = num;
    
    int powerOfTen = 1;
    int firstHalfSize = (size + 1) / 2;
    for(int i = 1; i <= firstHalfSize; i++) {
        powerOfTen = powerOfTen * 10;
    }

    finalNum = secondPart * powerOfTen + firstPart;

    cout << finalNum;


}
