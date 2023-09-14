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
#include "libft.h"

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
