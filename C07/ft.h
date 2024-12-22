#include <stdlib.h>

//C07-00
char* ft_strdup(char *src){
    int size = 0;
    while(src[size] != '\0') size ++;
    char *res = (char *)malloc(size * sizeof(char));
    for(int i = 0; i < size; i++)res[i] = src[i];
    res[size] = '\0';
    return res;    
};

//C07-01
int *ft_range(int min, int max) {
    int size = max - min;
    if (size <= 0) {
        return NULL;
    }
    int *res = (int *)malloc(size * sizeof(int));
    if (res == NULL) {
        return NULL; 
    }
    for (int i = 0; i < size; i++) {
        res[i] = min + i;
    }
    return res;
}

//C07-02
int ft_ultimate_range(int **range, int min, int max) {
    int size = max - min;
    if (range == NULL) {
        return -1;
    }
    if (min >= max) {
        *range = NULL;
        return 0; 
    }

    *range = (int *)malloc(size * sizeof(int));
    if (*range == NULL) {
        return -1;
    }

    for (int i = 0; i < size; i++) {
        (*range)[i] = min + i;
    }

    return size; 
}

//C07-03
int ft_strlen(char *str) {
    int len = 0;
    while (str[len]) {
        len++;
    }
    return len;
}

char *ft_strjoin(int size, char **strs, char *sep) {
    int total_length = 0;
    int sep_length = ft_strlen(sep);
    int i;

    for (i = 0; i < size; i++) {
        total_length += ft_strlen(strs[i]);
        if (i < size - 1) {
            total_length += sep_length;
        }
    }

    char *result = (char *)malloc(total_length + 1);
    if (!result) {
        return NULL;
    }

    int pos = 0;
    for (i = 0; i < size; i++) {
        int len = ft_strlen(strs[i]);
        for (int j = 0; j < len; j++) {
            result[pos++] = strs[i][j];
        }
        if (i < size - 1) {
            for (int j = 0; j < sep_length; j++) {
                result[pos++] = sep[j];
            }
        }
    }
    result[pos] = '\0';

    return result;
}

//C07-04 BOORRING

//C07-05
int is_separator(char c, char *charset) {
    while (*charset) {
        if (c == *charset) {
            return 1;
        }
        charset++;
    }
    return 0;
}

int count_substrings(char *str, char *charset) {
    int count = 0;
    int in_word = 0;

    while (*str) {
        if (!is_separator(*str, charset)) {
            if (!in_word) {
                in_word = 1;
                count++;
            }
        } else {
            in_word = 0;
        }
        str++;
    }
    return count;
}

char *copy_substring(char *start, char *end) {
    int length = end - start;
    char *substring = (char *)malloc((length + 1) * sizeof(char));
    if (!substring) {
        return NULL;
    }
    for (int i = 0; i < length; i++) {
        substring[i] = start[i];
    }
    substring[length] = '\0';
    return substring;
}

char **ft_split(char *str, char *charset) {
    int count = count_substrings(str, charset);
    char **result = (char **)malloc((count + 1) * sizeof(char *));
    if (!result) {
        return NULL;
    }

    int index = 0;
    char *start = str;
    int in_word = 0;

    while (*str) {
        if (!is_separator(*str, charset)) {
            if (!in_word) {
                in_word = 1;
                start = str;
            }
        } else {
            if (in_word) {
                in_word = 0;
                result[index++] = copy_substring(start, str);
            }
        }
        str++;
    }

    if (in_word) {
        result[index++] = copy_substring(start, str);
    }

    result[index] = NULL;
    return result;
}