/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 21:07:24 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/03 00:10:53 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const unsigned char	b = c;
	char				*r;

	r = NULL;
	if (!s)
		return (r);
	while (*s)
	{
		if (*s == b)
			r = (char *) s;
		++s;
	}
	if (*s == b)
		r = (char *) s;
	return (r);
}
