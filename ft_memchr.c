/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 00:06:43 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/08 20:07:51 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	b = c;
	const unsigned char	*r = s;

	if (!s || !n)
		return (NULL);
	while (--n)
	{
		if (*r == b)
			break ;
		++r;
	}
	if (*r == b)
		return ((unsigned char *) r);
	return (NULL);
}
