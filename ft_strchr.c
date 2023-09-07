/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:16:28 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/07 12:17:43 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (c == *str)
			return ((char *)str);
		str++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
    char str[] = "hello world";
    char *res1 = ft_strchr(str, 'l');
    char *res2 = ft_strchr(str, 'x');
    printf("str: %s\n", str);
    printf("first l: %s\n", res1);
    printf("first x: %s\n", res2);
    return (0);
}
*/
