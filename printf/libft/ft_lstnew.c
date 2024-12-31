/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubinst <nrubinst@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:47:48 by nrubinst          #+#    #+#             */
/*   Updated: 2024/11/08 16:30:21 by nrubinst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (void *)malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

// int main()
// {
// 	int t = 5;
// 	t_list *node = ft_lstnew((void *)&t);
// 	if (node != NULL)
// 		printf("succes\n");
// 	printf("check if content = 5 --> %i\n", *((int *)node->content));
// 	free(node);
// }
