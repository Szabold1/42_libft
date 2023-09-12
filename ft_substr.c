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

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	int		i;
	char	*temp;

	i = 0;
	temp = (char *)malloc(sizeof(char) * len + 1);
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
	char *substr = ft_substr(str, 6, 3);
	printf("str: %s\nsubstr: %s\n", str, substr);
	free(substr);
	return (0);
}
*/
