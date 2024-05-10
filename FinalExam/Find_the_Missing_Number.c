#include <stdio.h>

int main() {
    int test;
    scanf("%d", &test);
    
    for (int t = 0; t < test; t++) {
        long long int m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
        
        long long int total = a * b * c;
        long long int missing_number = (m == 0) ? 0 : (m % total == 0) ? m / total : -1;
        
        printf("%lld\n", missing_number);
    }
    return 0;
}
