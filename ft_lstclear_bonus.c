/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 21:45:47 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/22 21:33:32 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	**first;
	t_list	*item;

	if (!lst || !del)
		return ;
	first = lst;
	while (*lst)
	{
		item = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = item;
	}
	*first = NULL;
}
