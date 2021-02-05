#include <iostream>

using namespace std;

bool is_prime(int n) {
	if (n == 2) return true;
	if (n == 1 || n%2 == 0) return false;

	int divisible_by = 0;
	for (int i=1; i<=n; i++) {
		if(n%i == 0) divisible_by++;

	}
	return divisible_by == 2;
}

int main() {
	int prime=1;
	int i;
	for (i=3; i<5000000; i++) {
		if(is_prime(i)) prime++;

		if(prime==10001) break;
	}
	cout<<i<<endl;
}
