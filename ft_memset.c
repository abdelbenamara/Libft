/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 01:20:52 by abenamar          #+#    #+#             */
/*   Updated: 2022/11/17 19:59:29 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	uint8_t	*r;
	uint8_t	b;

	if (!s || !n)
		return (s);
	r = s;
	b = c;
	while (n--)
		*r++ = b;
	return (s);
}
