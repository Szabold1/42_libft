/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:33:50 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/08 15:51:56 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

int	handle_edge(char const *str, unsigned int start, size_t len)
{
	size_t	str_len;

	str_len = ft_strlen(str);
	if (str == NULL)
		return (1);
	if (start >= str_len)
		return (1);
	if (len > str_len - start)
		len = str_len - start;
	return (0);
}

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	int				i;
	char			*temp;

	i = 0;
	if (handle_edge(str, start, len))
	{
		temp = (char *)malloc(sizeof(char));
		if (temp == NULL)
			return (NULL);
		temp[0] = '\0';
		return (temp);
	}
	temp = (char *)malloc(sizeof(char) * (len + 1));
	if (temp == NULL)
		return (NULL);
	while (i < (int)len && str[i])
	{
		temp[i] = str[i + start];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
/*
#include <stdio.h>
int main(void)
{
	char *str = "hello world";
	char *substr = ft_substr(str, 4, 3);
	printf("str: %s\nsubstr: %s\n", str, substr);
	free(substr);
	return (0);
}
*/