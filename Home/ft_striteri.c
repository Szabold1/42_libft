void    ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int i;

	i = 0;
    while (*s)
    {
        f(i, &(*s));
		s++;
		i++;
    }
}

#include <stdio.h>
void change_case(unsigned int i, char *c)
{
	if (i >= 0)
	{
		if (*c >= 'a' && *c <= 'z')
			*c = *c - 32;
		else if (*c >= 'A' && *c <= 'Z')
			*c = *c + 32;
	}
}

int main(void)
{
	char s[] = "HELLO !? world";
	printf("%s\n", s);
	ft_striteri(s, change_case);
	printf("%s\n", s);
	return (0);
}