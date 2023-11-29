CLIENT = client
SERVER = server
CC = cc
CFLAGS = -Wall -Wextra -Werror
SOURCES = client.c server.c

# Define the name for the final executables
CLIENT_EXEC = client
SERVER_EXEC = server

# Define the object files
OBJS = $(SOURCES:.c=.o)

# Path to the ft_printf library
PRINTF = ft_printf/libftprintf.a

# Build all targets by default
all: $(CLIENT_EXEC) $(SERVER_EXEC)

# Build the client executable
$(CLIENT_EXEC): $(OBJS)
	@$(CC) $(CFLAGS) -o $@ $(OBJS) $(PRINTF)

# Build the server executable
$(SERVER_EXEC): $(OBJS)
	@$(CC) $(CFLAGS) -o $@ $(OBJS) $(PRINTF)

# Compile the object files
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

# Build the ft_printf library
$(PRINTF):
	@make -C ft_printf
	@make -C ft_printf

# Clean up object files, executables, and printf library
clean:
	@rm -f $(OBJS)
	@make -C ft_printf clean

# Clean up object files, executables, and printf library
fclean: clean
	@rm -f $(CLIENT_EXEC) $(SERVER_EXEC)
	@make -C ft_printf fclean

# Rebuild everything
re: fclean all
