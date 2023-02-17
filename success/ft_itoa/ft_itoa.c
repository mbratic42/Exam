#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int a)
{
	int	second;
	int	counter;
	int	min;
	char	*num;
	int 	hoch = 0;
	
	counter = 0;
	if (a != 0)
	{
		if (a < 0)
		{
			hoch = 1;
			counter++;
			a *= -1;
		}
		second = a;
		while (second != 0)
		{
			second /= 10;
			counter++;
		}
		num = (char *)malloc(sizeof(char) * (counter + 1));
		if (hoch == 1)
			num[0] = '-';
		num[counter] = 0;
		while (a != 0)
		{
			counter--;
			num[counter] = a % 10 + 48;
			a /= 10;
		}
	}
	else
		return ("0");
	return (num);
}
