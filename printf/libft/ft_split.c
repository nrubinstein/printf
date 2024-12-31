/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubinst <nrubinst@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:13:55 by nrubinst          #+#    #+#             */
/*   Updated: 2024/10/29 10:38:33 by nrubinst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countsubstr(const char *s, char c)
{
	int	i;
	int	n_word;
	int	in_word;

	i = 0;
	in_word = 0;
	n_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			n_word++;
		}
		else if (s[i] == c)
		{
			in_word = 0;
		}
		i++;
	}
	return (n_word);
}

void	findsubstr(char const *string, char c, int *i, int *start)
{
	while (string[*i] == c && string[*i] != '\0')
	{
		(*i)++;
	}
	*start = *i;
	while (string[*i] != c && string[*i] != '\0' )
	{
		(*i)++;
	}
}

void	*freearray(char **ptrar)
{
	int	i;

	i = 0;
	while (ptrar[i] != NULL)
	{
		free(ptrar[i]);
		i++;
	}
	free(ptrar);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char		**ptrar;
	int			i;
	int			positie;
	int			start;

	start = 0;
	i = 0;
	positie = 0;
	ptrar = (char **)malloc((countsubstr(s, c) + 1) * sizeof(char *));
	if (ptrar == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		findsubstr(s, c, &i, &start);
		if (start < i)
		{
			ptrar[positie] = ft_substr(s, start, i - start);
			if (ptrar[positie] == NULL)
				return (freearray(ptrar));
			positie++;
		}
	}
	ptrar[positie] = NULL;
	return (ptrar);
}

// int	main(void)
// {
// 	char *string = "   /Hallo/ik//";
// 	char c = '/';
// 	char **result;
// 	int i;
// 	i = 0;	
// 	// Call your ft_split function
//     result = ft_split(string, c);
//     // Check if result is NULL (to handle errors)
//     if (result == NULL)
//     {
//         printf("ft_split returned NULL\n");
//         return 1;
//     }
//     // Print each substring in the result array
//     while (result[i] != NULL)
//     {
//         printf("Substring %d: %s\n", i, result[i]);
//         i++;
//     }
//     // Free the allocated memory for each substring (if needed)
//     i = 0;
//     while (result[i] != NULL)
//     {
//         free(result[i]);  // Free each substring
//         i++;
//     }
//     free(result);  // Free the array of pointers
//     return 0;
// }
