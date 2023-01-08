/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 22:33:58 by abenamar          #+#    #+#             */
/*   Updated: 2023/01/08 03:33:25 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;

	dst_len = 0;
	if (size)
		dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (size + ft_strlen(src));
	return (dst_len + ft_strlcpy(dst + dst_len, src, size - dst_len));
}
