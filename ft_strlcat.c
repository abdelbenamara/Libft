/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:33:58 by abenamar          #+#    #+#             */
/*   Updated: 2022/11/17 18:29:05 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		dst_len;
	char		*d;
	const char	*s;

	dst_len = ft_strlen(dst);
	if (!dst || !src || size <= dst_len)
		return (size + ft_strlen(src));
	d = dst + dst_len;
	s = src;
	while (--size > dst_len && *s)
		*d++ = *s++;
	*d = '\0';
	return (dst_len + ft_strlen(src));
}
