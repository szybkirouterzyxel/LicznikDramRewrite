#include <iostream>

using namespace std;
int main() {

	char input;

	cout << "LicznikDramRewrite, Nowy LicznikDram z wiki o dramach  1 - Byla drama, 2 - nie bylo dramy 3 - Wiki dram 4 - info o programie";
	cin >> input;

	if (input == '1') {
		cout << "o Drama";
	}


	if (input == '2') {
		cout << "Nie ma dramy";
	}
	
	if (input == '3') {
		cout << "niedlugo bedzie";
	}

	if (input == '4') {
		cout << "to jest Licznik Dram Rewrite, napisz do mnie jezli chcesz dodać mi propozycje aby cos dodac";
	}







}

