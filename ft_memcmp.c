/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 22:09:46 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/03 00:06:10 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*r1 = (unsigned char *) s1;
	const unsigned char	*r2 = (unsigned char *) s2;

	if (!s1 && s2)
		return (*(unsigned char *)s2);
	else if (s1 && !s2)
		return (*(unsigned char *)s1);
	else if (!s1 || !s2 || !n)
		return (0);
	while (--n)
	{
		if (*r1 != *r2)
			break ;
		++r1;
		++r2;
	}
	return (*r1 - *r2);
}
