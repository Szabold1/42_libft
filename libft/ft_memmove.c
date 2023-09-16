/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:10:56 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/07 12:12:47 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*c_dest;
	const char	*c_src;

	c_dest = (char *)dest;
	c_src = (const char *)src;
	while (n > 1)
	{
		c_dest[n - 1] = c_src[n - 1];
		n--;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    double src_arr[5] = {1.8, 4.73, 2.8, 4.4, 9.9};
    double src_arr2[5] = {1.8, 4.73, 2.8, 4.4, 9.9};
    ft_memmove(src_arr + 2, src_arr, sizeof(double) * 3);
    memmove(src_arr2 + 2, src_arr2, sizeof(double) * 3);
    for (int i = 0; i < 5; i++)
    {
        printf("src: %f\n", src_arr[i]);
        printf("src: %f | original\n", src_arr[i]);
    }
    return (0);
}
*/
