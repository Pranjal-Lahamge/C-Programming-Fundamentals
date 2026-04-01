#include <stdio.h>
int main(int argc, char const *argv[])
{
char a;//variable to store the input character
printf("enter the ALPHABET \n");
scanf("%c",&a);
if (a=='a',a=='e',a=='i',a=='o',a=='u',a=='A',a=='E',a=='I',a=='O',a=='U')//condition to check if the character is a vowel
{
    printf("the character is vowel\n");

}
else
{
    printf("alphabet is not a vowel\n");
}

    return 0;
}
/*OUTPUT
enter the ALPHABET 
a
the character is vowel
*/