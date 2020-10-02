#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int ans, guess;
	int tries = 0;
	srand(time(NULL));
	ans = rand() % 100;

	do {
		printf("Guess the number : ");
		scanf("%d", &guess);
		tries++;
		if (guess > ans)
			printf("It's too BIG\n");
		else if (guess < ans)
			printf("It's too SMALL\n");
	} while (guess != ans);
	printf("CORRECT! Tries = %d\n", tries);
	
	return 0;
}
