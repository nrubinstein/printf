/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubinst <nrubinst@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:51:23 by nrubinst          #+#    #+#             */
/*   Updated: 2024/10/22 15:12:19 by nrubinst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;
	size_t	i;

	i = 0;
	s_len = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start >= s_len)
	{
		return (ft_strdup(""));
	}
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	while (len > i)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// int main(void)
// {
// 	char *string = "trim";
// 	char *result1;
// 	char *result2;
// 	result1 = ft_substr(string, 0, 0);
// 	printf("test 1: --> 'i' = %s\n", result1);
// 	free(result1);
// 	result2 = ft_substr(string, 5, 30);
// 	printf("test 2: --> 'im' = %s\n", result2);
// 	free(result2);
// }