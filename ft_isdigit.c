/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:33:51 by marvin            #+#    #+#             */
/*   Updated: 2023/02/27 18:33:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c)
{
    if (c >= 48 && c <= 57)
        return (1);
    return (0);
}

/*#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("dig %d\n", ft_isdigit(49));
    printf("not dig %d\n", ft_isdigit(32));

    return (0);
}*/