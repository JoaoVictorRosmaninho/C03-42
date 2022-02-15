/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jv <jv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:44:46 by jv                #+#    #+#             */
/*   Updated: 2022/02/15 20:20:36 by jv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	char	*tmp;

	tmp = str;
	while (*str)
		str++;
	return ((int)(str - tmp));
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_size;
	unsigned int	dest_size;
	unsigned int	i;

	src_size = ft_strlen(src);
	dest_size = ft_strlen(dest);
	i = 0;
	while (src[i] && ((dest_size + i) < (size - 1)))
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (src_size + dest_size);
}
