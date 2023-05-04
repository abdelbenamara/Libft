/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 01:01:22 by abenamar          #+#    #+#             */
/*   Updated: 2023/05/04 21:07:18 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_dprintf(int fd, const char *format, ...)
{
	int		nb;
	va_list	ap;

	va_start(ap, format);
	nb = ft_vdprintf(fd, format, ap);
	va_end(ap);
	return (nb);
}
