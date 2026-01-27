/* ​Problem Statement
​Objective: Create a program to reward students with prize money based on their exam results in Science and Maths.
​Rules:
​If the student passes in both Science and Maths (score > 35), they receive 45 rupees.
​If the student passes in only Science (score > 35), they receive 15 rupees.
​If the student passes in only Maths (score > 35), they receive 15 rupees.
​If the student fails both, they receive no reward.
*/
#include <stdio.h>
int main()
{
    int maths, science;
    printf ("enter your science marks\n");
    scanf("%d",&science); 
    printf ("enter your maths marks\n");
    scanf("%d",&maths);
    //CONDITION FOR PASSING IN BOTH SUBJECTS
    if (science>35 && maths > 35) {
printf ("you have passed in both subject and get ruppes 45 as price");
    }//CONDITION FOR PASSING IN SCIENCE
    else if (science>35 )
    {
        printf("you have passed in science and get rupees 15 a s price money ");
    }//CONDITION FOR PASSING IN MATHS
    else if (maths >35 )
    {
        printf("you have passed in maths and get rupees 15 a s price money ");
    }
    else
    {
        printf("you are fail in both");
    }
    return 0;
}
/* OUTPUT
enter your science marks
66
enter your maths marks
33
you have passed in science and get rupees 15 a s price money 
*/
