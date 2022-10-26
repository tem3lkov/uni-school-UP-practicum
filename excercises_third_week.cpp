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
}

