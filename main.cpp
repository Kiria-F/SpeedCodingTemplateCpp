#include <utility>
#include <algorithm>
#include <array>
#include <vector>
#include <iostream>
#include <queue>
#include <sstream>
#include <string>
#include <numeric>
#include <map>
#include <list>
#include <set>
#include <stack>
#include <random>
#include <unordered_set>
#include <unordered_map>

using namespace std;

namespace my {

#define CIN_INIT(type, v) \
    type v;               \
    cin >> v;

#define CIN_INIT_S2(type, v1, v2) \
    type v1, v2;                  \
    cin >> v1 >> v2;

#define CIN_INIT_D2(type1, v1, type2, v2) \
    type1 v1;                             \
    type2 v2;                             \
    cin >> v1 >> v2;

#define CIN_INIT_S3(type, v1, v2, v3) \
    type v1, v2, v3;                  \
    cin >> v1 >> v2 >> v3;

#define CIN_INIT_D3(type1, v1, type2, v2, type3, v3) \
    type1 v1;                                        \
    type2 v2;                                        \
    type3 v3;                                        \
    cin >> v1 >> v2 >> v3;

    typedef unsigned int uint;
    typedef long long ll;
    typedef unsigned long long ull;

    template<typename T>
    string to_string(const vector<T>& input) {
        std::stringstream ss;
        ss << "[";
        if (input.size() > 0) {
            for (auto it = input.cbegin(); it < --input.cend(); ++it)
                ss << *it << ", ";
            ss << *--input.end();
        }
        ss << "]";
        return ss.str();
    }

    template<typename T>
    ostream& operator<<(ostream& os, const vector<T>& input) {
        os << to_string<T>(input);
        return os;
    }

    ll bin_power(ll a, ll b, ll mod) {
        ll res = 1;
        while (b) {
            if (b & 1) {
                res = res * a % mod;
            }
            a = a * a % mod;
            b >>= 1;
        }
        return res;
    }

    ll bin_power(ll a, ll b) {
        ll res = 1;
        while (b) {
            if (b & 1) {
                res = res * a;
            }
            a = a * a;
            b >>= 1;
        }
        return res;
    }
}

using namespace my;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    return 0;
}