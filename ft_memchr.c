/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 00:06:43 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/03 00:09:16 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const uint8_t	b = c;
	uint8_t			*r;

	if (!s || !n)
		return (NULL);
	r = (uint8_t *) s;
	while (--n && *r)
	{
		if (*r == b)
			break ;
		++r;
	}
	if (*r == b)
		return (r);
	return (NULL);
}
