#include <stdio.h>

void main()
{
	int score[11][5] = { {1, 80, 70, 90}, {2, 70, 60, 50}, {3, 100, 100, 100}, {4, 30, 40, 50}, {5, 60, 60, 60},
		{6, 80, 50, 30}, {7, 70, 70, 70}, {8, 100, 70, 90},{9, 70, 60, 50}, {10, 10, 10, 10} };

	printf("�г�\t����\t����\t����\t����\t���\n");
	printf("*********************************************\n");

	for (int i = 0; i < 10; i++)
	{
		int total = score[i][1] + score[i][2] + score[i][3];
		int average = total / 3;

		printf("%d\t %d\t %d\t %d\t %d\t %d\t \n", score[i][0], score[i][1], score[i][2], score[i][3], total, average);

	}
}