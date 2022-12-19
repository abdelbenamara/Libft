/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus_test.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:56:08 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/19 20:16:00 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_lstadd_back_test(void)
{
	t_list	*lst;
	t_list	*item;

	printf("ft_lstadd_back\t");
	int	a = 0;
	lst = ft_lstnew(&a);
	int	b = 1;
	ft_lstadd_back(&lst, ft_lstnew(&b));
	assert(*(int *)(lst->content) == 0);
	assert(*(int *)(lst->next->content) == 1);
	printf(BOLDGREEN "1. OK\t");
	int	c = 2;
	ft_lstadd_back(&lst, ft_lstnew(&c));
	assert(*(int *)(lst->content) == 0);
	assert(*(int *)(lst->next->content) == 1);
	assert(*(int *)(lst->next->next->content) == 2);
	printf(BOLDGREEN "2. OK\t");
	int	d = 3;
	ft_lstadd_back(&lst, ft_lstnew(&d));
	assert(*(int *)(lst->content) == 0);
	assert(*(int *)(lst->next->content) == 1);
	assert(*(int *)(lst->next->next->content) == 2);
	assert(*(int *)(lst->next->next->next->content) == 3);
	printf(BOLDGREEN "3. OK\t");
	int e = 4;
	ft_lstadd_back(&lst, ft_lstnew(&e));
	assert(*(int *)(lst->content) == 0);
	assert(*(int *)(lst->next->content) == 1);
	assert(*(int *)(lst->next->next->content) == 2);
	assert(*(int *)(lst->next->next->next->content) == 3);
	assert(*(int *)(lst->next->next->next->next->content) == 4);
	printf(BOLDGREEN "4. OK\t");
	int f = 5;
	ft_lstadd_back(&lst, ft_lstnew(&f));
	assert(*(int *)(lst->content) == 0);
	assert(*(int *)(lst->next->content) == 1);
	assert(*(int *)(lst->next->next->content) == 2);
	assert(*(int *)(lst->next->next->next->content) == 3);
	assert(*(int *)(lst->next->next->next->next->content) == 4);
	assert(*(int *)(lst->next->next->next->next->next->content) == 5);
	while (lst)
	{
		item = lst->next;
		free(lst);
		lst = item;
	}
	printf(BOLDGREEN "5. OK" RESET "\n");
}
