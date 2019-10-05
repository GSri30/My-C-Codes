// Program that inputs a string S consisting of lower-case English alphabets and an integer L, find the number of distinct sub-strings of length L(>0) of the given string S. 
// Note: If L >|S|(length of S), then output should be 0.
// Sample Input1 : abcbab 2  Output1 : 4         Sample Input2 : ababa 2   Output2 : 2

//Here, we are using an 2-d array to store all the possible sub-strings

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define n 1000
int main()
{
        /* SUB = substrings length, LEN = Length of String, DUPE = No. of Duplicates */
        int LEN,SUB,DUPE=0,x=0,y=1,i=0,j=0,indpattern=0;
        char main_pattern[n];
        scanf("%s %d",&main_pattern[0],&SUB);
        //length of main pattern
        LEN=strlen(main_pattern);
        int a = LEN-SUB+1;
        //total number of combinations of substrings each of length SUB
        char rows[n][n];


        if (SUB> 0)
        {
                 if(SUB<=LEN)
                 {

                 while ( i < a)
                //we are going to each row
                {
                        indpattern = x;
                        //x and y are variables used to reset again and again the value of index and j respectively
                        while(j<=SUB-1)
                            //going to each column in a given row
                        {
                                 rows[i][j] = main_pattern[indpattern];
                                 //dividing the input into a 2D array
                                 indpattern++;
                                 j++;
                        }

                j=0;
                x++;
                i++;
                }

        i=0,j=0;
        //reseting the values of i and j

        while(i<a)
        {
                 j=y;

               while(j>i && j<a)
                        {

                       if((strcmp(rows[i],rows[j])==0))
                       {
                                DUPE++;
                                //finding the duplicate patterns and removing them
                                break;
                                //break as we do not have to continue the loop further
                       }
                j++;
                        }

                y++;
                i++;
        }

        printf("%d\n",a-DUPE);
        }





        else
        {
                printf("0");
        }


return 0;
        }
}
