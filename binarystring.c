#include<stdio.h>
#include<string.h>

int dfa = 0;
void A(char c){
if(c == '0'){
    dfa = 1;
}
else if(c == '1'){
    dfa = 1;
}
else{
    dfa = -1;
}
}
void B(char c){
if(c == '0'){
    dfa = 1;
}
else if(c == '1'){
    dfa = 1;
}
else{
    dfa = -1;
}
}

int accepted(char str[]){
 int i,len = strlen(str);
 for(i = 0;i<len;i++){
    if(dfa == 0)
    A(str[i]);
    else if(dfa == 1)
    B(str[i]);
    else
    return 0;
 }
 if(dfa == 1)
 return 1; //accepted
 else
 return 0; // not accepted
}
int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);
    if(accepted(str)){
        printf("Accepted.");
    }
    else{
        printf("Not accepted.");
    }
    return 0;
}