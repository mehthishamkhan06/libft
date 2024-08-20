
# All sources files
SRCS			=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
					ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
					ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
					ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
					ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
					ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
					ft_strjoin.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c \
					ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c ft_strmapi.c \
					ft_itoa.c ft_split.c  
OBJS			= $(SRCS:.c=.o) # Coversion of sources (C files to object files to create library)

# The PDF says that there should be a seperate rule for bonus files thats why or else we could keep this files in the above sources files.
BONUS			=	ft_lstadd_back.c ft_lstadd_front.c ft_lstlast.c \
					ft_lstnew.c ft_lstsize.c ft_lstdelone.c \
					ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUS_OBJS		= $(BONUS:.c=.o)  # Coversion of sources (C files to object files to create library)

CC				= cc #compiling rule
RM				= rm -f  #force remove command
CFLAGS			= -Wall -Wextra -Werror. #the C Flags

NAME			= libft.a  #name of the library to be created

# The below is the all rule, this rule calls the above rules (i.e) converts all the sources files to object files and creates a library.
# the purpose of object files are that, they are required to create the library. Its like we combine all the object files together to form the library.
# ar rcs is the command to update the library once you make anychanged to the files.
all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

# Clean rule is for removing the object files that we created once the library is successfully created as we no longer need them.
clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

# fclean is the rule to clean all the object files and the library.
fclean:			clean
				$(RM) $(NAME)

# re rule is for using the fclean and repeating the whole process once again
re:				fclean $(NAME)

#bonus is an additional rule as mentioned before.
bonus:			$(BONUS_OBJS)
				ar rcs $(NAME) $(BONUS_OBJS)
# .phony rule is that we tell the makefile only to include the rules mentioned in this file, for example if i have a file in my directory as all or clean etc..
# it should not execute that file instead execute the rule from the makefile.
.PHONY:			all clean fclean re bonus