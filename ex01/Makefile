NAME := xCast

CC := c++
CFLAG := -Wall -Wextra 

SRC := main.cpp \
	Span.cpp


$(NAME): $(SRC)
	$(CC) $(CFLAG) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclaen: clean

re: fclaen
	make
