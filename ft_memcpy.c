/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:22:31 by abenamar          #+#    #+#             */
/*   Updated: 2022/11/17 02:28:18 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	uint8_t			*d;
	const uint8_t	*s;

	d = dest;
	s = src;
	if (d && s)
		while (n--)
			*d++ = *s++;
	return (dest);
}
