#include <stdio.h>

int main() {

    // C allows a character array to be represented by a character string rather than a
    // list of characters, with the null terminating character automatically added to the end. 

    char string[] = "Merkkijono"; // (or)
    char string[] = {'M', 'e', 'r', 'k', 'k', 'i', 'j', 'o', 'n', 'o', '\0'};

    //     In the first example, the string will have a null character automatically appended to the
    // end by the compiler; by convention, library functions expect strings to be terminated by a
    // null character. The latter declaration indicates individual elements, and as such the null
    // terminator needs to be added manually.


    //     Strings do not always have to be linked to an explicit variable. As you have seen already, a
    // string of characters can be created directly as an unnamed string that is used directly (as
    // with the printf functions.)
    // To create an extra long string, you will have to split the string into multiple sections, by
    // closing the first section with a quote, and recommencing the string on the next line (also
    // starting and ending in a quote):
    char string[] = "This is a very, very long "
                    "string that requires two lines.";


}