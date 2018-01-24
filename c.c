/*
// Sample code to perform I/O:

scanf("%s", name);              // Reading input from STDIN
printf("Hi, %s.\n", name);      // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<stdio.h>

int main()
{
    int i,t,n,k,j,m,a[1000000],d[1000000],b[1000];
    int max, max_id;
    scanf("%d", &t);
    printf("%d\n",t );
    
    for(i = 0; i<t; i++)
    {
        scanf("%d%d", &n, &k);
        max = 0;
        max_id=0;
        for(j=0;j<n;j++)
        {   b[j] = 0;
            scanf("%d", &a[j]);
        }
        
        for(j=0;j<k;j++)
        {
            scanf("%d", &d[j]);
            //printf("%d\n", d[j]);   
            for(m=0;m<n;m++)
            {
                if(a[m]>=d[j])
                {
                    b[m]++;
                    if(b[m]>max)
                    {
                        max = b[m];
                        max_id = m;
                    }
                }
                //printf("%d %d \n", max, max_id);
            }
            printf("%d\n",max_id);
        }
        //printf("%d\n",m);
    }
}