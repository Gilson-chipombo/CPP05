CXX = c++
CXXFLAGS =  -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Bureaucrat.cpp 
OBJS = $(SRCS:.cpp=.o)
NAME = Bureaucrat

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)
clean:
	rm -f $(OBJS) $(NAME)
	
fclean: clean
	rm -f $(NAME)

re: fclean all