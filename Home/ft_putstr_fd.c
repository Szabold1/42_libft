#include <unistd.h>
#include <stddef.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

int main(void)
{
	char *s = "hello world";
	ft_putstr_fd(s, 1);
	return (0);
}