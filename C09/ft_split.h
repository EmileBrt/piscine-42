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