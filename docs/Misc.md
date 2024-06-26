# Misc

## Theorems
### Description
Theorems.
### Test Status
No test.

## Stable Marriage
### Description
Stable Marriage algo.
### Test Status
No test needed.

## Weight Matroid Intersection
### Description
Almost an implementation.
### Test Status
Copied from NaCl

## Bitset LCS
### Description
$O(n^2/w)$. need hand-written bitset (needs subtraction)
TODO: Find a way to recove the answer. [Prob](https://tioj.ck.tp.edu.tw/problems/2010)

### Test Status
Passed [LibreOJ #6564](https://loj.ac/s/1914563)

## Prefix Substring LCS
### Description
Calculate the LCS of a prefix of $S$ and a substring of $T$ in $O((|S||T| + Q)\log |T|)$
### Test Status
Passed [yosupo library checker](https://judge.yosupo.jp/submission/163705). Copied from 8BQube.

## Convex 1D/1D DP
### Description
1D/1D optimization.
### Test Status
[TIOJ 烏龜疊疊樂](https://tioj.ck.tp.edu.tw/submissions/364949)
submission: https://tioj.ck.tp.edu.tw/submissions/371263
Passed [Min Plus Convolution](https://judge.yosupo.jp/submission/195000). (Be careful that there is no $j=i$ considered)

## ConvexHull Optimization
### Description
Maintain upper envelope of lines.
### Test Status
Passed [yosupo library checker](https://judge.yosupo.jp/submission/163740).

## Min Plus Convolution
### Description
Monotone minima method of min plus convolution.
### Test Status
Passed [library checker](https://judge.yosupo.jp/submission/190310).

## SMAWK
### Description
SMAWK algo.
ref: maspy and abc
### Test Status
Passed [min plus convolution](https://judge.yosupo.jp/submission/193574).

## De-Bruijn
### Description
De-Bruijn sequence construction
### Test Status
Passed CSES, [regional prob](https://codeforces.com/gym/102001/problem/C) and local test.

## Josephus Problem
### Description
Josephus problem $O(K)$ and faster algo ($O(M\log N)$).

TODO: is `kth` $O(min(K, M\log N))$?
### Test Status
Passed [2018 Asia Nanjing](https://codeforces.com/gym/101955/submission/235686980).

## N Queens Problem
### Description
N Queens Problem construction
### Test Status
Not even used or tested.

## Tree Knapsack
### Description
TODO
don't know its usage
### Test Status
Not even used or tested.

## Manhattan MST
### Description
Minimum Spanning Tree of manhattan distance.
### Test Status
Passed [yosupo library checker](https://judge.yosupo.jp/submission/69901).

## Binary Search On Fraction
### Description
Binary search on stern-borcot tree, binary search
over $p/q$ such that $0 \leq p, q \leq N$.

Copied from NaCl.
### Test Status
Passed [Sugar water 2](https://atcoder.jp/contests/abc294/submissions/50444921).

## Cartesian Tree
### Description
ref: https://github.com/yosupo06/library-checker-problems/tree/master/graph/cartesian_tree
### Test Status
Passed [library checker](https://judge.yosupo.jp/submission/190941).

## Nim Product
### Description
Nim product
ref: [ecnerwala](https://github.com/ecnerwala/cp-book/blob/master/src/nim_prod.hpp) and [correct.cpp](https://github.com/ecnerwala/cp-book/blob/master/src/nim_prod.hpp).
### Test Status
Passed [library checker](https://judge.yosupo.jp/submission/189942). Relatively slow.
