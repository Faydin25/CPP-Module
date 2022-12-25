SRCS			= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= c++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -I. -std=c++98

NAME			=  RepetitiveWork

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

run: $(NAME)
	./$(NAME)
.PHONY:			all clean fclean re test