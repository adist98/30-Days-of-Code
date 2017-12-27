#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    // Declare second integer, double, and String variables.
    int j;
    double e;
    string data;
    string b;
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    //getline(cin, j);
    //getline(cin, e);
    //
    cin >> j;
    cin >> e;
    cin.ignore();
    getline(cin, data);
    b = s+data;
    // Print the sum of both integer variables on a new line.
    cout << j+i << endl;
    // Print the sum of the double variables on a new line.
    cout << e+d << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << b << endl;
	return 0;
	/*
	People starting to learn C++ might suffer if they aren't familiar with cin >> and getline() and what happens if you use both of them together. 
	Using cin leaves an end of line character which is then read by your getline(); It is best not to mix different types of input.
	The solution one could use to overcome this problem is to use a different input method. 
	On the other hand, it is always nice to get familiar with problems one might come across while coding, so take a look. 
	It is possible to overcome this problem while keeping all of your code and just adding a single line.
	APPLICABLE ON LINE 23 AND 24 here.
*/
}
