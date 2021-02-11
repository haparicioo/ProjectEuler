#include <iostream>

using namespace std;

bool is_triplet(int a, int b, int c) {
	return a*a + b*b == c * c;
}

int main() {
	for(int a=1; a<1000; a++) 
		for(int b=1; b<1000; b++) 
			for(int c=1; c<1000; c++) 
				if ( a < b && b < c && is_triplet(a,b,c) && (a+b+c) == 1000) 
					cout << a * b * c << endl;
}
