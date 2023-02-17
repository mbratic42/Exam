/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbratic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:52:08 by mbratic           #+#    #+#             */
/*   Updated: 2023/02/17 13:17:54 by mbratic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		while (reject[k] != '\0')
		{
			if (reject[k] == s[i])
				return (i);
			k++;
		}
		k = 0;
		i++;
	}
	return (i);
}

int	main(void)
{
	printf("%lu\n", ft_strcspn("tlllest", "es"));
	printf("%lu\n", strspn("asdtesasdfht", "asdfgh"));
	printf("%lu\n", ft_strcspn("test", "f"));
	printf("%lu\n", strcspn("test", "f"));
}
