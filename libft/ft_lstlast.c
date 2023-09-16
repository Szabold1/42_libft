/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:23:29 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/14 16:35:06 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char *str1 = "hello";
	char *str2 = "world";
	t_list *node1 = ft_lstnew(str1);
	t_list *node2 = ft_lstnew(str2);
	t_list *root = node1;
	node1->next = node2;
	t_list *last_node = ft_lstlast(root);
	printf("last node's content: %s\n", (char *)last_node->content);
	free(node1);
	free(node2);
	return (0);
}
*/