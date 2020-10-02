#include <stdio.h>
int main() {
	int cnt = 0;
	long germ = 10;

	while (cnt < 7) {
		germ *= 4;
		cnt++;
	}
	printf("After %d hours : %ld\n", cnt, germ);
	return 0;
}
