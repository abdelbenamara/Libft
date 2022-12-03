/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:33:58 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/03 00:17:34 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const size_t	dst_len = ft_strlen(dst);
	const char		*s = src;
	char			*d;

	if (!dst || !src || size <= dst_len)
		return (size + ft_strlen(src));
	d = dst + dst_len;
	while (--size > dst_len && *s)
		*d++ = *s++;
	*d = '\0';
	return (dst_len + ft_strlen(src));
}
