#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    int len,len1,flag,u,v;
    scanf("%s %s",a,b);
    
    len=strlen(a);
    len1=strlen(b);
    if(len==len1)
    {
        for(int i=0,int j=0;i<len,j<len;i++,j++)
        {
          
                u=a[i]-a[j];
                v=b[i]-b[j];
                if(u==v)
                {
                    flag=0;
                }
                else
                {
                    flag=1;
                    break;
                }
            
        }
    }
    else
        printf("no\n");
    if(flag==0)
    {
        printf("yes\n");
    }
    else
        printf("no\n");
    return 0;
}
