/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:39:18 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/07 13:31:24 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *str_lg, const char *str_sm, size_t n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str_sm[0] == '\0')
		return ((char *)str_lg);
	while (n > 0)
	{
		while (str_lg[i] == str_sm[j])
		{
			i++;
			j++;
			if (str_sm[j] == '\0')
				return ((char *)str_lg + i - j);
		}
		i = i - j;
		j = 0;
		i++;
		n--;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	char lg[] = "hellolor world";
	char sm[] = "lo";
	char sm2[] = "orl";
	char *res = ft_strnstr(lg, sm, 30);
	char *res2 = ft_strnstr(lg, sm2, 30);
	char *res3 = ft_strnstr(lg, sm, 3);
	char *res4 = ft_strnstr(lg, "", 10);
	printf("lg: %s | sm: %s | result: %s\n", lg, sm, res);
	printf("lg: %s | sm: %s | result: %s\n", lg, sm2, res2);
	printf("lg: %s | sm: %s | result: %s\n", lg, sm, res3);
	printf("lg: %s | sm: %s | result: %s\n", lg, "", res4);
	return (0);
}
*/
