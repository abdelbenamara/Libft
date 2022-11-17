/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 00:18:54 by abenamar          #+#    #+#             */
/*   Updated: 2022/11/17 02:52:11 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	if (!size)
		return (ft_strlen(src));
	dst_len = size - 1;
	src_len = ft_strlen(src);
	if (dst_len > src_len)
		dst_len = src_len;
	if (dst && src)
		ft_memcpy(dst, src, dst_len);
	dst[dst_len] = '\0';
	return (src_len);
}
