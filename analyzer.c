#include<stdio.h>

int main()
{
	char fname[100] = "time.log";
	FILE* fp;
	int min, sec, time;
	double total = 0;	// 평균을 세기 위한
	int cnt = 0;
	int max_min, max_sec, min_min, min_sec;

	fp = fopen(fname, "r");

	if (fp == NULL) {
		printf("Failed to open file\n");
		return 0;
	}

	while (!feof(fp)) {
		fscanf(fp, "(%d:%d)\n", &min, &sec);
		printf("min = %d, sec = %d\n", min, sec);

		if (cnt == 0) {				// 초기값 설정 - 초 단위로 변환하여 계산
			max_sec = min * 60 + sec;
			min_sec = min * 60 + sec;
		}
		time = min * 60 + sec;		// 초 단위로 환산

		cnt++;						// 총 개수 세기
		total += time;				// 총 시간

		if (time > max_sec)			// 최대값 찾기
			max_sec = time;
		if (time < min_sec)			// 최소값 찾기
			min_sec = time;
	}
	total = total / cnt;

	printf("Max : %d min %d sec\n", (max_sec / 60), (max_sec % 60));
	printf("Min : %d min %d sec\n", (min_sec / 60), (min_sec % 60));
	printf("Average = %d min %d sec\n", ((int)total / 60), ((int)total % 60));
	return 0;
}
