/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubinst <nrubinst@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:57:33 by nrubinst          #+#    #+#             */
/*   Updated: 2024/12/31 12:56:19 by nrubinst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_find_format(va_list args, char format, int *count)
{
	if (format == 'c')
		ft_putchar_pf((char)va_arg(args, int), count);
	else if (format == 's')
		ft_putstr_pf(va_arg(args, char *), count);
	else if (format == 'i' || format == 'd')
		ft_putnbr_pf(va_arg(args, int), count);
	else if (format == 'p')
		ft_putpointer(va_arg(args, unsigned long), count);
	else if (format == 'u')
		ft_putunsigned_pf(va_arg(args, unsigned int), count);
	else if (format == 'x' || format == 'X')
		ft_convert_num_to_hex(va_arg(args, unsigned int), format, count);
	else if (format == '%')
		ft_putsign(count);
}

int	ft_printf(const char *str, ...)
{
	int		count;
	int		i;
	va_list	args;

	i = 0;
	count = 0;
	if (str[0] == '\0')
		return (write(1, "whoops", 6));
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			ft_find_format(args, str[i], &count);
		}
		else
			ft_putchar_pf(str[i], &count);
		i++;
	}
	va_end(args);
	return (count);
}
