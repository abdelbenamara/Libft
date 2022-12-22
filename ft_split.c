/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:36:54 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/22 18:31:41 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**setup_split(char const *s, char c)
{
	size_t	count;
	size_t	len;

	if (!s)
		return (NULL);
	count = 0;
	len = 0;
	while (*s)
	{
		if (*s == c && len > 0)
		{
			++count;
			len = 0;
		}
		else if (*s != c)
			++len;
		++s;
	}
	if (len > 0)
		++count;
	return (ft_calloc(count + 1, sizeof(char *)));
}

static void	free_split(char **split, size_t curr)
{
	size_t	i;

	i = 0;
	while (i < curr)
	{
		free(split[i]);
		++i;
	}
	free(split);
}

static int	add_word(const char *s, size_t *len, char **split, size_t *curr)
{
	split[*curr] = ft_calloc(*len + 1, sizeof(char));
	if (!split[*curr])
		return (free_split(split, *curr), 0);
	ft_strlcpy(split[*curr], s - *len, *len + 1);
	*curr = *curr + 1;
	*len = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	size_t	curr;
	char	**split;

	len = 0;
	curr = 0;
	split = setup_split(s, c);
	if (!split)
		return (NULL);
	while (*s)
	{
		if (*s == c && len > 0)
		{
			if (!add_word(s, &len, split, &curr))
				return (NULL);
		}
		else if (*s != c)
			++len;
		++s;
	}
	if (len > 0)
		if (!add_word(s, &len, split, &curr))
			return (NULL);
	split[curr] = NULL;
	return (split);
}
