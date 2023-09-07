/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:24:32 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/07 12:35:35 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while (n > 0)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
		n--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[] = "hello";
    char str2[] = "hello world";
    char str3[] = "world";
    int res1o = strncmp(str1, str2, 5);
    int res1 = ft_strncmp(str1, str2, 5);
    int res2o = strncmp(str1, str2, 10);
    int res2 = ft_strncmp(str1, str2, 10);
    int res3o = strncmp(str1, str3, 5);
    int res3 = ft_strncmp(str1, str3, 5);
    int res4o = strncmp(str3, str1, 5);
    int res4 = ft_strncmp(str3, str1, 5);
    printf("%d | original\n", res1o);
    printf("%d\n", res1);
    printf("%d | original\n", res2o);
    printf("%d\n", res2);
    printf("%d | original\n", res3o);
    printf("%d\n", res3);
    printf("%d | original\n", res4o);
    printf("%d\n", res4);
    return (0);
}
*/
