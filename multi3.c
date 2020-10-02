#include <stdio.h>
int main() {
	int a = 1;

	printf("3의 배수를 모두 출력합니다.\n");
	while (a <= 100) {
		if (a % 3 == 0) printf("%d  ", a);
		a++;
	}
	printf("\n");
	return 0;
}
