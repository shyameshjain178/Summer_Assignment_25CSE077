//first non repeating character

#include<stdio.h>
#include<string.h>
int main(){
char s[100];
int i,j,f;
printf("Enter string: ");
gets(s);
for(i=0;s[i]!='\0';i++){
f=0;
for(j=0;s[j]!='\0';j++){
if(i!=j&&s[i]==s[j]){
f=1;
break;
}
}
if(f==0){
printf("First non-repeating character: %c",s[i]);
return 0;
}
}
printf("No non-repeating character");
return 0;
}