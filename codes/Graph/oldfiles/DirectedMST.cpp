struct Edge { int u, v, w; };
struct DirectedMST { // find maximum
  int solve(vector<Edge> E, int root, int n) {
    int ans = 0;
    while (true) {
      // find best in edge
      vector<int> in(n, -inf), prv(n, -1);
      for (auto e : E)
        if (e.u != e.v && e.w > in[e.v]) {
          in[e.v] = e.w;
          prv[e.v] = e.u;
        }
      in[root] = 0; prv[root] = -1;
      for (int i = 0; i < n; i++)
        if (in[i] == -inf) return -inf;
      // find cycle
      int tot = 0;
      vector<int> id(n, -1), vis(n, -1);
      for (int i = 0; i < n; i++) {
        ans += in[i];
        for (int x = i; x != -1 && id[x] == -1; x = prv[x]) {
          if (vis[x] == i) {
            for (int y = prv[x]; y != x; y = prv[y])
              id[y] = tot;
            id[x] = tot++;
            break;
          }
          vis[x] = i;
        }
      }
      if (!tot) return ans;
      for (int i = 0; i < n; i++)
        if (id[i] == -1) id[i] = tot++;
      for (auto &e : E) {
        if (id[e.u] != id[e.v]) e.w -= in[e.v];
        e.u = id[e.u], e.v = id[e.v];
      }
      n = tot; root = id[root];
    }
  }
} DMST;
