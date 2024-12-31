/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubinst <nrubinst@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 11:14:26 by nrubinst          #+#    #+#             */
/*   Updated: 2024/10/15 15:27:13 by nrubinst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*checkifspace(const char *str)
{
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r')
	{
		str++;
	}
	return (str);
}

const char	*checkifneg(const char *str, int *neg)
{
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			*neg *= -1;
		}
		str++;
	}
	return (str);
}

int	ft_atoi(const char *nptr)
{
	int	neg;
	int	result;

	neg = 1;
	result = 0;
	nptr = checkifspace(nptr);
	nptr = checkifneg(nptr, &neg);
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (result * neg);
}

// int	main(void)
// {
// 	char *string = "       +124abnc125gbm";

// 	printf("Result my atoi: %d\n", ft_atoi(string));
// 	printf("Result standard atoi: %d\n", atoi(string));
// }
