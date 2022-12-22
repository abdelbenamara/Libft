/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:45:13 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/22 19:01:06 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	sub_len;
	char	*sub;

	if (!s)
		return (NULL);
	sub_len = ft_strlen(s);
	if (start > sub_len)
		sub_len = 0;
	else
		sub_len = sub_len - start;
	if (len < sub_len)
		sub_len = len;
	sub = ft_calloc(sub_len + 1, sizeof(char));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, sub_len + 1);
	return (sub);
}
