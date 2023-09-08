/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:19:48 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/08 15:15:32 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *str)
{
	int		i;
	int		size;
	char	*cpy;

	i = 0;
	size = ft_strlen(str);
	cpy = (char *)malloc(sizeof(char) * size + 1);
	while (str[i])
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char *str1 = "hello world";
	char *cpy1 = strdup(str1);
	printf("   --- Original strdup ---\n");
	printf("str1: %s    memory: %p\n", str1, (void *)&str1);
    printf("cpy1: %s    memory: %p\n", cpy1, (void *)&cpy1);

	char *cpy2 = ft_strdup(str1);
	printf("   --- My ft_strdup ---\n");
	printf("str1: %s    memory: %p\n", str1, (void *)&str1);
	printf("cpy2: %s    memory: %p\n", cpy2, (void *)&cpy2);
	free(cpy1);
	free(cpy2);
	return (0);
}
*/
