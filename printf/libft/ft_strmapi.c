/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubinst <nrubinst@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:13:19 by nrubinst          #+#    #+#             */
/*   Updated: 2024/10/21 17:49:21 by nrubinst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		str_len;
	int		i;
	char	*new_str;

	i = 0;
	str_len = ft_strlen(s);
	new_str = (char *)malloc((str_len + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[str_len] = '\0';
	return (new_str);
}

// char toupper(unsigned int i, char c)
// {
//     (void)i;  
//     if (c >= 'a' && c <= 'z')
//         return (c - 32); 
// 	return (c);
// }

// int main(void)
// {
//     char const *str = "hello, world!";
//     char *new_str;
//     new_str = ft_strmapi(str, toupper);
//     if (new_str != NULL)
//     {
//         printf("Original string: %s\n", str);
//         printf("Modified string: %s\n", new_str);
//         free(new_str);
//     }
//     else
//     {
//         printf("Memory allocation failz\n");
//     }

//     return (0);
// }
