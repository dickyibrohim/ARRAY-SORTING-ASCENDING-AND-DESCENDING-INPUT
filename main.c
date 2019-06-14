#include <stdio.h>
/* This is C Source Code for Sorting Array in ascending and descending order with DINAMIC ARRAY
You can Find More tutorial By Mr. Dicky Ibrohim
*/
int main()
{
    int myarray [100], manyvalue, loop1, loop2, swap;

    printf ("Input Many Value: "); scanf("%d",&manyvalue);

    for (loop1=0;loop1<manyvalue;loop1++)
    {
        printf ("Value - %d: ",loop1+1); scanf ("%d",&myarray[loop1]);
    }
    for (loop2=0;loop2<(manyvalue-1);loop2++)
    {
        for (loop1=0;loop1<(manyvalue-1);loop1++)
        {
            if (myarray[loop1+1]<myarray[loop1])
            {
                swap= myarray[loop1];
                myarray[loop1]=myarray[loop1+1];
                myarray[loop1+1]= swap;

            }
        }
    }
    printf ("Ascending Order By DICKY IBROHIM: \n");
    for (loop1=0; loop1<manyvalue;loop1++)
    {
        printf (" %d ",myarray[loop1]);
    }
    printf ("\n");
    printf ("Descending Order By DICKY IBROHIM: \n");
    for (loop1=manyvalue; loop1>0;loop1--)
    {
        printf (" %d ",myarray[loop1-1]);
    }
    return 0;
}
