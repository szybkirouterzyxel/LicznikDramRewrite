#include <iostream>
#include <cstdio>
using namespace std;
int main() {

	string input;

	cout << "LicznikDramRewrite, Nowy LicznikDram z wiki o dramach  Y - Byla drama, N - nie bylo dramy wiki - Wiki dram info - info o programie";
	cin >> input;

	if (input == "etd") {
		cout << "E to dzban";
	}

	if (input == "Y") {
		cout << "o Drama";
	}


	if (input == "N") {
		cout << "Nie ma dramy";
	}
	
	if (input == "wiki") {
		cout << "niedlugo bedzie";
	}

	if (input == "info") {
		cout << "to jest Licznik Dram Rewrite, napisz do mnie jezli chcesz dodać mi propozycje aby cos dodac";
	}






	system("pause");
}

