NAME			=	libft.a
SRCS_DIR		=	./
OBJS_DIR		=	objs/
FILES			=	ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_strlen \
					ft_memset ft_bzero ft_memcpy ft_strlcpy ft_strlcat ft_toupper \
					ft_tolower ft_strchr ft_strrchr ft_strncmp ft_memchr ft_memcmp \
					ft_strnstr ft_atoi ft_calloc ft_strdup ft_substr ft_strjoin \
					ft_strtrim ft_split ft_itoa ft_strmapi ft_striteri ft_putchar_fd \
					ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_memmove
SRCS			=	$(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
OBJS			=	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))

BONUS_FILE		=	ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back \
					ft_lstdelone ft_lstclear ft_lstiter ft_lstmap 
BONUS_SRCS		=	$(addprefix $(SRCS_DIR), $(addsuffix .c, $(BONUS_FILE)))
BONUS_OBJS		=	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(BONUS_FILE)))					
GCC				=	gcc
CFLAGS			=	-Wall -Werror -Wextra
ARCR			=	ar -crs 
RM				=	rm -rf

all:
	mkdir -p $(OBJS_DIR)
	make $(NAME)


$(OBJS_DIR)%.o:$(SRCS_DIR)%.c
	$(GCC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(BONUS_OBJS)
	$(ARCR) $(NAME) $(OBJS) $(BONUS_OBJS)

bonus: $(NAME)

clean:
	$(RM) $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all 

norm:
	norminette -R CheckForbiddenSourceHeader $(SRCS) libft/libft.h
