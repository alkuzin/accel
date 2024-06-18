include ../common.mk

NAME  = test_stat
LIB   = ../../libaccel.a
LINKS = -lm
SRC   = test main
SRCS  = $(addsuffix .c, $(SRC))
OBJS  = $(addsuffix .o, $(SRC))

OBJS_DIR = objs/
OBJS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

$(OBJS_PREFIXED): $(SRCS)
	mkdir -p $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $(SRCS)
	mv *.o $(OBJS_DIR)

$(NAME): $(OBJS_PREFIXED)
	$(CC) $(CFLAGS) $(OBJS_PREFIXED) $(LIB) -o $(NAME) $(LINKS)

all: $(NAME) 

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: clean all