#include <stdio.h>
#include <sys/mman.h>
#include <string.h>
#define BUF_LEN 71
#define GUESS_LEN 125

// /* hash function in bytes xored with 0xe0 */
char code[BUF_LEN] = {
  0xb5, 0x69, 0x05, 0x63, 0x0c, 0xf0, 0x27, 0xa5, 0x14, 0xe1, 
  0xe0, 0xe0, 0xe0, 0x27, 0xa5, 0x18, 0xe0, 0xe0, 0xe0, 0xe0, 
  0x0b, 0xc4, 0x6b, 0xb5, 0x18, 0x6b, 0xa5, 0xe8, 0xe1, 0x30, 
  0xef, 0x56, 0xe0, 0xef, 0x5e, 0x20, 0xc5, 0x1f, 0xe0, 0xe0, 
  0xe0, 0x69, 0xa5, 0x1c, 0x6b, 0xa5, 0x14, 0xef, 0x4f, 0xa5, 
  0x1c, 0x69, 0xa5, 0x14, 0x63, 0xa5, 0x18, 0xe1, 0x6b, 0xa5, 
  0x18, 0xdb, 0xa5, 0xec, 0x9c, 0x34, 0x6b, 0xa5, 0x14, 0x29, 
  0x23, 
};

// /* hash function in bytes */
// char code[BUF_LEN] = {
//   0x55, 0x89, 0xe5, 0x83, 0xec, 0x10, 0xc7, 0x45, 0xf4, 0x01, 
//   0x00, 0x00, 0x00, 0xc7, 0x45, 0xf8, 0x00, 0x00, 0x00, 0x00, 
//   0xeb, 0x24, 0x8b, 0x55, 0xf8, 0x8b, 0x45, 0x08, 0x01, 0xd0, 
//   0x0f, 0xb6, 0x00, 0x0f, 0xbe, 0xc0, 0x25, 0xff, 0x00, 0x00, 
//   0x00, 0x89, 0x45, 0xfc, 0x8b, 0x45, 0xf4, 0x0f, 0xaf, 0x45, 
//   0xfc, 0x89, 0x45, 0xf4, 0x83, 0x45, 0xf8, 0x01, 0x8b, 0x45, 
//   0xf8, 0x3b, 0x45, 0x0c, 0x7c, 0xd4, 0x8b, 0x45, 0xf4, 0xc9, 
//   0xc3
// };

// /* Original hash function */
// unsigned int hash(char* s, int len) {
//     unsigned int ret = 1;
// 
//     for (int i=0; i<len; i++) {
//         unsigned int low_byte = s[i] & 0xff;
//         ret = ret * low_byte;
//     }
// 
//     return ret;
// }

int main (void) {
    char guess[GUESS_LEN];
    printf("Password: ");
    scanf("%120s", guess);

    unsigned int xor_key = 0xe0;
    for (int i=0; i<BUF_LEN; i++)
        code[i] ^= xor_key;

    // /* calculate hash with code */
    // unsigned int k = hash(guess, strlen(guess));

    /* calculate hash with byte array */
    unsigned int k = ((unsigned int (*) (char*, int))code)(guess, strlen(guess));

    if (k == 3939343676)
        printf("Correct!\n");
    else
        printf("Try again.\n");

    return 0;
}
