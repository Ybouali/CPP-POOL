NAME = megaphone

SRCS = ./megaphone.cpp

OBJS	= 	$(SRCS:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

MAKE = make
 
all: $(NAME)

$(NAME): $(OBJS)
		@g++ ${FLAGS} $(OBJS) -o ${NAME}

.cpp.o: $(SRCS)
	@g++ ${FLAGS} -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re