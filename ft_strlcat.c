/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:33:58 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/08 18:16:06 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const size_t	dst_len = ft_strlen(dst);
	const char		*s = src;

	if (!dst || !src || size <= dst_len)
		return (size + ft_strlen(src));
	dst += dst_len;
	while (--size > dst_len && *s)
		*dst++ = *s++;
	*dst = '\0';
	return (dst_len + ft_strlen(src));
}
