/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 01:20:52 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/02 23:58:32 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	const uint8_t	b = c;
	uint8_t			*r;

	if (!s || !n)
		return (s);
	r = s;
	while (n--)
		*r++ = b;
	return (s);
}
