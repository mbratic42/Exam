#include <unistd.h>

int ft_atoi(char *a)
{
	int sum;
	int c;
	int neg;
	
	sum = 0;
	c = 0;
	neg = 0;
	while ((a[c] >= 7 && a[c] <= 13) || a[c] == 32)
		c++;
	if (a[c] == '-' || a[c] == '+')
		if (a[c++] == '-')
			neg = 1;
	while (a[c] >= '0' && a[c] <= '9')
		sum = sum * 10 + a[c++] - 48;
	return (sum);
}

void	puthex(unsigned int a)
{
	char c;
	
	if (a > 15)
	{
		puthex(a / 16);
		puthex(a % 16);
	}
	else
	{
		if (a == 15)
			write(1, "f", 1);
		else if (a == 14)
			write(1, "e", 1);
		else if (a == 13)
			write(1, "d", 1);
		else if (a == 12)
			write(1, "c", 1);
		else if (a == 11)
			write(1, "b", 1);
		else if (a == 10)
			write(1, "a", 1);
		else
		{
			c = a + '0';
			write(1, &c, 1);
		}
	}
}

void	abc(char *c)
{
	unsigned int c2 = ft_atoi(c);
	puthex(c2);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		abc(argv[1]);
	write(1, "\n", 1);
}
