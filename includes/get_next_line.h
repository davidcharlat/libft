#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE

# define BUFF_SIZE 4096
# define BOOL char

typedef struct	s_list
{
char			*content;
int				content_size;
BOOL			found;
struct s_list	*next;
}				t_list;

#endif
