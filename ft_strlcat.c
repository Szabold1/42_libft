/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:19:12 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/07 14:05:28 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	length_of(char *str)
{
	size_t	i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int		i;
	size_t	dest_len;
	size_t	src_len;
	
	i = 0;
	dest_len = length_of(dest);
	src_len = length_of((char *)src);
	if (size <= dest_len)
		return (size + src_len);
	while ((dest_len + i) < (size - 1) && src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

#include <stdio.h>
//#include <bsd/string.h>
int	main(void)
{
	char dest[] = "hello";
	//char desto[] = "hello";
	char src[] = " world";
	printf("%s + %s = ", dest, src);
	size_t res = ft_strlcat(dest, src, 5);
	//size_t reso = strlcat(desto, src, 2);
	printf("%s (length: %zu)\n", dest, res);
	//printf("%s (length: %zu) | original\n", desto, res);
	return (0);
}

