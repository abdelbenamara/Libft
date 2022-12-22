/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 00:06:11 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/22 21:26:46 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const uint8_t	*s = src;
	uint8_t			*d;

	d = dest;
	if ((!dest && !src) || !n)
		return (dest);
	else if (d < s)
		ft_memcpy(dest, src, n);
	else
	{
		while (--n)
			d[n] = s[n];
		*d = *s;
	}
	return (dest);
}
