/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrunel <mbrunel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 07:24:52 by mbrunel           #+#    #+#             */
/*   Updated: 2019/12/14 13:39:41 by mbrunel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(int c)
{
	if (c == ' ' || c == '\f' || c == '\n' ||
	c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}
