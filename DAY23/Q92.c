//maximum occuring character

#include<stdio.h>
#include<string.h>
int main(){
char s[100];
int i,j,c,max=0;
char ch;
printf("Enter string: ");
gets(s);
for(i=0;s[i]!='\0';i++){
c=1;
for(j=i+1;s[j]!='\0';j++){
if(s[i]==s[j])
c++;
}
if(c>max){
max=c;
ch=s[i];
}
}
printf("Maximum occurring character: %c",ch);
return 0;
}