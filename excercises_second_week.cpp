// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{	

    // Task 0 
    int num1 = 0;
    int num2 = 0;
    char mathOperator = ' ';

    int result = 0;

    int way = 0;

    std::cin >> way;

    switch (way) {
    case 1:
        std::cin >> num1 >> num2 >> mathOperator;
        break;
    case 2:
        std::cin >> mathOperator >> num1 >> num2;
        break;
    case 3:
        std::cin >> num1 >> mathOperator >> num2;
        break;
    };

    switch (mathOperator) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    };

    std::cout << result << std::endl;

    //Task 1
    double sum = 0;
    bool sick = false;

    std::cin >> sum >> sick;

    if (sick) {
        std::cout << "nqma da izlizam" << std::endl;
    }
    else std::cout << "ZDRAV SUM VEEEEEEEEEEE!" << std::endl;

    if (sum > 0) {
        std::cout << "shte si kupq lekarstva" << std::endl;
    }
    else if (sum > 0 && sum <= 10) std::cout << "shte otida na kafe" << std::endl;
    else std::cout << "shte stoq v kushti i shte piq chai" << std::endl;

    //Task 2
    char charecter = ' ';
    int difference = 'a' - 'A';

    std::cin >> charecter;
    bool check = charecter < 65 || charecter > 122;
    if (check) std::cout << "The character is not a letter!" << std::endl;
    if (charecter - difference >= 'A' && !check) {
        char newChar = (char)(charecter - difference);
        std::cout << "The uppercase character corresponding to " << charecter << " is " << newChar << std::endl;
    }
    else if ((charecter - (charecter + difference)) < 0 && !check) {
        char newChar = (char)(charecter + difference);
        std::cout << "The lowercase character corresponding to " << charecter << " is " << newChar << std::endl;
    }

	// Task 3
	int monthNum = 0;
	std::cin >> monthNum;

	switch (monthNum) {
		case 1:
		case 2:
		case 3:
			std::cout << "Winter" << std::endl;
			break;
		case 4:
		case 5:
		case 6:
			std::cout << "Spring" << std::endl;
			break;
		case 7:
		case 8:
		case 9:
			std::cout << "Summer" << std::endl;
			break;
		case 10:
		case 11:
		case 12:
			std::cout << "Fall" << std::endl;
			break;
	}

	// Task 4
	int a = 0;
	int b = 0;

	std::cin >> a >> b;

	// Ax + B = 0
	if (a == 0 && b == 0) {
		std::cout << "INF" << std::endl;
	}
	else if (a == 0 && b != 0) std::cout << "NO" << std::endl;
	else {
		int result = -b / a;
		std::cout << result << std::endl;
	}

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
