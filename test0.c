#include <stddef.h>

struct sstring {
    size_t len;
    char *val;
};

static struct sstring str;

int main(void) {
    str = (struct sstring) {
        .len = sizeof("hello, world") - 1,
        .val = "hello, world",
    };
    return !(str.len == sizeof("hello, world") - 1); 
}

