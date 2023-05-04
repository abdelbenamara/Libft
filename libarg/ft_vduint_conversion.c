/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vduint_conversion.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:02:49 by abenamar          #+#    #+#             */
/*   Updated: 2023/05/04 20:54:07 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libarg.h"

static size_t	ft_apply_flags(int fd, t_cfwps *specs, unsigned int u, char **a)
{
	char	*tmp;

	if (u > 0 && specs->alternate_form_flag)
	{
		if (specs->specifier == 'x' || specs->specifier == 'X')
		{
			if (specs->specifier == 'x')
			{
				if (specs->zero_flag)
					return (ft_putstr_fd("0x", fd), ft_strlen(*a) + 2);
				tmp = ft_strjoin("0x", *a);
			}
			else
			{
				if (specs->zero_flag)
					return (ft_putstr_fd("0X", fd), ft_strlen(*a) + 2);
				tmp = ft_strjoin("0X", *a);
			}
			if (tmp)
				(free(*a), *a = tmp);
		}
	}
	return (ft_strlen(*a));
}

static int	ft_precise(int fd, t_cfwps *specs, unsigned int u, size_t len)
{
	int	nb;
	int	min;

	if (specs->precision < 0 || (!u && !specs->precision))
		return (0);
	nb = 0;
	min = 0;
	if (((size_t) specs->precision) > len)
		min = specs->precision - len;
	while (nb < min)
		(ft_putchar_fd('0', fd), ++nb);
	return (nb);
}

int	ft_vduint_conversion(int fd, t_cfwps *specs, va_list *ap)
{
	unsigned int	u;
	char			*a;
	size_t			len;
	size_t			width;
	int				nb;

	u = va_arg(*ap, unsigned int);
	if (specs->specifier == 'x')
		a = ft_uitoa_base(u, "0123456789abcdef");
	else if (specs->specifier == 'X')
		a = ft_uitoa_base(u, "0123456789ABCDEF");
	else
		a = ft_uitoa_base(u, "0123456789");
	if (!a)
		return (free(specs), 0);
	len = ft_apply_flags(fd, specs, u, &a) - (!u && !specs->precision);
	width = ft_max_width(len, specs->precision);
	nb = ft_adjust_width(0, fd, specs, width) + ft_precise(fd, specs, u, len);
	if (u > 0 || specs->precision)
		ft_putstr_fd(a, fd);
	nb += ft_adjust_width(1, fd, specs, width);
	return (free(a), free(specs), nb + len);
}