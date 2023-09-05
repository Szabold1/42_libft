/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:45:03 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/05 11:47:50 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}
/*
#include <stdio.h>
int	main(void)
{
	char test[] = "This is 11!";
	int result = ft_strlen(test);
	printf("%s (number of characters: %d)\n", test, result);
	return (0);
}
*/
