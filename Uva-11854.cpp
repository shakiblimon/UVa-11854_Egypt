//UVa-11854_Egypt_ by _ Shakib Limon
A long time ago, the Egyptians figured out that a triangle with sides of length 3, 4, and 5 had a right angle as its largest angle. You must determine if other triangles have a similar property

#include<algorithm>
#include <cstdio>

using namespace std;

int main () {
    int a, b, c;
    for (;;) {
        scanf("%d %d %d", &a, &b, &c);
        if (a > c) swap(a, c);
        if (b > c) swap(b, c);
        if (a == 0 && b == 0 && c == 0) break;
        printf((a * a + b * b == c * c)? "right\n" : "wrong\n");
    }
}
