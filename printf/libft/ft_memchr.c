/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubinst <nrubinst@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:58:17 by nrubinst          #+#    #+#             */
/*   Updated: 2024/10/21 19:29:22 by nrubinst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*ptr;

	ptr = (const char *)s;
	while (n--)
	{
		if (*ptr == (char)c)
		{
			return ((void *)ptr);
		}
		ptr++;
	}
	return (NULL);
}
