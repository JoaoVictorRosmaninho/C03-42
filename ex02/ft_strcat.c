/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:48:28 by jv                #+#    #+#             */
/*   Updated: 2022/02/12 19:48:31 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	char	*tmp;

	tmp = str;
	while (*str++)
		;
	return ((int)(str - tmp));
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	size;
	unsigned int	i;

	size = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[size + i] = src[i];
		i++;
	}
	dest[size + i] = src[i];
	return (dest);
}
