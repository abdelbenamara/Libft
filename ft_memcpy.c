/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:22:31 by abenamar          #+#    #+#             */
/*   Updated: 2022/11/14 00:46:36 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*p;

	p = dest;
	if (dest != NULL && src != NULL)
		while (n-- > 0)
			*(uint8_t *)dest++ = *(uint8_t *)src++;
	return (p);
}
