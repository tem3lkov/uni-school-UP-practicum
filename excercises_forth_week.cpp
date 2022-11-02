
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
}
