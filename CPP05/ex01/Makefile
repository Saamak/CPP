SOURCES = main.cpp \
		  Bureaucrat.cpp \
		  Form.cpp

OBJECTS = $(SOURCES:.cpp=.o)

NAME = Bureaucrat

CXX = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -g

$(NAME): $(OBJECTS)
	$(CXX) $(FLAGS) $(OBJECTS) -o $(NAME)

all : $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
