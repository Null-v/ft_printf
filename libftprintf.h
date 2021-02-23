/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:02:15 by edi-marc          #+#    #+#             */
/*   Updated: 2021/02/23 19:08:47 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

# define STDO 0
# define ERR -1

/*
**	If PH is modified remember to modify the corresponding
**	value on TYPES
*/
# define PH '%'
# define TYPES "cspiduxX%"
# define FLAGS "-0.*"

typedef struct	s_fields
{
	int		printed;
	int		minus;
	int		zero;
	int		star;
	int		dot;
	char	type;
}				t_fields;

int				ft_printf(const char *fmt, ...);
void			init_fields(t_fields *flds);
char			*check_conv_spec(char *p, t_fields *flds);
void			print_conv(va_list ap, t_fields *flds);
char			*check_conv(char *tmp, char *p, t_fields *flds);

#endif
