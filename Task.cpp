// Функция сравнения двух строк
int mystrcmp(const char* str1, const char* str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return (*(const unsigned char*)str1 - *(const unsigned char*)str2);
}

// Функция конвертации строки в число
int StringToNumber(char* str) {
    int number = 0;
    while (*str) {
        number = number * 10 + (*str - '0');
        str++;
    }
    return number;
}

// Функция конвертации числа в строку
char* NumberToString(int number) {
    static char str[20];
    sprintf(str, "%d", number);
    return str;
}

// Функция преобразования строки в верхний регистр
char* Uppercase(char* str) {
    char* origin = str;
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            *str -= 32;
        }
        str++;
    }
    return origin;
}

// Функция преобразования строки в нижний регистр
char* Lowercase(char* str) {
    char* origin = str;
    while (*str) {
        if (*str >= 'A' && *str <= 'Z') {
            *str += 32;
        }
        str++;
    }
    return origin;
}

// Функция реверсирования строки
char* mystrrev(char* str) {
    int len = strlen(str);
    static char rev[100]; // Предполагаем, что строка не будет длиннее 99 символов
    for (int i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    rev[len] = '\0'; // Добавляем нулевой символ в конец строки
    return rev;
}