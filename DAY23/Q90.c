//first repeatig character

#include<stdio.h>
#include<string.h>
int main(){
char s[100];
int i,j;
printf("Enter string: ");
gets(s);
for(i=0;s[i]!='\0';i++){
for(j=i+1;s[j]!='\0';j++){
if(s[i]==s[j]){
printf("First repeating character: %c",s[i]);
return 0;
}
}
}
printf("No repeating character");
return 0;
}