/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amweyer <amweyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 11:37:34 by amweyer           #+#    #+#             */
/*   Updated: 2025/05/07 14:07:33 by amweyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    //size_t r;
    size_t buff;
    size_t end_line;
    static char *stash;
    static char *tmp;
    char *line;
    
    
    buff = 5;
    end_line = 0;
    stash = malloc(buff * sizeof(char));
    if(!stash)
        return(NULL);
    line = malloc(buff * sizeof(char));
    if(!line)
        return(NULL);
    while(!end_line)
    {
        //r = read(fd,stash,buff);
        read(fd,stash,buff);
        end_line = ft_strchr_cpy(stash, tmp);
        stash = ft_strjoin(tmp, line);
    }
    ft_strchr()
    
    return()


}
int main()
{
    int fd;
    fd = open("text.txt", O_RDONLY);
}