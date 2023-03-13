/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:04:10 by marvin            #+#    #+#             */
/*   Updated: 2023/03/13 14:04:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (s[i] != '\0')
        ft_putchar_fd(s[i++], fd);
}

/*int main(void)
{
    char    *x = "casa";

    ft_putstr_fd(x, 1);
    write(1, "\n", 1);
    return (0);
}*/

