//character frequency

#include<stdio.h>
#include<string.h>
int main(){
char s[100],ch;
int i,c=0;
printf("Enter string: ");
gets(s);
printf("Enter character: ");
scanf("%c",&ch);
for(i=0;s[i]!='\0';i++){
if(s[i]==ch)
c++;
}
printf("Frequency=%d",c);
return 0;
}