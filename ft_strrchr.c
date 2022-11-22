/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 21:07:24 by abenamar          #+#    #+#             */
/*   Updated: 2022/11/22 21:21:40 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*r;
	unsigned char	b;

	r = NULL;
	if (!s)
		return (r);
	b = c;
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
