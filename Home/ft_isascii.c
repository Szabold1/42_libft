int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

#include <stdio.h>
int	main(void)
{
	int c1 = '5';
	int c2 = 't';
	int c3 = 'E';
	int c4 = '!';
	int res1 = ft_isalnum(c1);
	int res2 = ft_isalnum(c2);
	int res3 = ft_isalnum(c3);
	int res4 = ft_isalnum(c4);
	printf("%d | %d\n", c1, res1);
	printf("%d | %d\n", c2, res2);
	printf("%d | %d\n", c3, res3);
	printf("%d | %d\n", c4, res4);
}