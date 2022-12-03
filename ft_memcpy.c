/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:22:31 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/03 00:04:27 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const uint8_t	*s = src;
	uint8_t			*d;

	if (!dest || !src || !n)
		return (dest);
	d = dest;
	while (n--)
		*d++ = *s++;
	return (dest);
}
