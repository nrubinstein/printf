/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubinst <nrubinst@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:19:04 by nrubinst          #+#    #+#             */
/*   Updated: 2024/10/23 13:02:42 by nrubinst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	length_of_int(int n)
{
	int	length;

	length = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		length += 1;
	while (n)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = length_of_int(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	if (n == -2147483648)
	{
		str[--len] = '8';
		n = 214748364;
	}
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

// int main(void)
// {
//   int k = -2147483648;
//   char *str = ft_itoa(k);
//   printf("%s\n", str);
//   free(str);
// }
// // 1234 as an Integer.
