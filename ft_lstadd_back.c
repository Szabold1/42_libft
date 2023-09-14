/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:51:42 by bszabo            #+#    #+#             */
/*   Updated: 2023/09/14 17:49:24 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while ((*lst)->next)
		*lst = (*lst)->next;
	(*lst)->next = new;
}

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char *str1 = "hello";
	char *str2 = "world";
	char *str_new = "!!!";
	t_list *node1 = ft_lstnew(str1);
	t_list *node2 = ft_lstnew(str2);
	t_list *new_node = ft_lstnew(str_new);
	t_list *root = node1;
	node1->next = node2;
	t_list *ptr = root;
	t_list *ptr_link = root->next;

	while (ptr)
	{
		printf("%s | ", (char *)ptr->content);
		ptr = ptr->next;
	}
	printf("\n");
	ft_lstadd_back(&ptr_link, new_node);
	ptr = root;
	while (ptr)
    {
        printf("%s | ", (char *)ptr->content);
        ptr = ptr->next;
    }

	free(node1);
	free(node2);
	free(new_node);
	return (0);
}
