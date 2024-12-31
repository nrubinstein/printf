/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubinst <nrubinst@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:48:09 by nrubinst          #+#    #+#             */
/*   Updated: 2024/10/23 16:26:55 by nrubinst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	ch;

	ch = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)ch)
			return ((char *)(s + i));
		i++;
	}
	if (ch == '\0')
		return ((char *)(s + i));
	return (NULL);
}

//  int    main(void)
//  {
//     const char *s = "bibola";
//     int c = '\0';
//     char *result = ft_strchr(s, c);
//     printf("%s\n", result);
//	   printf("%p\n", result);
//     printf("Expected address of null terminator: %p\n", s + 6)
//  }