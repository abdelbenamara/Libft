/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 21:55:39 by abenamar          #+#    #+#             */
/*   Updated: 2022/11/18 23:02:17 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char		*r;
	unsigned char	b;

	if (!s)
		return (NULL);
	r = (char *) s;
	b = c;
	while (*r)
		if (*r == b)
			return (r);
		else
			++r;
	if (*r == b)
		return (r);
	return (NULL);
}
