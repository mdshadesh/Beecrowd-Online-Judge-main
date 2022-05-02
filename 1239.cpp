#include <stdio.h>
#include<iostream>
#include <string.h>

using namespace std;
int main()

{

    char str[1000],str1[1000];

    int i,j,k,l,n,m;

    while(gets(str) != NULL )

    {

            k = strlen(str);

        m=0;

        j=0;

        n=0;

        for (i=0;i<k;i++,m++)

        {

            if(str[i] == '*')

            {

                j++;

                if(j%2!= 0)

                 {

                     str1[m] = '<';

                     m++;

                     str1[m] = 'b';

                     m++;

                     str1[m] = '>';

                 }

                 else if(j%2 == 0)

                 {

                     str1[m] = '<';

                     m++;

                     str1[m] = '/';

                     m++;

                     str1[m] = 'b';

                     m++;

                     str1[m] = '>';

                 }

            }

            else if(str[i] == '_')

             {

                n++;

                if(n%2!= 0)

                 {

                     str1[m] = '<';

                     m++;

                     str1[m] = 'i';

                     m++;

                     str1[m] = '>';

                 }

                 else if(n%2 == 0)

                 {

                     str1[m] = '<';

                     m++;

                     str1[m] = '/';

                     m++;

                     str1[m] = 'i';

                     m++;

                     str1[m] = '>';

                 }

            }

            else

                str1[m] = str[i];

 

        }

        str1[m] = '\0';

        printf("%s\n",str1);

    }

 

}