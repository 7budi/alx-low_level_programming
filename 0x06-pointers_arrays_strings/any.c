#include <stdio.h>
#include <string.h>
char *_strcat(char *dest, char *src){
    int l1,l2;
    l1 = strlen(dest);
    l2 = strlen(src);
    
    for (int i = 0; i <= l2; i++){
        dest[l2+i] = src[i];
    }
    return (dest);
}
int main() {
   char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);

    return 0;
}
