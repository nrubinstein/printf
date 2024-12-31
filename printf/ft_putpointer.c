/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubinst <nrubinst@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:29:41 by nrubinst          #+#    #+#             */
/*   Updated: 2024/11/01 18:52:32 by nrubinst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*convert_to_base(unsigned long ptr, char *hex)
{
	char			*num;
	unsigned long	dummy_ptr;
	int				i;
	unsigned long	store_num;

	store_num = 0;
	dummy_ptr = ptr;
	i = 0;
	num = 0;
	while (ptr != 0)
	{
		ptr = ptr / 16;
		i++;
	}
	num = (char *)ft_calloc(i + 1, sizeof(char));
	if (num == NULL)
		return (NULL);
	while (dummy_ptr != 0)
	{
		store_num = dummy_ptr % 16;
		dummy_ptr /= 16;
		i--;
		num[i] = hex[store_num];
	}
	return (num);
}

void	ft_putpointer(unsigned long ptr, int *count)
{
	char	*hex;
	char	*pointerstring;

	if (ptr == 0)
	{
		ft_putstr_pf("(nil)", count);
		return ;
	}
	hex = ft_strdup("0123456789abcdef");
	*count += write(1, "0x", 2);
	pointerstring = convert_to_base(ptr, hex);
	ft_putstr_pf(pointerstring, count);
	free (pointerstring);
	free (hex);
}
