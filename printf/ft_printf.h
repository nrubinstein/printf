/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubinst <nrubinst@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:23:20 by nrubinst          #+#    #+#             */
/*   Updated: 2024/12/31 13:06:35 by nrubinst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "./libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdint.h>

int		ft_printf(const char *str, ...);
void	ft_putchar_pf(int c, int *count);
void	ft_putnbr_pf(int nbr, int *count);
void	ft_putstr_pf(const char *string, int *count);
void	ft_putpointer(unsigned long ptr, int *count);
void	ft_convert_num_to_hex(unsigned int num, char format, int *count);
void	ft_putunsigned_pf(unsigned int num, int *count);
void	ft_putsign(int *count);

#endif
