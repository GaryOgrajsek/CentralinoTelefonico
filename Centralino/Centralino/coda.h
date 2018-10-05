#pragma once
#include <string>
#define DIM 5
using namespace std;

struct telefonata {
	string nome;
	string ora;
};

struct coda {
	telefonata elem[DIM];
	int iDavanti;
	int iDietro;
};


void Init(coda &);

void Enqueue(coda &, telefonata);

void Dequeue(coda &);

telefonata Davanti(coda);

bool Full(coda);

bool Empty(coda);