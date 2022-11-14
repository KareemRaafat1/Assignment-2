// palindrom algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

// Function to check whether
// the string is palindrome
string isPalindrome(string S)
{
    // Stores the reverse of the
    // string S
    string P = S;

    // Reverse the string P
    reverse(P.begin(), P.end());

    // If S is equal to P
    if (S == P) {
        // Return "Yes"
        return "Yes";
    }
    // Otherwise
    else {
        // return "No"
        return "No";
    }
}

// Driver Code
int main()
{
    string S = "ABCDCBA";
    cout << isPalindrome(S);

    return 0;
}