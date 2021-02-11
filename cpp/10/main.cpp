#include <iostream>

using namespace std;

bool is_prime(int n) {
	if (n == 2) return true;
	if (n == 1 || n%2 == 0) return false;

	int divisible_by = 0;
	for (int i=3; i<=n; i+=2) {
		if(n%i == 0) divisible_by++;
		if(divisible_by>1) return false;
	}
	return true;
}

int main() {
	long int sum=2;
	int limit = 2000000;
	for(int i=3; i<=limit; i+=2)
		if(is_prime(i)) sum+=i;
	cout << sum << endl;
}
