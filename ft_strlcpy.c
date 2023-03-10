/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:50:18 by marvin            #+#    #+#             */
/*   Updated: 2023/03/01 18:50:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;

    i = 0;
    while (src[i] && i < size)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}

/*#include <stdio.h>
#include "libft.h"

int main(void)
{
    char    dst[50];
    const char  *src = "casa amarela";

    printf("%zd\n", ft_strlcpy(dst, src, 4));
    printf("%s\n", dst);
    return (0);
}*/