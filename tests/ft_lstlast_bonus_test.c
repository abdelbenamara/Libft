/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:38:06 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/19 19:47:57 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_lstlast_test(void)
{
	t_list	*lst;
	t_list	*item;

	printf("ft_lstlast\t");
	item = ft_lstlast(NULL);
	assert(item == NULL);
	printf(BOLDGREEN "1. OK\t");
	lst = ft_lstnew("0");
	item = ft_lstlast(lst);
	assert(!strcmp(item->content, "0"));
	printf(BOLDGREEN "2. OK\t");
	ft_lstadd_front(&lst, ft_lstnew("1"));
	item = ft_lstlast(lst);
	assert(!strcmp(item->content, "0"));
	printf(BOLDGREEN "3. OK\t");
	item->next = ft_lstnew("2");
	item = ft_lstlast(lst);
	assert(!strcmp(item->content, "2"));
	printf(BOLDGREEN "4. OK\t");
	while (lst)
	{
		item = lst->next;
		free(lst);
		lst = item;
	}
	item = ft_lstlast(lst);
	assert(item == NULL);
	printf(BOLDGREEN "5. OK" RESET "\n");
}
