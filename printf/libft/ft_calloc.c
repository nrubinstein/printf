/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubinst <nrubinst@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:33:47 by nrubinst          #+#    #+#             */
/*   Updated: 2024/10/23 16:23:38 by nrubinst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void			*ptr;
	size_t			i;
	size_t			amount;
	unsigned char	*s;

	i = 0;
	amount = nitems * size;
	if (nitems > 0 && size > 0)
	{
		if (size != 0 && nitems != 0 && nitems > (__SIZE_MAX__ / size))
			return (NULL);
	}
	ptr = malloc(amount);
	if (ptr == NULL)
		return (NULL);
	s = (unsigned char *)ptr;
	while (i < amount)
	{
		s[i] = 0;
		i++;
	}
	return (ptr);
}

// int	main(void)
// {
//     size_t nitems = 100005;
//     size_t size = 100000;
//     unsigned char *ptr;
//     size_t i;

//     // Call ft_calloc to allocate and zero-initialize memory
//     ptr = (unsigned char *)ft_calloc(nitems, size);

//     // Check if memory was successfully allocated
//     if (ptr == NULL)
//     {
//         printf("Memory allocation failed.\n");
//         return (1);
//     }

//     // Check if all bytes are zero
//     for (i = 0; i < nitems * size; i++)
//     {
//         if (ptr[i] != 0)
//         {
//             // printf("Test failed: (value: %d).\n", i, ptr[i]);
//             free(ptr);
//             return (1);
//         }
//     }

//     // If all bytes are zero, the test passed
//     printf("Test passed: All memory is zero-initialized.\n");

//     // Free the allocated memory
//     free(ptr);
//     return (0);
// }