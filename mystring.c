#include <stdio.h>

int mystrlen( char *s ){
    int count = 0;
    int i;
    for( i = 0; s[i]!='\0'; i++){
        count++;
    }
    return count;
}

char * mystrncpy( char *dest, char *source, int n){

}
char * mystrncat( char *dest, char *source, int n){

}
int mystrcmp( char *s1, char *s2 ){

}
char * mystrchr( char *s, char c ){

}
