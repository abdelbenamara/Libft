/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 21:55:39 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/03 00:19:19 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const unsigned char	b = c;
	char				*r;

	r = NULL;
	if (!s)
		return (r);
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
