#include <stdio.h>
#define LEN 20

struct names
{
	char first[LEN];
	char last[LEN];
};

struct guy
{
	struct names handle;
	char favfood[LEN];
	char job[LEN];
	float incomes;
};

void readline();

int main14_5(void)
{
	struct guy fellow[2] = {
		{
			{"Even", "Villard"},
			"samlmon",
			"personality coach",
			68000.00
		},
		{
			{"Rodney", "Swillbelly"},
			"tripe",
			"tabloid editor",
			43232.00
		}
	};

	struct guy *him;

	printf("address #1: %p     #2:%p\n", &fellow[0], &fellow[1]);
	him = &fellow[0];
	printf("pointer #1: %p   #2: %p\n", him, him + 1);
	printf("him->income is $%.2f: (*him).income is $%.2f\n", him->incomes, (*him).incomes);
	him++;
	printf("him->favfood is %s: him->handle.last is %s\n", him->favfood, him->handle.last);


	
	return 0;
	return 0;
}

void readline()
{
	char * aa[80];
	scanf("%s", aa);
}
