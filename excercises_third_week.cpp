#include <iostream>
int main()
{
    // First task ----------------------------------------
    int num = 0;
    long long result = 1;
    std::cin >> num;

    for(int i = 1; i <= num; i++)
    {
        result = result * i;
    }

    std::cout << "The result is: " << result << std::endl;
    return 0;
    
    // Second task ---------------------------------------
    int n = 0;
    std::cin >> n;

    for(int i = 1; i <= n; i++)
    {
        std::cout << (i*i + 3*i) << "; ";
    }
    return 0
        
    // Third Task -------------------------
    int n = 0;
    int temp = INT_MIN; // returns the lowest possible int
    int number = 0;

    std::cin >> n;

    for(int i = 0; i < n; i++) 
    {
        std::cin >> number;
        temp = (number < 0 && number > temp)  ? number : temp;
    }

    std::cout << temp << std::endl;
}

