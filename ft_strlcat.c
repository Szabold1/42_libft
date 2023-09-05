/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:19:12 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/05 12:28:48 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	str_length(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = str_length(dest);
	j = 0;
	if (size <= i)
		return (size + str_length(src));
	while (((i + j) < (size - 1)) && (src[j]))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + str_length(src));
}
/*
#include <stdio.h>
int	main(void)
{
	char dest[] = "I am doing";
	char src[] = " some testing";
	printf("Before: %s | %s\n", dest, src);
	unsigned int result = ft_strlcat(dest, src, 15);
	printf("After: %s (length: %d)\n", dest, result);
	
	return (0);
}
*/
