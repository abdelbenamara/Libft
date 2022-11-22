/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 21:55:39 by abenamar          #+#    #+#             */
/*   Updated: 2022/11/22 21:20:46 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
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
		{
			r = (char *) s;
			break ;
		}
		++s;
	}
	if (*s == b)
		r = (char *) s;
	return (r);
}
