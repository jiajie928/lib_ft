NAME			=	libft.a
SRCS_DIR		=	libft/
OBJS_DIR		=	objs/
FILES			=	ft_bzero ft_isalnum ft_memset ft_isalpha ft_calloc ft_strlen\
					ft_strlcat
SRCS			=	$(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
OBJS			=	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
GCC				=	gcc
CFLAGS			=	-Wall -Werror -Wextra
ARCR			=	ar -crs 
RM				=	rm -rf

all:
	mkdir -p $(OBJS_DIR)
	make $(NAME)

$(OBJS_DIR)%.o:$(SRCS_DIR)%.c
	$(GCC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(ARCR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME)

norm:
	norminette -R CheckForbiddenSourceHeader $(SRCS) libft/libft.h

re: fclean all 
