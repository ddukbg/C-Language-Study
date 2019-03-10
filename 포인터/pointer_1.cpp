#pragma warning(disable:4996)
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include <stdbool.h>

typedef struct student {
	char name[7];
	int kor;
	int eng;
	int math;
	double avg;
}student;
int main() {
	struct student *AA=NULL;

	int n;
	double avg = 0;
	scanf("%d", &n);
	AA = (student *)malloc(sizeof(student)*n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s %d %d %d", &AA[i].name, &AA[i].kor, &AA[i].eng, &AA[i].math);
		AA[i].avg = (AA[i].kor + AA[i].eng + AA[i].math) / 3.0;
		printf("%s %.1f", AA[i].name, AA[i].avg);
		if (AA[i].kor >= 90 || AA[i].eng >= 90 || AA[i].math >= 90) {
			printf(" GREAT");
		}
		if (AA[i].kor <70 || AA[i].eng <70 || AA[i].math <70) {
			printf(" BAD");
		}
		printf("\n");
	}


	return 0;
}