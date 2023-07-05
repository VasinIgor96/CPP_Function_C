#include <cstdlib>

int mystrcmp(const char* str1, const char* str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }

    if (*str1 == *str2) {
        return 0;  
    }
    else if (*str1 > *str2) {
        return 1;  
    }
    else {
        return -1; 
    }
}

int StringToNumber(char* str) {
    return atoi(str);
}

char* NumberToString(int number) {
    char* str = (char*)malloc(sizeof(char) * 12); 
    sprintf(str, "%d", number);
    return str;
}

char* Uppercase(char* str) {
    char* ptr = str;
    while (*ptr) {
        if (*ptr >= 'a' && *ptr <= 'z') {
            *ptr = *ptr - 'a' + 'A';
        }
        ptr++;
    }
    return str;
}

char* Lowercase(char* str) {
    char* ptr = str;
    while (*ptr) {
        if (*ptr >= 'A' && *ptr <= 'Z') {
            *ptr = *ptr - 'A' + 'a';
        }
        ptr++;
    }
    return str;
}

char* mystrrev(char* str) {
    int length = mystrlen(str);
    int i = 0;
    int j = length - 1;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return str;
}

int mystrlen(const char* str) {
    int length = 0;
    while (*str) {
        length++;
        str++;
    }
    return length;
}

char* mystrcpy(char* str1, const char* str2) {
    char* ptr = str1;
    while (*str2) {
        *ptr = *str2;
        ptr++;
        str2++;
    }
    *ptr = '\0'; 
    return str1;
}

char* mystrcat(char* str1, const char* str2) {
    char* ptr = str1 + mystrlen(str1); 
    while (*str2) {
        *ptr = *str2;
        ptr++;
        str2++;
    }
    *ptr = '\0'; 
}

char* mystrchr(char* str, char s) {
    while (*str) {
        if (*str == s) {
            return str;
        }
        str++;
    }
    return NULL; 
}

char* mystrstr(char* str1, char* str2) {
    while (*str1) {
        char* ptr1 = str1;
        char* ptr2 = str2;
        while (*ptr1 && *ptr2 && (*ptr1 == *ptr2)) {
            ptr1++;
            ptr2++;
        }
        if (!*ptr2) {
            return str1; 
        }
        str1++;
    }
    return NULL; 
}
