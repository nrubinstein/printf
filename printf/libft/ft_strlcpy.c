/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubinst <nrubinst@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:53:36 by nrubinst          #+#    #+#             */
/*   Updated: 2024/10/21 17:38:32 by nrubinst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	str_len;

	str_len = ft_strlen(src);
	i = 0;
	if (size == 0)
	{
		return (str_len);
	}
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (str_len);
}

// int main(void)
// {
//   const char *str = "nino";
//   int sizeofstr = 4;
//   char *dest = (char *)malloc(sizeofstr * sizeof(char));
//   if (dest == NULL)
// {
// 	printf("Memory allocation failzzzz\n");
// 	return (1);
// }
//   printf("%ld\n", ft_strlcpy(dest, str, sizeofstr));
//   return (0);
// }