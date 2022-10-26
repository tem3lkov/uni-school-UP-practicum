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
    
    	// Forth task
	int n = 0;
	int newNumber = 0;
	int firstNumber = 0;
	int secondNumber = 1;
	std::cin >> n;


	for (int i = 1; i <= n; i++) 
	{
		newNumber = firstNumber + secondNumber;
		secondNumber = firstNumber;
		firstNumber = newNumber;
	}
	std::cout << newNumber << std::endl;

	// Second way
	int function(int n) 
	{
	if (n < 2) return n;
	return function(n - 1) + function(n - 2);
	}

	int main()
	{
		int n = 0;
		std::cin >> n;

		int number = function(n);
		std::cout << number << std::endl;

	}
	
	// Fifth task
	int sum = 0;
	int n = 0;
	do
	{
		std::cin >> n;
		sum += n;

	} while (n != 0);
	std::cout << sum << std::endl;
	
	// Sixth task
	int number = 0;
	int lastNum = 0;
	int sum = 0;
	std::cin >> number;

	do 
	{
		int lastNum = number % 10;
		sum += lastNum;
		number/=10;

	} while (number != 0);
	std::cout << sum << std::endl;
	
}

