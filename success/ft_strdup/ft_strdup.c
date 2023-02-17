/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbratic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:44:38 by mbratic           #+#    #+#             */
/*   Updated: 2023/02/13 15:53:24 by mbratic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int	i;
	char	*dup;

	i = 0;
	while (src[i] != '\0')
		i++;
	dup = malloc(sizeof (char) * (i + 1));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
			i++;
	}
	dup[i] = src[i];
	return (dup);
}
