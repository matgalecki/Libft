/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 21:18:35 by mgalecki          #+#    #+#             */
/*   Updated: 2024/03/13 21:05:40 by mgalecki         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*d;

	d = dest;
	if ((!dest && !src) || (dest == src))
		return (dest);
	if (dest > src)
	{
		while (n--)
			((char *)dest)[n] = ((char *)src)[n];
	}
	else
	{
		while (n--)
			*(char *)dest++ = *(char *)src++;
	}
	return (d);
}
/*
#include <stdio.h>
int	main()
{
	char	src1[] = "abcdefg";
	size_t size = sizeof(src1);
	char	dest1[] = "awed12312332";
	void *result = ft_memmove(dest1,src1, size); 
	printf("%s", (char *)result);
	return (0);
}
*/