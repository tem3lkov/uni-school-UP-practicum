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
	
	// Seventh task
	int a, n, temp = 1;
	std::cin >> a >> n;
	
	for (int i = n; i > 0; i--) 
	{
		temp *= a;
	}
	std::cout << temp << std::endl;
	
	// Eight task
	int number = 0;
	bool isPrime = true;
	
	cin >> number;

	for (int i = 2; i < number; i++) {
		if(number % i == 0) {
			isPrime = false;
			break;
		}
	}

	std::cout << (isPrime ? "YES" : "NO");
	
	// Ninth task
	char start = 'A';
	char end = 'Z';

	for (int i = start; i <= end; i++) {
		if ((char)i == 'A' || (char)i == 'E' || (char)i == 'U' || (char)i == 'O' || (char)i == 'I') continue;
		cout << (char)i << " ";
	}
	

	// Tenth task

    int userInput;

    std::cin >> userInput;

    int binaryBase = 2;
    int binaryNumber = 0;
    int base = 1;

    while (userInput > 0) {
	binaryNumber += base * (userInput % binaryBase);
	base*=10;
	userInput/=binaryBase;
    }


    cout << binaryNumber;
	
	// Eleventh task
	    int rows = 0;

	    cout << "Enter number of sides: ";
	    cin >> rows;
	    for (int i = 0; i < rows; i++) {
		for(int j = 0; j< rows; j++) {
		    if (j < i) {
			cout << "-";

			continue;
		    }
		    if (i == j) {
			cout << "0";

			continue;
		    }
		    cout << "+";
		}
		cout << "\n";
    }
	
	

	// Task twelve
 	int hours = 0;

	cout << "Enter positive number of hours: ";
	cin >> hours;
	int rotations = 0;
	int hoursLeft = 0;
	while (hours>=12) {
	   hours -= 12;
	   if (hoursLeft >= 0) rotations++;

	}
	cout << rotations << " rotation(s) and the hour hand is at " << hours << " o'clock";
	
}

