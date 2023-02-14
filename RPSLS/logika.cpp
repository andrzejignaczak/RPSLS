#include "logika.h"
#include <string>

int Logika::getLicznikG() {
	return licznikG;
}

int Logika::getLicznikK() {
	return licznikK;
}

int Logika::setWyborGracza(int GraczKlik) {
	wyborGracza = GraczKlik;
	return 0;
}
	
int Logika::getWyborGracza(){
	return wyborGracza;
}

int Logika::getLosowaCyfra(){
	losowaCyfra = rand() % 5 + 1;
	return losowaCyfra;
}

void Logika:: reset_func() {
	licznikG = 0;
	licznikK = 0;
	return;
}

int Logika::koniec() {
	if (licznikK == 3) {
		return 1;
	}
	else if (licznikG == 3) {
		return 2;
	}
	return 0;
}

std::string Logika::porownaj() {
    std::string wynik;
	if (wyborGracza == losowaCyfra) {
		wynik = "Tie!";
	}
	else if (wyborGracza == 1 && losowaCyfra == 2) {
		wynik = "Paper covers Rock. You Lose!";
		licznikK++;
	}
	else if (wyborGracza == 1 && losowaCyfra == 3) {
		wynik = "Rock breaks Scissors. You Win!";
		licznikG++;
	}
	else if (wyborGracza == 1 && losowaCyfra == 4) {
		wynik = "Rock crushes Lizard. You Win!";
		licznikG++;
	}
	else if (wyborGracza == 1 && losowaCyfra == 5) {
		wynik = "Spock vaporizes rock. You Lose!";
		licznikK++;
	}
	else if (wyborGracza == 2 && losowaCyfra == 1) {
		wynik = "Paper covers rock. You Win!";
		licznikG++;
	}
	else if (wyborGracza == 2 && losowaCyfra == 3) {
		wynik = "Scissors cut paper. You Lose!";
		licznikK++;
	}
	else if (wyborGracza == 2 && losowaCyfra == 4) {
		wynik = "Lizard eats paper. You Lose!";
		licznikK++;
	}
	else if (wyborGracza == 2 && losowaCyfra == 5) {
		wynik = "Paper disproves Spock. You Win!";
		licznikG++;
	}
	else if (wyborGracza == 3 && losowaCyfra == 1) {
		wynik = "Rock breaks scissors. You Lose!";
		licznikK++;
	}
	else if (wyborGracza == 3 && losowaCyfra == 2) {
		wynik = "Scissors cut paper. You Win!";
		licznikG++;
	}
	else if (wyborGracza == 3 && losowaCyfra == 4) {
		wynik = "Scissors decapitated lizard. You Win!";
		licznikG++;
	}
	else if (wyborGracza == 3 && losowaCyfra == 5) {
		wynik = "Spock smashes scissors. You Lose!";
		licznikK++;
	}
	else if (wyborGracza == 4 && losowaCyfra == 1) {
		wynik = "Rock crushes Lizard. You Lose!";
		licznikK++;
	}
	else if (wyborGracza == 4 && losowaCyfra == 2) {
		wynik = "Lizard eats paper. You Win!";
		licznikG++;
	}
	else if (wyborGracza == 4 && losowaCyfra == 3) {
		wynik = "Scissors decapitated lizard. You Lose!";
		licznikK++;
	}
	else if (wyborGracza == 4 && losowaCyfra == 5) {
		wynik = "Lizard poisons Spock. You Win!";
		licznikG++;
	}
	else if (wyborGracza == 5 && losowaCyfra == 1) {
		wynik = "Spock vaporizes rock. You Win!";
		licznikG++;
	}
	else if (wyborGracza == 5 && losowaCyfra == 2) {
		wynik = "Paper disproves Spock. You Lose!";
		licznikK++;
	}
	else if (wyborGracza == 5 && losowaCyfra == 3) {
		wynik = "Spock smashes scissors. You Lose!";
		licznikK++;
	}
	else if (wyborGracza == 5 && losowaCyfra == 4) {
		wynik = "Lizard poisons Spock. You Lose!";
		licznikK++;
	}
    return wynik;
}
