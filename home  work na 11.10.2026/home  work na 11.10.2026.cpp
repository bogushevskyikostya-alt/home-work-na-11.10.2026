/* Завдання 1
#include <iostream>
#include <cmath>
using namespace std;

double power(double base, int exp) {
    double result = 1.0;
    for (int i = 0; i < abs(exp); ++i) {
        result *= base;
    }
    return exp >= 0 ? result : 1.0 / result;
}*/
/* Завдання 2
#include <iostream>
using namespace std;

int sumRange(int a, int b) {
    if (a > b) {
        swap(a, b);
    }
    int sum = 0;
    for (int i = a; i <= b; ++i) {
        sum += i;
    }
    return sum;
}

// cout << sumRange(1, 5); // Виведе 15 (1+2+3+4+5)
*/
/* Завдання 3
#include <iostream>
using namespace std;

bool isPerfect(int n) {
    if (n <= 1) return false;
    int sum = 1;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            sum += i;
            if (i * i != n) {
                sum += n / i;
            }
        }
    }
    return sum == n;
}

void findPerfectNumbers(int start, int end) {
    cout << "Досконалі числа в інтервалі від " << start << " до " << end << ": ";
    for (int i = start; i <= end; ++i) {
        if (isPerfect(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

*/
/* Завдання 4
#include <iostream>
#include <string>
using namespace std;

void printCard(int value, char suit) {
    // value: 2-10, 11 (J), 12 (Q), 13 (K), 14 (A)
    // suit: 'S' (піки), 'H' (чирви), 'D' (бубни), 'C' (трефи)
    string vStr;
    if (value >= 2 && value <= 10) vStr = to_string(value);
    else if (value == 11) vStr = "J";
    else if (value == 12) vStr = "Q";
    else if (value == 13) vStr = "K";
    else if (value == 14) vStr = "A";
    else vStr = "?";

    cout << "+-----+\n";
    cout << "| " << vStr << (vStr.length() == 1 ? "   " : "  ") << "|\n";
    cout << "|  " << suit << "  |\n";
    cout << "|   " << vStr << (vStr.length() == 1 ? "  " : " ") << "|\n";
    cout << "+-----+\n";
}
*/
/* Завдання 5
#include <iostream>
using namespace std;

bool isLucky(int number) {
    if (number < 100000 || number > 999999) return false;

    int d6 = number % 10; number /= 10;
    int d5 = number % 10; number /= 10;
    int d4 = number % 10; number /= 10;
    int d3 = number % 10; number /= 10;
    int d2 = number % 10; number /= 10;
    int d1 = number % 10;

    return (d1 + d2 + d3) == (d4 + d5 + d6);
}
*/
/*Завдання 6
#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            return i; 
    }
    return -1; 
}
*/
/* Завдання 7
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}
*/
/*Завдання 8
#include <iostream>
#include <string>
using namespace std;

int binaryToDecimal(string binStr) {
    int decimal = 0;
    int base = 1;
    int n = binStr.length();

    for (int i = n - 1; i >= 0; --i) {
        if (binStr[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }
    return decimal;
}
*/
/* Завдання 9 
#include <iostream>
using namespace std;

double arrayAverage(int arr[], int size) {
    if (size <= 0) return 0.0;

    long long sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}
*/
