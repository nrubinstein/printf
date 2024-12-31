/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubinst <nrubinst@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:51:38 by nrubinst          #+#    #+#             */
/*   Updated: 2024/11/12 13:53:38 by nrubinst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del(void *node)
// {
// 	// char *str;

// 	// str = (char *)node;
// 	// while (*str != '\0')
// 	// {
// 	// 	*str = '\0';
// 	// 	str++;
// 	// }
// 	free(node);
// }
// takes the location of the node to delete
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

// int main ()
// {
// 	// crating a list
// 	// adding the list
// 	char list1[6] = "hoepel";
// 	char *string1;
// 	string1 = (char *)malloc(6 + 1 * (sizeof(char)));
// t_list *node1 = ft_lstnew((void *)string1);
// if (node1 != NULL)
// 	printf("succeded in makeing node1\n");
// ft_lstdelone(node1, del);
// printf("free'd my Gstring.\n");
// }
