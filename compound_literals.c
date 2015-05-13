#include <stddef.h>

struct sstring {
    size_t len;
    char *val;
};

static struct sstring str;

int main(void) {
    str = (struct sstring) {
        sizeof("hello, world") - 1,
        "hello, world"
    };
    return !(str.len == sizeof("hello, world") - 1); 
}

