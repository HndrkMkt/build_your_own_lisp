#include <stdio.h>

void put_hello_world(int n) {
    for (int i = 0; i < n; i++) {
        puts("Hello World!");
    }
}

int main(int argc, char** argv) {
    put_hello_world(5);
    return 0;
}
