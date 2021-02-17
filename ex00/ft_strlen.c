/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 13:51:14 by fboumell          #+#    #+#             */
/*   Updated: 2021/02/17 15:02:54 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i])
		i++;
	return (i);
}

int	main()
{
	char str[] = "hello from the other side";
	//printf("%d\n", ft_strlen(str));
	printf("%lu\n", strlen(str));
	return 0;
}
