#include<stdio.h>
int main()
{
    

    int em[10],st[10];
    for(int i=1;i<=10;i++)
    {scanf("%d",&st[i]);
    em[i]=0;
    }
    for(int i=1;i<=10;i++)
    {
        if(em[i]==0 && st[i]>60)
        {
           int c=0;
           for(int j=1;j<=10;j++)
           {
            if(st[i]==st[j])
            {
                c++;
                em[i]=-1;
             } }
                printf("%d marks repeated %d times\n",st[i],c);
           
           
        c=0; 
        }

}
}   