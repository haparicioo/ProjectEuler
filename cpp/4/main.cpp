#include <bits/stdc++.h>

using namespace std;

bool is_palindrome(int number) {
	int *digits;
	int lenght = floor(log10(number) + 1);

	digits = (int*) malloc ( lenght * sizeof(int) );

	for(int i=0; i<lenght; i++) {
		digits[i] = number%10;
		number = number/10;
	}

	for(int i=0; i<lenght/2; i++)
		if(digits[i] != digits[lenght - i - 1])
			return false;

	return true;
}

int main() {
	int largest = 0;
	int product = 0;
	for(int a=999; a>100; a--) {
		for(int b=999; b>100; b--) {
			product = a*b;
			if(is_palindrome(product) && product > largest)
				largest = product;
		}
	}
	cout<<largest<<endl;
}
