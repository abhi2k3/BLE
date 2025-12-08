#include <stdio.h>

struct Normal {
    char a;
    int b;
    char c;
};

#pragma pack(push, 1)
struct Packed1 {
    char a;
    int b;
    char c;
};
#pragma pack(pop)

struct Packed2 {
    char a;
    int b;
    char c;
} __attribute__((packed));

struct Packed3 {
    char a;
    int b;
    char c;
} __attribute__((aligned(8)));

int main() {
    printf("Normal    = %lu\n", sizeof(struct Normal));
    printf("Packed1   = %lu\n", sizeof(struct Packed1));
    printf("Packed2   = %lu\n", sizeof(struct Packed2));
    printf("Packed3   = %lu\n", sizeof(struct Packed3));
}
