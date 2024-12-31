/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrubinst <nrubinst@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:02:22 by nrubinst          #+#    #+#             */
/*   Updated: 2024/10/22 11:18:39 by nrubinst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

// int main(void)
// {
// 	char *str;
// 	int fd;
// 	char *str2;
// 	fd = 1;
// 	str = "NoNi";
// 	str2 = "NiNo";
// 	ft_putendl_fd(str, fd);
// 	ft_putendl_fd(str2, fd);
// }
