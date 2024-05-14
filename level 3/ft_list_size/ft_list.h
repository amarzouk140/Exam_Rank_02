#ifndef FT_LIST_SIZE_H
#define FT_LIST_SIZE_H


int	ft_list_size(t_list *begin_list);

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                t_list;

#endif
