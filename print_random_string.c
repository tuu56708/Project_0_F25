

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rand_string(char *s, size_t size);

// random string generator wrapper function
char* rand_string_alloc(size_t size)
{
     char *s = malloc(size + 1);
     if (s) {
         rand_string(s, size); // to be developed by the student
     }
     return s;
}



int main()

{
    char *str;
    size_t size = 20;  //specify a value for size of word

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
    str = rand_string_alloc(size );
    printf("%s",str);
    free (str);


	return(0);
}