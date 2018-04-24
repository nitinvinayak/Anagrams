#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
void sort(char *p)
{
  for(int i=0;i<strlen(p);i++)
  { 
    for(int j=0;j<strlen(p);j++)
    {
      if(p[j+1]>p[j])
        {
          char t=p[j];
          p[j]=p[j+1];
          p[j+1]=t;
         }
    }
  }
}
int isAnagram(char a[],char b[])
{
  sort(a);
  sort(b);
  return strcmp(a,b);
}

void  mlower(char *a )
{
  for(int i=0;i<strlen(a);i++)
  {
     a[i]=tolower(a[i]);
  }
}
int rem_space(char *a)
{
int i,j=0;
  for (i=0;i<strlen(a);i++)
    {
    if(a[i]!=" "&&a[i]!=0&&a[i]!='0')
      {a[j]=a[i];
       j=j+1; }
}return j-1;}
int isAnagram2(char a[],char b[])
{
  mlower(a);
  mlower(b);
  sort(a);
  sort(b);
  return strcmp(a,b);
}    
int isAnagram3(char a[],char b[])
{
int flag=0;
  mlower(a);
  mlower(b);
  sort(a);
  sort(b);
  int l=rem_space(a);
  int m=rem_space(b);
  if (l!=m)
    {flag=1;}
  else
  {for (int i=0;i<l;i++)
      {if(a[i]!=b[i])
        {flag=1;
        break;}}}
  return flag;
}
  
int main()
{
  char a[20]={0},b[20]={0};
 scanf("%[^\n]",a);
 getchar();
 scanf("%[^\n]",b);
  int t=isAnagram3(a,b);
  if(t==0)
    printf("Anagrams\n");
  else
    printf("Not Anagrams\n");
  return 0;


} 
