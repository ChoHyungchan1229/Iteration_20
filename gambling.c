#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int start = 50;
	int goal = 200;
	int i;
	int wins = 0;
	srand(time(NULL));

	for (i = 0; i < 100; i++) {
		int cash = start;
		while (cash > 0 && cash < goal) {
			if (((double)rand() / RAND_MAX) < 0.5) cash++;
			else cash--;
			//if ((rand() % 2) == 0) cash++;
			//else cash--;
		}
		if (cash == goal) wins++;
	}
	printf("초기 금액 $%d\n", start);
	printf("목표 금액 $%d\n", goal);
	printf("100번 중에 %d번 성공\n", wins);
	return 0;
}
