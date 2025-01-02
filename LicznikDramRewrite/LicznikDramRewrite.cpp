#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
using namespace std;
int main() {

	string input;
	string read;
	string textread;
	ifstream text("c:\\Users\\Public\\Documents\\dramas.txt");
	getline(text,textread);
	cout << "Dram juz bylo: " << textread;

	cout << "LicznikDramRewrite, Nowy LicznikDram z wiki o dramach  Y - Byla drama, N - nie bylo dramy wiki - Wiki dram info - info o programie";
	cin >> input;


	if (input == "Y") {
		cout << "o Drama";
		ofstream licznik("c:\\Users\\Public\\Documents\\dramas.txt");
		licznik << "drama";
		licznik.close();
	}


	if (input == "N") {
		cout << "Nie ma dramy";
	}
	
	if (input == "wiki") {
		cout << "niedlugo bedzie";
	}

	if (input == "info") {
		cout << "wersja 0.2, to jest Licznik Dram Rewrite, napisz do mnie jezli chcesz dodać mi propozycje aby cos dodac";
	}






	system("pause");
}

