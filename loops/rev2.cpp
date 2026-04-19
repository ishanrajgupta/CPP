//write a program to check whether a number is palindrome or not using loops
#include <iostream>
using namespace std;
int main() {
    int n, original, reversed = 0, remainder;
    cout << "Enter a number: ";
    cin >> n;
    original = n;           
    while (n != 0) {
        remainder = n % 10;  
        reversed = reversed * 10 + remainder; 
        n /= 10;             
    }
    if (original == reversed) {
        cout << original << " is a palindrome number.";
    } else {
        cout << original << " is not a palindrome number.";
    }
    return 0;
}