/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 10:59:28 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/10 15:39:03 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	count_substr(char const *str, char c)
{
	int	i;
	int	count;
	int	in_substr;

	i = 0;
	count = 0;
	in_substr = 0;
	while (str[i])
	{
		if (str[i] != c && in_substr == 0)
		{
			count++;
			in_substr = 1;
		}
		else if (str[i] == c)
			in_substr = 0;
		i++;
	}
	return (count);
}

int	handle_substr(char const *str, char c, char **strings)
{
	int		i;
	int		j;
	int		str_index;
	char	temp_arr[10000];

	i = 0;
	str_index = 0;
	while (str[i])
	{
		j = 0;
		while (str[i] != c && str[i])
			temp_arr[j++] = str[i++];
		if (j > 0)
		{
			temp_arr[j] = '\0';
			strings[str_index] = malloc(sizeof(char) * j + 1);
			if (strings[str_index] == NULL)
				return (0);
			ft_strcpy(strings[str_index], temp_arr);
			str_index++;
		}
		if (str[i] == c && str[i])
			i++;
	}
	return (1);
}

char	**ft_split(char const *str, char c)
{
	int		total;
	char	**strings;

	total = count_substr(str, c);
	strings = (char **)malloc(total * sizeof(char *) + 1);
	if (strings == NULL)
		return (NULL);
	if (handle_substr(str, c, strings) == 0)
		return (NULL);
	return (strings);
}
/*
#include <stdio.h>
int main(void)
{
	char *str = " <>   split    this by  space!  <>  ";
	char **res_arr = ft_split(str, ' ');
	printf("str: %s\n", str);
	for (int i = 0; i < 7; i++)
		printf("res_arr[%d] %s\n", i, res_arr[i]);
	for (int i = 0; i < 7; i++)
		free(res_arr[i]);
	free(res_arr);
	return (0);
}
*/
