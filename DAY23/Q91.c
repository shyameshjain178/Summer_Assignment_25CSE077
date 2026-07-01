//anagram strings

#include<stdio.h>
#include<string.h>
int main(){
char s1[100],s2[100];
int i,j,l1,l2;
printf("Enter first string: ");
gets(s1);
printf("Enter second string: ");
gets(s2);
l1=strlen(s1);
l2=strlen(s2);
if(l1!=l2){
printf("Not Anagram");
return 0;
}
for(i=0;i<l1-1;i++){
for(j=i+1;j<l1;j++){
if(s1[i]>s1[j]){
char t=s1[i];
s1[i]=s1[j];
s1[j]=t;
}
if(s2[i]>s2[j]){
char t=s2[i];
s2[i]=s2[j];
s2[j]=t;
}
}
}
if(strcmp(s1,s2)==0)
printf("Anagram");
else
printf("Not Anagram");
return 0;
}