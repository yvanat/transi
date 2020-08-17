/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrunel <mbrunel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:16:41 by mbrunel           #+#    #+#             */
/*   Updated: 2019/10/09 11:29:25 by mbrunel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int		i;
	char	*j;

	i = 0;
	j = (char*)s;
	while (n > 0)
	{
		j[i] = c;
		n--;
		i++;
	}
	return (s);
}