//Bismillahir Rahmanir Rahim
#include<stdio.h>
#include<string.h>

void sort(char a[],int l)
{
    int freq[26];
    int i;
    for(i=0; i<=25; i++)
    {
        freq[i]=0;
    }
    for(i=0; i<=8; i++)
    {
        freq[a[i]-97]++;
    }
    for(i=0; i<=25; i++)
    {
        if( freq[i]>0)
        {
            for(int j=0; j<freq[i]; j++)
            {
                printf("%c",i+97);
            }
        }
    }

}

int main()
{
    char  arr[100];
    scanf("%s",arr);
    int len=strlen(arr);
    sort(arr,len);
    return 0;
}