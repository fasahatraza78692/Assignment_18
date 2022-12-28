#include<stdio.h>
#include<string.h>
char* reverse(char string[])
{
	int i,j;
	char t;
	for(i=0,j=strlen(string)-1;i<j;i++,j--)
	 {
	 	t=string[i];
	 	string[i]=string[j];
	 	string[j]=t;
	 }
	return string;
	 
}
char* rev_wordwise(char str[])
{
	int ln,i=0;
	ln=strlen(str);
	char *ptr;
	char static revs[100];
	ptr=strtok(str," ");
	while(ptr!=NULL)
	 {
	 	int j=0;
	 	ptr=reverse(ptr);
	    while(ptr[j]!='\0')
	    {
	    	revs[i]=ptr[j];
	 	    i++;
	 	    j++;
	    }
	   revs[i]=' ';
	   i++;
	   ptr=strtok(NULL," ");
	 }
	 revs[i-1]='\0';
	 return reverse(revs);	 
}
int main()
{
	char str[100]={"iNeuron Education Services"},*ptr;
	ptr=rev_wordwise(str);
	printf("%s",ptr);
  return 0;
}
