#include<stdio.h>
#include<string.h>

// The strcom() function

int main()
{

    char leftStr[] = "abc";
    char rightStr[] = "abc";

    // Using strcmp()
    int res = strcmp(leftStr, rightStr);

    if (res==0){
        printf("Strings are equal");
    }else{
        printf("Strings are unequal");
    }

    printf("\nValue returned by strcmp() is:  %d" , res);

    return 0;
}
