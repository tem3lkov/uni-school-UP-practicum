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