#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#define repeat(i,n) for (int i = 0; (i) < (n); ++(i))
template <class T> bool setmax(T & l, T const & r) { if (not (l < r)) return false; l = r; return true; }
using namespace std;

template <typename T>
struct binary_indexed_tree { // on monoid
    vector<T> a;
    T unit;
    function<T (T,T)> append; // associative
    template <typename F>
    binary_indexed_tree(size_t n, T a_unit, F a_append) : a(n, a_unit), unit(a_unit), append(a_append) {}
    void point_append(size_t i, T w) { // a[i] += w
        for (size_t j = i+1; j <= a.size(); j += j & -j) a[j-1] = append(a[j-1], w);
    }
    int initial_range_concat(size_t i) { // sum [0, i)
        T acc = unit;
        for (size_t j = i; 0 < j; j -= j & -j) acc = append(acc, a[j-1]);
        return acc;
    }
};

struct point_t { int y, x; };
pair<int,int> to_pair(point_t a) { return { a.y, a.x }; }
bool operator < (point_t a, point_t b) { return to_pair(a) < to_pair(b); }
istream & operator >> (istream & in, point_t & a) { return in >> a.x >> a.y; }

int main() {
    int n; cin >> n;
    vector<point_t> ps(n); repeat (i,n) cin >> ps[i];
    sort(ps.begin(), ps.end()); // with y
    int x_max = 0; for (auto p : ps) setmax(x_max, p.x);
    binary_indexed_tree<int> bit(x_max + 1, 0, [&](int a, int b) { return max(a, b); });
    vector<int> temp(n);
    for (int i = 0; i < n; ) {
        for (int j = i; j < n and ps[j].y == ps[i].y; ++ j) {
            temp[j] = bit.initial_range_concat(ps[j].x) + 1;
        }
        int j;
        for (j = i; j < n and ps[j].y == ps[i].y; ++ j) {
            bit.point_append(ps[j].x, temp[j]);
        }
        i = j;
    }
    cout << bit.initial_range_concat(x_max + 1) << endl;
    return 0;
}
