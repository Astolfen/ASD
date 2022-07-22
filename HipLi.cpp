#include "HipLi.h"

bool isHeap(int n) {
    int a[n];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    for (int i = 1; i < n; i++) {
        if (a[i] < a[(i - 1) / 2])
            return false;
    }

    return true;
}