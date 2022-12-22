/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:33:58 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/22 21:16:01 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const char		*s = src;
	size_t			dst_len;

	dst_len = 0;
	if (dst)
		dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (size + ft_strlen(src));
	dst += dst_len;
	while (--size > dst_len && *s)
	{
		*dst = *s;
		++dst;
		++s;
	}
	*dst = '\0';
	return (dst_len + ft_strlen(src));
}
