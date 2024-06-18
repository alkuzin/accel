NAME = libaccel.a

SRC_DIR   = src/
UTILS_DIR = $(SRC_DIR)/utils/
SORT_DIR  = $(SRC_DIR)/sort/
STAT_DIR  = $(SRC_DIR)/stat/

OBJS = $(UTILS_DIR)accel_utils.o \
	   $(SORT_DIR)accel_sort.o   \
	   $(STAT_DIR)accel_stat.o

$(OBJS):
	$(MAKE) -C $(UTILS_DIR) all
	$(MAKE) -C $(SORT_DIR) all
	$(MAKE) -C $(STAT_DIR) all

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(MAKE) -C $(UTILS_DIR) fclean
	$(MAKE) -C $(SORT_DIR) fclean
	$(MAKE) -C $(STAT_DIR) fclean

fclean: clean
	rm -f $(NAME)

re: clean all