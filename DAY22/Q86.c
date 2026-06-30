//count words in a sentence

#include<stdio.h>
#include<string.h>
int main(){
char s[100];
int i,c=1;
printf("Enter sentence: ");
gets(s);
for(i=0;s[i]!='\0';i++){
if(s[i]==' ')
c++;
}
printf("Words=%d",c);
return 0;
}