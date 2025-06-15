CXX = c++
CXXFLAGS =  -Wall -Wextra -Werror -std=c++98

SRCS = Form.cpp Bureaucrat.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = Bureaucrat_form

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)
clean:
	rm -f $(OBJS) $(NAME)
	
fclean: clean
	rm -f $(NAME)

re: fclean all