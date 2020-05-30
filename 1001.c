##include <stdio.h>
int main(void)
{
	long long a, sum;
	while(scanf("%lld", &a) != EOF)
	{
		printf("%lld\n\n", (long long)((a * (a + 1)) / 2));
	}
	return 0;
}
