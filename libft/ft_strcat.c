/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 16:15:57 by lshabang          #+#    #+#             */
/*   Updated: 2019/06/23 15:47:50 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int	i;
	int	k;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	k = 0;
	while (s2[k] != '\0')
	{
		s1[i] = s2[k];
		k++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
