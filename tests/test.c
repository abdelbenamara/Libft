/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:13:18 by abenamar          #+#    #+#             */
/*   Updated: 2022/11/11 17:09:21 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define RESET   	"\033[0m"
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */

void	ft_isalpha_test(void);
void	ft_isdigit_test(void);

int	main(void)
{
	printf("\nProject:\t" BOLDMAGENTA "Libft" RESET "\n\n");
	printf(BOLDCYAN "Method" RESET "\t\t\t\t" BOLDCYAN "Tests" RESET "\n");
	printf("-\t\t\t\t-\n");
	ft_isalpha_test();
	ft_isdigit_test();
	return (0);
}
