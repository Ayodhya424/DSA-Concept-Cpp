//------------------------------------Left Rotation of a String-----------------------------
// Given a string s and an integer d, the task is to left rotate the string by d positions.

// Examples:
// Input: s = "GeeksforGeeks", d = 2
// Output: "eksforGeeksGe"  
// Explanation: After the first rotation, string s becomes "eeksforGeeksG" and after the second rotation,
// it becomes "eksforGeeksGe".

#include<iostream>
#include<vector>
using namespace std;

string LeftRotateArray(string s, int d)
{
    int n = s.size();
    d = d % n;
    for(int i=0; i<d; i++)
    {
        char first = s[0];
        for(int j = 0; j < n-1; j++)
        {
            s[j] = s[j+1];
        }
        s[n-1] = first;
    }
    return s; 
}

int main()
{
    string s = "Ayodhya";
    int d = 3;
    s = LeftRotateArray(s, d); 
    cout << s << endl;
    return 0;
}

//Output: - dhyaAyo


Time Complexity: O(n*d), the outer loop runs d times, and inner loop runs n times.
Auxiliary Space: O(1) if the string is mutable, like in C++. For immutable strings like in Java, C#


//----------------------------[Expected Approach - 2] Using Reversal Algorithm
// The idea is based on the observation that if we left rotate the string by d positions, the last 
// (n – d) elements will be at the front and the first d elements will be at the end. 
// -->Reverse the substring containing the first d elements of the string.
// -->Reverse the substring containing the last (n – d) elements of the string.
// -->Finally, reverse all the elements of the string.

// C++ program to left rotate a string by d position
// using Reversal Algorithm

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void rotateString(string &s, int d) {
    int n = s.size();

    // Handle the case where d > size of array
    d %= n;

    // Reverse the first d elements
    reverse(s.begin(), s.begin() + d);

    // Reverse the remaining n-d elements
    reverse(s.begin() + d, s.end());

    // Reverse the entire  string
    reverse(s.begin(), s.end());
}

int main() {
    string s = "Ayodhya";
    int d = 2;
    rotateString(s, d);
    cout << s << endl;
    return 0;
}

//Output:- odhyaAy

// Time Complexity: O(n), where n is the size of the given string.
// Auxiliary Space: O(1) if the string is mutable, like in C++. For immutable strings like in Java,