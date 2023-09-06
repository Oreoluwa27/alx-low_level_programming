#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimun amount of change
 * @argc: count
 * @argv: vector
 *
 * Return: 1 for error 0 for success
 */
int proto(int index, int value)
{
	int arr[] = {25, 10, 5, 2, 1};
	int i;

	for (i = index; i < 5; i++)
        {
                if (arr[i] > value)
                {
                        continue;
		}
                break;
        }
	return (i);
}

int main(int argc, char *argv[])
{
	int arr[] = {25, 10, 5, 2, 1};
	int amount, tmp, ans, remainder = 10;
	int index = 0;

	amount = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (amount < 1)
	{
		printf("0\n");
		return (0);
	}

	index = proto(index, amount);

	ans = amount / arr[index];
	remainder = amount % arr[index];

	if (remainder == 0)
	{
		printf("%d\n", ans);
	}

	else
	{
		while(remainder != 0)
		{
			index = proto(index, remainder);
			tmp  = remainder / arr[index];
			ans = ans + tmp;
			remainder = remainder % arr[index];
		}
		printf("%d\n", ans);
	}

	return (0);
}
