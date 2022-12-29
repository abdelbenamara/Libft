/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:38:06 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/28 22:19:55 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_lstlast_test(void)
{
	t_list	*lst;
	t_list	*item;

	printf(RESET "\nft_lstlast\t");
	item = ft_lstlast(NULL);
	ft_assert(1, item == NULL);
	lst = ft_lstnew("0");
	item = ft_lstlast(lst);
	ft_assert(2, !strcmp(item->content, "0"));
	ft_lstadd_front(&lst, ft_lstnew("1"));
	item = ft_lstlast(lst);
	ft_assert(3, !strcmp(item->content, "0"));
	item->next = ft_lstnew("2");
	item = ft_lstlast(lst);
	ft_assert(4, !strcmp(item->content, "2"));
	while (lst)
	{
		item = lst->next;
		free(lst);
		lst = item;
	}
	item = ft_lstlast(lst);
	ft_assert(5, item == NULL);
}
