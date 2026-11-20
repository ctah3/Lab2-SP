#include <iostream>
#include <vector>
#include <cmath>

void compute(std::vector<float>& a, const std::vector<float>& b, const std::vector<float>& c) {
    for (size_t i = 0; i < a.size(); ++i) {
        a[i] = b[i] * c[i] + b[i];
    }
}

int main() {
    const size_t N = 50000000;
    std::vector<float> a(N, 0.0f);
    std::vector<float> b(N, 1.5f);
    std::vector<float> c(N, 2.5f);

    for (int iter = 0; iter < 50; ++iter) {
        compute(a, b, c);
    }

    std::cout << "Done: " << a[0] << std::endl;
    return 0;
}
