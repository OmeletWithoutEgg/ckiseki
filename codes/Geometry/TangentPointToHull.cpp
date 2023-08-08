// ref: codeforces.com/gym/101201/submission/36665988
// please ensure that point strictly out of hull
pair<int, int> get_tangent(const vector<P> &v, P p) {
    const int N = v.size();
    if (p == v[0]) return {-1, -1};
    const auto cmp = [w = conj(v[0] - p)](P a, P b) {
        int qa = quad(a * w), qb = quad(b * w);
        if (qa != qb) return sgn(qa - qb);
        return sgn(cross(b, a));
    };
    const auto gao = [&](int s) {
        const auto lt = [&](int x, int y) {
          if (int c = cmp(v[x%N]-p, v[y%N]-p))
            return c == s;
          return norm(v[x%N]-p) < norm(v[y%N]-p);
        };
        int l = 0, r = N; bool up = lt(0, 1);
        while (r - l > 1) {
            int m = (l + r) / 2;
            if (lt(m, 0) ? up : !lt(m, m+1)) r = m;
            else l = m;
        }
        return lt(l, r) ? r : l;
    };
    int a = gao(-1) % N, b = gao(1) % N;
    assert (cmp(v[b] - p, v[a] - p) <= 0);
    if (cmp(v[a] - p, p - v[b]) >= 0) return {-1, -1};
    return make_pair(a, b);
}
