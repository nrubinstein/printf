/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubinst <nrubinst@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:26:13 by nrubinst          #+#    #+#             */
/*   Updated: 2024/10/23 13:43:00 by nrubinst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	dest_len = strlen(dst);
	src_len = strlen(src);
	i = 0;
	j = dest_len;
	if (size <= dest_len)
	{
		return (size + src_len);
	}
	while (src[i] && j < size - 1)
	{
		dst[j++] = src[i++];
	}
	dst[j] = '\0';
	return (dest_len + src_len);
}

// int main(void)
// {
//     char src[] = " world!";
//     char dst[20] = "Hello";
//     size_t size = sizeof(dst);
//     size_t result = ft_strlcat(dst, src, size);
//     printf("Concatenated string: %s\n", dst);
//     printf("Total length : %zu\n", result);
//     return 0;
// }
