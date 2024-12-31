/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubinst <nrubinst@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:21:17 by nrubinst          #+#    #+#             */
/*   Updated: 2024/10/24 14:19:23 by nrubinst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	strlength(const char *string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		i++;
	}
	return (i);
}

char	*comp_littletobig(const char *big, const char *little)
{
	size_t	j;

	j = 0;
	while (little[j] != '\0')
	{
		if (little[j] != big[j])
			return (NULL);
		j++;
	}
	return ((char *)big);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	length_big;
	size_t	lenght_little;
	char	*result;

	length_big = strlength(big);
	lenght_little = strlength(little);
	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (i + lenght_little < len && i < length_big)
	{
		j = 0;
		if (big[i] == little[j])
		{
			result = comp_littletobig(big + i, little);
			if (result != NULL)
				return (result);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char *big = "een aap eet!";
// 	const char *little = "aap";
// 	size_t len;
// 	len = 5;
// 	printf("%s\n", ft_strnstr(big, little, len));
// }
