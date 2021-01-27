#include <iostream>

using namespace std;

int main() {
	int n=1;
	while(true) {
		bool divisible = true;
		for(int i=1; i<=20; i++) {
			if(n%i != 0) {
				divisible = false;
				break;
			}
		}
		if(divisible) break;
		n++;
	}
	cout << n <<endl;;
}
