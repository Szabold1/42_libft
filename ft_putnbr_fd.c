/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:50:31 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/12 09:52:38 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

static int	count_digits(int n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	fill_str(char *str, int n, int digits_len)
{
	int	i;

	i = 1;
	str[digits_len] = '\0';
	while (n > 0)
	{
		str[digits_len - i] = (n % 10) + 48;
		n /= 10;
		i++;
	}
}

static char	*handle_edge(int n)
{
	char	*str;

	if (n == -2147483648)
	{
		str = (char *)malloc(sizeof(char) * 12);
		if (str == NULL)
			return (NULL);
		str[0] = '-';
		str[1] = '2';
		n = 147483648;
		fill_str(str, n, 11);
	}
	else
	{
		str = (char *)malloc(sizeof(char) * 2);
		if (str == NULL)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
	}
	return (str);
}

static char	*ft_itoa(int n)
{
	int		sign;
	int		digits_len;
	char	*str;

	sign = 1;
	digits_len = 0;
	if (n == -2147483648 || n == 0)
		return (handle_edge(n));
	else if (n < 0)
	{
		n *= -1;
		sign = -1;
		digits_len++;
	}
	digits_len += count_digits(n);
	str = (char *)malloc(sizeof(char) * digits_len + 1);
	if (str == NULL)
		return (NULL);
	fill_str(str, n, digits_len);
	if (sign == -1)
		str[0] = '-';
	return (str);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;

	str = ft_itoa(n);
	while (*str)
	{
		write(fd, str, 1);
		str++;
	}
}
/*
#include <stdio.h>
int main(void)
{
    int n = -2147483648;
    // int n = 0;
    // int n = 2147483647;
    ft_putnbr_fd(n, 1);
    return (0);
}
*/
