/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubinst <nrubinst@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:42:24 by nrubinst          #+#    #+#             */
/*   Updated: 2024/10/22 14:29:21 by nrubinst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checkinset(int c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	check_start(char const *string, char const *set)
{
	int	start;

	start = 0;
	while (string[start] && checkinset(string[start], set) != -1)
	{
		start++;
	}
	return (start);
}

int	check_end(char const *string, char const *set)
{
	int	end;

	end = ft_strlen(string) - 1;
	while (end >= 0 && checkinset(string[end], set) != -1)
	{
		end--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		start;
	int		end;
	int		i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	start = check_start(s1, set);
	end = check_end(s1, set);
	if (start > end)
	{
		trimmed = ft_strdup("");
		return (trimmed);
	}
	trimmed = (char *)malloc((end - start + 2) * sizeof(char));
	if (trimmed == NULL)
		return (NULL);
	while (start <= end)
	{
		trimmed[i++] = s1[start++];
	}
	trimmed[i] = '\0';
	return (trimmed);
}

// int	main(void)
// {
// 	char const *string;
// 	char const *set;
// 	set = "";
// 	string = "+!!aap!+!";
// 	printf("%s\n", ft_strtrim(string, set));
// }
