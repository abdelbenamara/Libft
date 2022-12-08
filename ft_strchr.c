/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 21:55:39 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/08 20:15:58 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const unsigned char	b = c;

	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == b)
			break ;
		++s;
	}
	if (*s == b)
		return ((char *) s);
	return (NULL);
}
