#include <iostream>

class Solution {
  public:
    void choose_sort(int a[], int len) {
        for (int i = 0; i < len - 1; ++i) {
            int min = i;
            for (int j = i + 1; j < len; ++j) {
                if (a[j] < a[min]) {
                    min = j;
                }
            }
            if (min != i) {
                swap(a, i, min);
            }
        }
    }
    void dump(int a[], int len) {
        for (int i = 0; i < len; ++i) std::cout << a[i] << std::endl;
    }
  private:
    void swap(int a[], int i, int j) {
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }
};

int main() {
    int a[] = {2,2,54,6,2,6,9,1, 8, 7, 1, 4, 3};
    Solution so;
    so.choose_sort(a, sizeof(a)/sizeof(a[0]));
    so.dump(a, sizeof(a)/sizeof(a[0]));
    return 0;
}
