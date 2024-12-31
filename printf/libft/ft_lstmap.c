/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubinst <nrubinst@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:23:23 by nrubinst          #+#    #+#             */
/*   Updated: 2024/12/18 16:41:38 by nrubinst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
	void (*del)(void *))
{
	t_list	*new_lst;
	t_list	**head_list;
	t_list	*new_node;
	void	*new_content;

	new_lst = NULL;
	head_list = &new_lst;
	while (lst != NULL)
	{
		new_content = f(lst->content);
		if (!new_content)
		{
			del(new_content);
			return (NULL);
		}
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_node);
			ft_lstclear(head_list, free);
		}
		ft_lstadd_back(head_list, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
