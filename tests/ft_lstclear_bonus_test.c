/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 22:22:13 by abenamar          #+#    #+#             */
/*   Updated: 2022/12/19 22:27:11 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

void	ft_lstclear_test(void)
{
	t_list	*lst;

	printf("ft_lstclear\t");
	lst = ft_lstnew(strdup("0"));
	ft_lstclear(&lst, NULL);
	assert(!strcmp(lst->content, "0"));
	printf(BOLDGREEN "1. OK\t");
	ft_lstclear(&lst, &free);
	assert(lst == NULL);
	printf(BOLDGREEN "2. OK\t");
	lst = ft_lstnew(strdup("0"));
	ft_lstadd_front(&lst, ft_lstnew(strdup("1")));
	ft_lstclear(&(lst->next), &free);
	assert(!strcmp(lst->content, "1"));
	printf(BOLDGREEN "3. OK\t");
	ft_lstadd_front(&lst, ft_lstnew(strdup("2")));
	ft_lstclear(&lst, &free);
	assert(lst == NULL);
	printf(BOLDGREEN "4. OK\t");
	ft_lstclear(&lst, &free);
	assert(lst == NULL);
	printf(BOLDGREEN "5. OK" RESET "\n");
}
