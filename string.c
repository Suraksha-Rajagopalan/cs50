#include <stdio.h>
#include <string.h>
int main()
{
    char a[20] = "Program";
    char b[20] = {'P', 'r', 'o', 'g', 'r', 'a', 'm', '\0'};

    // using the %zu format specifier to print size_t
    printf("Length of string a = %lu \n", strlen(a));
    printf("Length of string b = %lu \n", strlen(b));

    char c[20]={};
    
    // the copy of the string
    strcpy(c,a);
    printf("The copy of the string is= %s \n",c);


    // here the two strings c and d are concatinated and the resultant string gets stored in c
    // here string d gets added after string c
    char d[20]="ing is best";
    printf("The concatinated string is= %s \n",strcat(c,d));
    printf("String c is: %s\n",c);

    
    // concatenates (appends) portion of one string at the end of another string
    printf("The concatination up to a part of a string is: %s \n",strncat(c,a,3));
    

    //copies portion of contents of one string into another string
    char e[20]={};
    printf("The copy of part of a string is: %s\n",strncpy(e,c,5));


    //compares two given strings and returns zero if they are same.
    //If length of string1 < string2, it returns < 0 value. If length of string1 > string2, it returns > 0 value. 
    printf("Checking if string a and b are same or not: %d\n",strcmp(a,b));
    printf("Checking if string b and c are same or not: %d\n",strcmp(b,c));
    printf("Checking if d and c are same string or not: %d\n",strcmp(d,c));


    //strcmpi( ) function in C is same as strcmp() function. But, strcmpi( ) function is not case sensitive. i.e, “A” and “a” are treated as same characters.
    // Where as, strcmp() function treats “A” and “a” as different characters.
    char f[20]="program";
    printf("Checking the strings via strcmpi(): %d\n",strcmpi(a,f));
    printf("Checking the strings via strcmp(): %d\n",strcmp(a,f)); //The ASCII value of 'P' < 'p'


    // strchr( ) function returns pointer to the first occurrence of the character in a given string.
    char *p;
    p = strchr(c,'m');
    printf("Character i is found at position: %ld\n",p-c+1);
    
    
    // strrchr( ) function in C returns pointer to the last occurrence of the character in a given string.
    char string[55] ="This is a string for testing";
    char *q;
    q = strrchr (string,'i');
    printf ("Character i is found at position %ld\n",q-string+1);
    
    
    // strstr( ) function returns pointer to the first occurrence of the string in a given string.
    char *r;
    r = strstr (string,"test");
    printf ("First occurrence of string test in %s is %s\n",string, p);
    
    
    // strdup( ) function in C duplicates the given string.
    char *p1 = "Raja";
    char *p2;
    p2 = strdup(p1);
    printf("Duplicated string is : %s\n", p2);
    
    
    // strlwr( ) function converts a given string into lowercase.
    char str[55] = "MODIFY This String To LOwer";
    printf("%s\n",strlwr(str));


    // strupr( ) function converts a given string into uppercase.
    char str1[55] = "MODIFY This String To UppeR";
    printf("%s\n",strupr(str1));


    // strrev( ) function reverses a given string in C language
    char str2[55] = "THe reverse of the string is";
    printf("%s\n",strrev(str2));


    // strset( ) function sets all the characters in a string to given character.
    char str3[20] = "Test String";
    printf("Test string after strset() : %s",strset(str,'#'));
    printf("After string set: %s\n",str);


    // strnset( ) function sets portion of characters in a string to given character.
    char str4[55] = "Test String";
    printf("Original string is : %s", str);
    printf("Test string after string n set : %s", strnset(str,'#',4));
    printf("After string n set : %s\n", str);


    // strtok( ) function in C tokenizes/parses the given string using delimiter.
    char string[50] ="Test,string1,Test,string2:Test:string3";
    char *str4;
    printf ("String  \"%s\" is split into tokens:\n",string);
    str4 = strtok (string,",:");
    while (p!= NULL)
    {
        printf ("%s\n",p);
        str4 = strtok (NULL, ",:");
    }

    return 0;
}