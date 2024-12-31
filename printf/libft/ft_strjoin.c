/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubinst <nrubinst@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:05:06 by nrubinst          #+#    #+#             */
/*   Updated: 2024/10/23 13:42:43 by nrubinst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		length_s1;
	int		length_s2;
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	length_s1 = ft_strlen(s1);
	length_s2 = ft_strlen(s2);
	str = (char *)malloc((length_s1 + length_s2 + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[j++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		str[j++] = s2[i++];
	}
	str[j] = '\0';
	return (str);
}

// int main(void)
// {
// 	char *str1;
// 	char *str2;

// 	str1 = "Hallo";
// 	str2 = "doei";
// 	printf("%s\n", ft_strjoin(str1, str2));
// }
