#include <stdio.h>
const char* reverse_str(const char* source, char* dest){
    int len =0 , i;
    while( source[len]!='\0'){
        len +=1;
    }
    for(i=0; i< len; i++){
        dest[len-i-1] = source[i];
    }
    dest[len] = '\0';
    return dest;
}

int main(){
    char src[100], dest[100];
    printf("enter your word here (note: please enter only 1 word max length 99) :\n");
    scanf("%99s", src);
    printf("reversed string is : %s\n", reverse_str(src, dest));
    return 0;
}
