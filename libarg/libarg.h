/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libarg.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenamar <abenamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:40:43 by abenamar          #+#    #+#             */
/*   Updated: 2023/05/04 21:07:38 by abenamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBARG_H
# define LIBARG_H

# include "libft.h"

# define SPECIFIERS "cspdiuxX%"
# define FLAGS "#0- +"

typedef struct s_cfwps
{
	uint8_t	alternate_form_flag;
	uint8_t	zero_flag;
	uint8_t	left_adjustement_flag;
	uint8_t	blank_flag;
	uint8_t	sign_flag;
	size_t	min_width;
	ssize_t	precision;
	char	specifier;
	size_t	len;
}	t_cfwps;

uint8_t	ft_is_flag(char c);
uint8_t	ft_is_specifier(char c);

size_t	ft_max_width(size_t len, ssize_t precision);
size_t	ft_min_width(size_t len, ssize_t precision);

t_cfwps	*ft_parse_specifications(const char *format);

int		ft_adjust_width(uint8_t left, int fd, t_cfwps *specs, size_t len);

int		ft_vdint_conversion(int fd, t_cfwps *specs, va_list *ap);
int		ft_vdptr_conversion(int fd, t_cfwps *specs, va_list *ap);
int		ft_vdstr_conversion(int fd, t_cfwps *specs, va_list *ap);
int		ft_vduint_conversion(int fd, t_cfwps *specs, va_list *ap);

int		ft_vdconvert(int fd, const char **format, va_list *ap);

#endif
