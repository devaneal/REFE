#include <stdio.h>
#include <string.h>
#include <sys/ptrace.h>
#define GUESS_LENGTH 20
#define BUF_LENGTH 82

char buffer[82] = {
  0x81, 0x5d, 0x31, 0x57, 0x38, 0xc4, 0x57, 0xa9, 0xd8, 0xc4,
  0xa0, 0xd3, 0x6c, 0xd4, 0xd4, 0xd4, 0xd4, 0x3f, 0xe9, 0x13,
  0x91, 0x2c, 0xd4, 0xd4, 0xd4, 0xd4, 0x13, 0x91, 0x28, 0xd4,
  0xd4, 0xd4, 0xd4, 0x3f, 0xcc, 0x5f, 0x81, 0x28, 0x5f, 0x91,
  0xdc, 0xd5, 0x04, 0xdb, 0x62, 0xd4, 0xdb, 0x6a, 0x14, 0xdb,
  0x62, 0x14, 0xd5, 0x91, 0x2c, 0x57, 0x91, 0x28, 0xd5, 0x5f,
  0x91, 0x28, 0xef, 0x91, 0xd8, 0xa8, 0x34, 0x55, 0xa9, 0x2c,
  0x78, 0xd9, 0xd4, 0xd4, 0xdb, 0x40, 0x14, 0xdb, 0x62, 0x14,
  0x1d, 0x17
};

//char buffer[82] = {
//  0x55, 0x89, 0xe5, 0x83, 0xec, 0x10, 0x83, 0x7d, 0x0c, 0x10,
//  0x74, 0x07, 0xb8, 0x00, 0x00, 0x00, 0x00, 0xeb, 0x3d, 0xc7,
//  0x45, 0xf8, 0x00, 0x00, 0x00, 0x00, 0xc7, 0x45, 0xfc, 0x00,
//  0x00, 0x00, 0x00, 0xeb, 0x18, 0x8b, 0x55, 0xfc, 0x8b, 0x45,
//  0x08, 0x01, 0xd0, 0x0f, 0xb6, 0x00, 0x0f, 0xbe, 0xc0, 0x0f,
//  0xb6, 0xc0, 0x01, 0x45, 0xf8, 0x83, 0x45, 0xfc, 0x01, 0x8b,
//  0x45, 0xfc, 0x3b, 0x45, 0x0c, 0x7c, 0xe0, 0x81, 0x7d, 0xf8,
//  0xac, 0x0d, 0x00, 0x00, 0x0f, 0x94, 0xc0, 0x0f, 0xb6, 0xc0,
//  0xc9, 0xc3
//};

// int check_password(char* s, int len) {
//     if (len != 16)
//         return 0;
// 
//     int sum = 0;
//     for (int i=0; i<len; i++)
//         sum += (s[i] & 0xff);
// 
//     printf("%d\n", sum);
//     printf("hi\n");
//     return sum == 3500;
// }

int main() {
    if (ptrace(PTRACE_TRACEME, 0, 1, 0) == -1) {
        printf("no debuggers allowed!\n");
        return 1;
    }

    char xor_key = 0xd4;

    for (int i=0; i<BUF_LENGTH; i++)
        buffer[i] ^= xor_key;

    char buf[GUESS_LENGTH];
    printf("Enter the password: ");
    scanf("%20[^\n]", buf);

    int (*f)(char*, int) = ((int (*)(char*, int))buffer);
    if (f(buf, strlen(buf)))
        printf("Congratulations!!!\n");
    else
        printf("Try again.\n");

    return 0;
}
