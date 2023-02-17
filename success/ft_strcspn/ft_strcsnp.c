/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcsnp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbratic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:29:44 by mbratic           #+#    #+#             */
/*   Updated: 2023/02/17 14:53:35 by mbratic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	while (s[i] != '\0')
	{
		while (reject[x] != '\0')
		{
			if(s[i] == reject[x])
				return (i);
			x++;
		}
		x = 0;
		i++;
	}
	return(i);
}

 int	main(void)
 {
 	printf("%lu\n", ft_strcspn("123456", "ABCD5"));
 	printf("%lu\n", strspn("", ""));
 }
