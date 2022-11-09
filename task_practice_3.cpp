// // Task 0 
// #include <iostream>
// using namespace std;

// int fibonachi(int num);


// int main () {
//     int num = 0;
//     cout << "Вход: ";
//     cin >> num;
//     cout << fibonachi(num);
// }


// int fibonachi(int num) {
//     if(num < 2) return num;

//     return fibonachi(num-1) + fibonachi(num-2);
// }

// Task 1
// #include <iostream>
// #include <cmath>
// using namespace std;

// bool isTriangle(int a, int b, int c) {
//     return (a + b > c && a + c > b && b + c > a) ? true : false;
// }

// int findP(int a, int b, int c) {
//     return a + b + c;
// }

// int findS(int p , int a, int b, int c) {
//     int halfP =  p / 2;
//     return sqrt(halfP * (halfP - a) * (halfP - b) * (halfP - c));
// }

// int main() {
//     int a = 0;
//     int b = 0;
//     int c = 0;


//     cin >> a >> b >> c;
//     if(isTriangle(a, b, c)) {
//         cout << "Exists" << endl;

//         int p = findP(a, b, c);
//         int s = findS(p, a, b, c);

//         cout << "Perimeter: " << p << endl;
//         cout << "Area: " << s << endl; 
//         return 0;

//     }
//     cout << "Doesn't exist";
// }

// Task 2
// #include <iostream>
// using namespace std;
// int nFact(int num) {
//     int total = 1;

//     while(num >=1) {
//         total*= num;
//         num--;
//     }

//     return total;

// }
// int main() {
//     int num = 0;
//     cin >> num;

//     cout << nFact(num);

// }

// Task 3
// #include <iostream>
// using namespace std;

// int toBinary(int num) {
//     int binaryNum = 0;
//     int step = 1;
//     while(num > 0) {
//         binaryNum+= step * (num % 2);
//         step *= 10;
//         num /= 2;
//     }
//     return binaryNum;
// }

// int toNDigitBase(int num, int base) {
//     int binaryNum = 0;
//     int step = 1;
//     while(num > 0) {
//         binaryNum+= step * (num % base);
//         step *= 10;
//         num /= base;
//     }
//     return binaryNum;
// }



// int main () {
//     int num = 0;
//     cin >> num;

//     int binary = toNDigitBase(num, 2);
//     int fiveNary = toNDigitBase(num, 5);
    
//     // 2 ≤ k ≤ 5
//     cout << binary << " " << num << " " << fiveNary;
// }

#include <iostream>
using namespace std;

/*
bool isPrimeYear(int year) 
{
	return ((year % 4 == 0) && (year % 100 != 0));
}
bool checkDate(int day, int month, int year)  
{
	int days = 0;

	if (month > 12 || month < 1) return false;
	switch (month) 
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			days = 31;
			break;
		case 2: 
			days = isPrimeYear(year) ? 29 : 28;
			break;
		default : 
			days = 31;
			break;
	}

	if (day > days || day < 1) return false;
	return true;
}
int main() 
{
	int day = 0;
	int month = 0;
	int year = 0;

	cin >> day >> month >> year;
	cout << boolalpha << checkDate(day, month, year);
}

*/


/*
void findPerfectNumber(int n) 
{
	int num = 1;
	while (n > 0) 
	{
		int sum = 0;

		for (int i = 1; i < num; i++) 
		{
			if (num % i == 0) sum += i;
		}

		if (sum == num) cout << num << " ";
		num++;
		n--;
	}
}
int main() 
{
	int n = 0;
	cin >> n;

	findPerfectNumber(n);
	return 0;
}
*/


/*
bool isPalindrom(int num) 
{
	int reverseNum = 0;
	int copyNum = num;
	while (copyNum > 0)
	{
		// 34553 35543
		reverseNum = copyNum % 10 + (reverseNum * 10);
		copyNum /= 10;
	}
	return num == reverseNum;


}

int main() 
{
	int num = 0;
	cin >> num;

	cout << boolalpha << isPalindrom(num);
}
*/



/*
void canonicalView(int num) 
{

	while (num > 1) 
	{
		for (int i = 2; i <= num; i++)
		{
			if (num % i == 0)
			{
				cout << i;
				num /= i;
				if (num > 1) cout << " * ";
				break; 
			}
				
			
		}
	}
}
int main() 
{
	int num = 0;
	cin >> num;

	cout << num << " = ";
	canonicalView(num);
}

*/



/*
bool check(unsigned int num) 
{
	int copy = num;
	while (copy > 99) 
	{
		int num1 = copy % 10;
		int num2 = copy / 10 % 10;
		int num3 = copy / 100 % 10;

		if (num3 != num1 + num2) return false;
		copy /= 10;
	}
	return true;
}

int main() 
{
	unsigned int num = 0;
	cin >> num;

	cout << (check(num) ? "yes" : "no");


}
*/



/*
int binaryNum(int num) 
{
	int binary = 0;
	int base = 2;
	int step = 1;
	while (num > 0) 
	{
		binary = binary  + (num % base) * step;
		num /= base;
		step *= 10;
	}
	return binary;
}

void printNumbers(int num) 
{
	int n = 1;
	for(int i = 0; i < num;)
	{
		int binaryN = binaryNum(n);
		int copy = binaryN;
		int cnt1 = 0;
		int cnt0 = 0;

		while (copy >= 1)
		{
			(copy % 10) == 1 ? cnt1++ : cnt0++;
			
			copy /= 10;
		}
		
		if (cnt1 == cnt0) 
		{
			cout << binaryN << endl;
			i++;
		}
		n++;
	}
}
int main() 
{
	printNumbers(20);
	//cout << binaryNum(10);

}
*/


/*
void findPerfectNumber(int n)
{
	int num = 1;
	while (n > 0)
	{
		int sum = 0;

		for (int i = 1; i < num; i++)
		{
			if (num % i == 0) sum += i;
		}

		if (sum == num) cout << num << " ";
		num++;
		n--;
	}
}

int reverse(int num)
{
	int reverseNum = 0;
	while (num > 0)
	{
		reverseNum = num % 10 + (reverseNum * 10);
		num /= 10;
	}
	return reverseNum;
}

bool findPerfect(int num, int reversedNum) 
{
	bool status = true;
	for (int i = 1; i < num; i++)
	{
		if (num % i == 0 && !(reversedNum % i == 0) || (!(num % 10 == 0) && reversedNum % 10 == 0)) {
			status = false;
			break;
		}
	}

	return status;
}
int main() 
{
	int num = 0;
	cin >> num;

	int reversedNum = reverse(num);

	cout << boolalpha << findPerfect(num, reversedNum);
	
}
*/
