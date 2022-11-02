
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

    // 177
    // 6771

    while(num > 0) {   
        reversedNumber= reversedNumber*10 + (num%10);
        num/=10;
    }
    cout << reversedNumber;
}
