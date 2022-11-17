/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 00:18:54 by abenamar          #+#    #+#             */
/*   Updated: 2022/11/17 20:02:06 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char	*s;

	if (!dst || !src || !size)
		return (ft_strlen(src));
	s = src;
	while (--size && *s)
		*dst++ = *s++;
	*dst = '\0';
	while (*s)
		++s;
	return (s - src);
}
