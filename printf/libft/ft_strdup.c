/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubinst <nrubinst@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:26:30 by nrubinst          #+#    #+#             */
/*   Updated: 2024/11/01 17:37:07 by nrubinst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	int		i;
	char	*dup;
	int		len_s;

	i = 0;
	len_s = ft_strlen(str1);
	dup = (char *)ft_calloc(len_s + 1, sizeof(char));
	if (dup == NULL)
		return (NULL);
	while (str1[i] != '\0')
	{
		dup[i] = str1[i];
		i++;
	}
	return (dup);
}
