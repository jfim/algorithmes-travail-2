#include "travail2.h"

#include <iostream>

namespace {
	int score = 0;
}

void evalueQuestion(int numeroQuestion, int scoreQuestion, bool reponseCorrecte) {
	char buffer[64];
	sprintf(buffer, "Question %02d", numeroQuestion);

	if (reponseCorrecte) {
		std::cout << buffer << ": correct, " << scoreQuestion << " point(s)" << std::endl;
		score += scoreQuestion;
	} else {
		std::cout << buffer << ": incorrect" << std::endl;
	}
}

int main(int argc, char** argv) {
	evalueQuestion(1, 1,
		fibonacci(0) == 0 &&
		fibonacci(1) == 1 &&
		fibonacci(2) == 1 &&
		fibonacci(3) == 2 &&
		fibonacci(4) == 3 &&
		fibonacci(5) == 5 &&
		fibonacci(6) == 8 &&
		fibonacci(7) == 13 &&
		fibonacci(8) == 21 &&
		fibonacci(9) == 34 &&
		fibonacci(10) == 55 &&
		fibonacci(11) == 89 &&
		fibonacci(12) == 144 &&
		fibonacci(13) == 233 &&
		fibonacci(14) == 377
	);

	evalueQuestion(2, 1,
		pgcd(10, 5) == 5 &&
		pgcd(64, 42) == 2 &&
		pgcd(858, 96) == 6 &&
		pgcd(144, 12) == 12 &&
		pgcd(86832, 9376) == 16
	);

	int tableauMaximum1[] = {0, 1, 2, 3, 4, 5, 6};
	int tableauMaximum2[] = {6, 10, 13, 8, 10, 18, 3, 16, 17, 11, 7};
	int tableauMaximum3[] = {14, 0, 12, 10, 16, 13, 9, 4, 1, 11, 4};
	int tableauMaximum4[] = {5, 10, 15, 5, 4, 0, 0, 15, 6, 6, 1};

	evalueQuestion(3, 1,
		maximum(tableauMaximum1, 7, -1) == 6 &&
		maximum(tableauMaximum2, 11, -1) == 18 &&
		maximum(tableauMaximum3, 11, -1) == 16 &&
		maximum(tableauMaximum4, 11, -1) == 15
	);

	int tableauContient1[] = {0, 0, 0, 0, 3, 5, 7, 8, 10, 10, 12, 14, 16, 17};
	int tableauContient2[] = {0, 1, 1, 3, 11, 12, 13, 14, 16, 17, 18, 18, 19, 19, 19};
	int tableauContient3[] = {0, 0, 3, 5, 6, 7, 10, 10, 11, 12, 12, 15, 17, 18, 18, 18};
	int tableauContient4[] = {0, 2, 3, 3, 4, 6, 7, 8, 8, 9, 9, 9, 11, 12, 12, 18, 18};
	int tableauContient5[] = {2, 3, 4, 6, 7, 7, 7, 7, 8, 11, 12, 12, 13, 15, 15, 17, 17, 18};
	int tableauContient6[] = {2, 9, 4, 6, 7, 7, 7, 7, 8, 11, 12, 12, 13, 15, 15, 17, 17, 18};

	evalueQuestion(4, 2,
		indexDe(tableauContient1, 14, 2) == -1 &&
		indexDe(tableauContient2, 15, 14) == 7 &&
		indexDe(tableauContient2, 15, 3) == 3 &&
		indexDe(tableauContient3, 16, 15) == 11 &&
		indexDe(tableauContient4, 17, 0) == 0 &&
		indexDe(tableauContient5, 18, 18) == 17 &&
		indexDe(tableauContient6, 18, 9) == -1
	);

	std::cout << "Score " << score << "/5" << std::endl;
}
