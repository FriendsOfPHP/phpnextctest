struct Point {
    int x;
    int y;
};

int main(void) {
    struct Point p = {
        .y = 2,
        .x = 1,
    };
    return !(p.x == 1 && p.y == 2);
}

