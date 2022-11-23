/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 00:06:43 by abenamar          #+#    #+#             */
/*   Updated: 2022/11/23 00:29:30 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	uint8_t	*r;
	uint8_t	b;

	if (!s || !n)
		return (NULL);
	r = (uint8_t *) s;
	b = c;
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
