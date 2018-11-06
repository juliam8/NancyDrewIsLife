
#include <iostream>
using namespace std;

bool isPrime(int number) {
	for (int i = 2; i<number; i++) {
		if (number%i == 0) {
			return false; //number is divisible so its not prime
		}
	}
	return true; //number is prime now
}

/*int main() {
	int num = 7;
	int num = 64;
	if (isPrime)
		cout << "true" << endl;
	else
		cout << "nope" << endl;
}*/