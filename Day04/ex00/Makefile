NAME = Animal

SRCS = ./Animal.cpp \
	   ./main.cpp \
	   ./WrongCat.cpp \
	   ./Cat.cpp \
	   ./Dog.cpp \

OBJS	= 	$(SRCS:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

MAKE = make
 
all: $(NAME)

$(NAME): $(OBJS)
		@c++ ${FLAGS} $(OBJS) -o ${NAME}

.cpp.o: $(SRCS)
	@c++ ${FLAGS} -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re