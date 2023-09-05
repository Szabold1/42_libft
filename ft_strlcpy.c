/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:03:58 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/05 12:12:35 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	null_terminated(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (str[i] == '\0')
		return (1);
	return (0);
}

int	str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (null_terminated(src))
	{
		if (size > 0)
		{
			while (i < size - 1)
			{
				dest[i] = src[i];
				i++;
			}
			dest[i] = '\0';
		}
	}
	return (str_length(src));
}
/*
#include <stdio.h>
int	main(void)
{
	char dest[] = "abc";
	char src[] = "testing";
	printf("dest before copying: %s\n", dest);
	unsigned int result = ft_strlcpy(dest, src, 5);
	printf("dest after copying 5-1 characters: %s\n", dest);
	printf("length of src(%s): %d\n", src, result);

	return (0);
}
*/
