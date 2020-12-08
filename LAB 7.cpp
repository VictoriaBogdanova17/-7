#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	char* str;
	int n, i, in1, in2, kl, ik1, i1, i2;
	if (!(str = (char*)calloc(1, sizeof(char))))
	{
		printf("\nНедостаточно свободной памяти \n");
		return 0;
	}
	fflush(stdin);
	fgets(str, 255, stdin);
	i = 0;
	kl = 0;
	ik1 = in1 = 0;
	while (*(str + i))
	{
		while (*(str + i) == ' ')i++;
		i1 = i;
		while (*(str + i) != ' ' && *(str + i)) i++;
		i2 = i - 1;
		if (ik1 == 0)
		{
			in1 = i1;
			ik1 = i2;
			kl = ik1 - in1 + 1;
		}
		if ((i2 - i1 + 1) < kl)
			kl = i2 - i1 + 1;
	}
	printf("%d", kl);
}