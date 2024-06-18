NAME = libaccel.a

SRC_DIR   = src/
UTILS_DIR = $(SRC_DIR)/utils/
SORT_DIR  = $(SRC_DIR)/sort/

OBJS = $(UTILS_DIR)accel_utils.o \
	   $(SORT_DIR)accel_sort.o

$(OBJS):
	$(MAKE) -C $(UTILS_DIR) all
	$(MAKE) -C $(SORT_DIR) all

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(MAKE) -C $(UTILS_DIR) fclean
	$(MAKE) -C $(SORT_DIR) fclean

fclean: clean
	rm -f $(NAME)

re: clean all