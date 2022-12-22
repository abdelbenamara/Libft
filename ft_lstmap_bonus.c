/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 07:27:37 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/22 19:47:39 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*item;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		item = ft_lstnew(f(lst->content));
		if (!item)
			return (ft_lstclear(&new, del), NULL);
		ft_lstadd_back(&new, item);
		lst = lst->next;
	}
	return (new);
}
