 /*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Mary Brashear
 */
#include <iostream>
#include <cmath>
using namespace std;

int main () {
    //declare variables
	double x1, x2, a, b, c, d;
    //get user input
	cout << "What is a, b, and c?" ;
	cin >>a >>b >>c;
    //find the root
    d = (b * b) - (4 * a * c);
    //determine how many roots there are and print them
	if (d == 0) {
        x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "The root is real and it is " << x1;
	}
	else if (d > 0) {
        x1 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
        x2 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    cout << "The roots are real and they are " << x1 << " and " << x2;
	}
	else if (d < 0) {
		cout << "There are no real roots";
	}
}
