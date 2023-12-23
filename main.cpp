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

// #define DEBUG
#ifdef DEBUG
#define CONTAINER_DELIMITER ", "
#define CONTAINER_LEFT_BORDER "["
#define CONTAINER_RIGHT_BORDER "]"
#else
#define CONTAINER_DELIMITER " "
#define CONTAINER_LEFT_BORDER ""
#define CONTAINER_RIGHT_BORDER ""
#endif

using namespace std;

namespace my {

#define named(block_name) goto block_name; \
                         block_name##_skip: if (false) \
                         block_name:

#define break(block_name) goto block_name##_skip

#define CIN_INIT(type, v) \
    type v;               \
    cin >> v

#define CIN_INIT_S2(type, v1, v2) \
    type v1, v2;                  \
    cin >> v1 >> v2

#define CIN_INIT_D2(type1, v1, type2, v2) \
    type1 v1;                             \
    type2 v2;                             \
    cin >> v1 >> v2

#define CIN_INIT_S3(type, v1, v2, v3) \
    type v1, v2, v3;                  \
    cin >> v1 >> v2 >> v3

#define CIN_INIT_S4(type, v1, v2, v3, v4) \
    type v1, v2, v3, v4;                  \
    cin >> v1 >> v2 >> v3 >> v4

#define CIN_INIT_D3(type1, v1, type2, v2, type3, v3) \
    type1 v1;                                        \
    type2 v2;                                        \
    type3 v3;                                        \
    cin >> v1 >> v2 >> v3

#define CIN_INIT_S6(type, v1, v2, v3, v4, v5, v6) \
    type v1, v2, v3, v4, v5, v6;                  \
    cin >> v1 >> v2 >> v3 >> v4 >> v5 >> v6

    typedef unsigned int uint;
    typedef long long ll;
    typedef unsigned long long ull;

    template<typename T>
    string to_string(const vector<T>& input) {
        std::stringstream ss;
        ss << CONTAINER_LEFT_BORDER;
        if (input.size() > 0) {
            for (auto it = input.cbegin(); it != --input.cend(); ++it)
                ss << *it << CONTAINER_DELIMITER;
            ss << *--input.end();
        }
        ss << CONTAINER_RIGHT_BORDER;
        return ss.str();
    }

    template<typename T>
    string to_string(const list<T>& input) {
        std::stringstream ss;
        ss << CONTAINER_LEFT_BORDER;
        if (input.size() > 0) {
            for (auto it = input.cbegin(); it != --input.cend(); ++it)
                ss << *it << CONTAINER_DELIMITER;
            ss << *--input.end();
        }
        ss << CONTAINER_RIGHT_BORDER;
        return ss.str();
    }

    template<typename T1, typename T2>
    string to_string(const pair<T1, T2>& input) {
        std::stringstream ss;
        ss << input.first << CONTAINER_DELIMITER << input.second;
        return ss.str();
    }

    template<typename T>
    ostream& operator<<(ostream& os, const vector<T>& input) {
        os << to_string<T>(input);
        return os;
    }

    template<typename T>
    ostream& operator<<(ostream& os, const list<T>& input) {
        os << to_string<T>(input);
        return os;
    }

    template<typename T1, typename T2>
    ostream& operator<<(ostream& os, const pair<T1, T2>& input) {
        os << to_string<T1, T2>(input);
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

void solution_X() {

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solution_X();

    return 0;
}