#include <iostream>
#include "coda.h"
using namespace std;

telefonata getTelefonata() {
	telefonata myCall;
	cout << "NOME: ";
	cin >> myCall.nome;
	cout << "ORA formato HH:MM ";
	cin >> myCall.ora;
	return myCall;
}

void Inserimento(coda & codaTelefonate) {
	cout << "Per smettere, inserisci . al nome e all'ora" << endl;
	int risp;
	telefonata risposta;
	bool continua = true;
	do {
		risposta = getTelefonata();
		if (risposta.nome=="." && risposta.ora==".")
			continua = false;
		Enqueue(codaTelefonate, risposta);
	} while (continua == true);
}

void Resoconto(coda codaTelefonate) {
	for (int i = 0; i < 5; i++) {
		cout << "LOL";
	}

}

int main() {
	int scelta;
	coda codaTelefonate;
	Init(codaTelefonate);
	bool smetti = false;
	do {
		cout << "1) Inserisci telefonata" << endl;
		cout << "2) Resoconto BELLISSIMO" << endl;
		cin >> scelta;
		switch (scelta) {
		case 1:
			Inserimento(codaTelefonate);
			break;
		case 2:
			Resoconto(codaTelefonate);
			break;
		default:
			cout << "Sto male, vado a casa";
		}
		cout << "1 CONTINUA, 2 SMETTI ORA PLZ: ";
		cin >> scelta;
		if (scelta == 2)
			smetti = true;
	} while (smetti == false);
	system("PAUSE");
	return 0;
}