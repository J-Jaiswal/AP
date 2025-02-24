#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// Sum of the AP and printing the n terms
	
	int n, a, d;
	cout << "Enter the number of terms in the AP: ";
	cin >> n;
	cout << "Enter the first term of the AP: ";
	cin >> a;
	cout << "Enter the common difference of the AP: ";
	cin >> d;

	int term = a + (n - 1) * d;
	int sum = n * (2 * a + (n - 1) * d) / 2;

cout << "*************" << endl;
	for (int x = 0; x < n; x++) { 
		cout << a + x * d << " ";
	}
	cout << endl;

	
	cout << "*************" << endl;
	cout << "Sum of the " << n << " terms = " << sum << endl;
	cout << "*************" << endl;

	return 0;
}

