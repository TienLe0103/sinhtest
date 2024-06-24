#include <bits/stdc++.h>
#pragma  GCC optimize("03,unroll-loops")
#pragma  GCC target ("avx2")
#define  frr(x, l, r) for (int x = l; x <= r; x++)
using    namespace std;

const string NAME = "";

long long Rand(long long l, long long r){
    return l + ((long long)rand() * (RAND_MAX + 1) * (RAND_MAX + 1) * (RAND_MAX + 1) +
                (long long)rand() * (RAND_MAX + 1) * (RAND_MAX + 1) +
                (long long)rand() * (RAND_MAX + 1) +
                rand()) % (r - l + 1);
}

void sinh(int x) {
    ofstream o((to_string(x) + ".inp").c_str());

}

// const int Ntest = 15;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    srand(time(NULL));
    int Ntest; cin >> Ntest;

    for (int i = 1; i <= Ntest; i++) {
        sinh(i);
    }

    return 0;
}