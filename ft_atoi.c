/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 23:38:33 by abenamar          #+#    #+#             */
/*   Updated: 2022/11/25 00:21:21 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;

	if (!nptr)
		return (0);
	while (*nptr == ' ' || (9 <= *nptr && *nptr <= 13))
		++nptr;
	i = 0;
	sign = 1;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -1;
		++nptr;
	}
	while ('0' <= *nptr && *nptr <= '9')
	{
		i = i * 10 + (*nptr - '0');
		++nptr;
	}
	return (sign * i);
}
