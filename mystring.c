#include <stdio.h>

int mystrlen( char *s ){
    int count = 0;
    int i;
    for( i = 0; s[i]!='\0'; i++){
        count++;
    }
    return count;
}
char * mystrcpy( char *dest, char *source ){
    int i; 
    for(i = 0; i < n; i++){
        dest[i] = source[i];
    }
    return dest;
}
char * mystrncpy( char *dest, char *source, int n){
    int i;
    for(i = 0; i < n; i++){
        dest[i] = source[i];
    }
    return dest;
}
char * mystrncat( char *dest, char *source, int n){

}
int mystrcmp( char *s1, char *s2 ){

}
char * mystrchr( char *s, char c ){

}
