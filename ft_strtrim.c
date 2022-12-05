/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 15:04:09 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/05 15:05:32 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	const size_t	set_len = ft_strlen(set);
	size_t			len;
	char			*str;

	if (set_len)
		while (!ft_strncmp(s1, set, set_len))
			s1 += set_len;
	len = ft_strlen(s1);
	if (set_len)
		while (!ft_strncmp(s1 + len - set_len, set, set_len))
			len -= set_len;
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len + 1);
	return (str);
}
