/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 00:18:54 by abenamar          #+#    #+#             */
/*   Updated: 2022/11/16 22:43:57 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = size - 1;
	if (dst_len > src_len)
		dst_len = src_len;
	if (dst != NULL && src != NULL && size > 0)
	{
		ft_memcpy(dst, src, dst_len);
		dst[dst_len] = '\0';
	}
	return (src_len);
}
