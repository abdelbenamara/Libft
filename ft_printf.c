/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 00:33:35 by abenamar          #+#    #+#             */
/*   Updated: 2023/05/04 18:49:28 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *format, ...)
{
	int		nb;
	va_list	ap;

	va_start(ap, format);
	nb = ft_vprintf(format, ap);
	va_end(ap);
	return (nb);
}
