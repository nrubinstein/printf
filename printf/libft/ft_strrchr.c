/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubinst <nrubinst@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:16:04 by nrubinst          #+#    #+#             */
/*   Updated: 2024/10/22 19:11:09 by nrubinst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*temp;
	unsigned char	ch;

	ch = (unsigned char)c;
	temp = NULL;
	while (*s)
	{
		if (*s == (char)ch)
		{
			temp = (char *)s;
		}
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return (temp);
}

//  int    main(void)
//  {
//     const char *s = "bibola";
//     int c = '\0';
//     char *result = ft_strrchr(s, c);

//     printf("Pointer to null terminator: %p\n", result);
//     printf("Expected address of null terminator: %p\n", s + 6);
//  }
