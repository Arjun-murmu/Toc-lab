#include<stdio.h>
#include<string.h>

int dfa = 0;
void A(char c){
if(c == 'a'){
    dfa = 1;
}
else{
    dfa = -1;
}
}
void B(char c){
if(c == 'a'){
    dfa = 2;
}
else{
    dfa = -1;
}
}
void C(char c){
if(c == 'b'){
    dfa = 3;
}
else if(c == 'a'){
    dfa = 2;
}
else{
    dfa = -1;
}
}
void D(char c){
if(c == 'b'){
    dfa = 4;
}
else if(c == 'a'){
    dfa = 2;
}
else{
    dfa = -1;
}
}
void E(char c){
if(c == 'b'){
    dfa = 4;
}
else if(c == 'a'){
    dfa = 2;
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
    else if(dfa == 2)
    C(str[i]);
    else if(dfa == 3)
    D(str[i]);
    else if(dfa == 4)
    E(str[i]);
    else
    return 0;
 }
 if(dfa == 4)
 return 1;
 else
 return 0;
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