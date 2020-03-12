#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
#define INF 10000000000
using namespace std;
using ll = long long;
//区間和
struct SegmentTree
{
private:
    int n;
    vector<int> node;

public:
    SegmentTree(vector<int> v)
    {
        int sz = (int)v.size();
        n = 1;
        while (n < sz)
            n *= 2;
        node.resize(2 * n - 1, 0);

        for (int i = 0; i < sz; i++)
            node[i + n - 1] = v[i];
        for (int i = n - 2; i >= 0; i--)
            node[i] = node[i * 2 + 1] + node[i * 2 + 2];
    }

    void add(int k, int val)
    {
        k += (n - 1);
        node[k] += val;

        while (k > 0)
        {
            k = (k - 1) / 2;
            node[k] = node[2 * k + 1] + node[2 * k + 2];
        }
    }

    int getsum(int a, int b, int k = 0, int l = 0, int r = -1)
    {
        if (r < 0)
            r = n;
        if (b <= l || r <= a)
            return 0;
        if (a <= l && r <= b)
            return node[k];

        int vl = getsum(a, b, 2 * k + 1, l, (l + r) / 2);
        int vr = getsum(a, b, 2 * k + 2, (l + r) / 2, r);
        return vl + vr;
    }
};

struct SegmentTree{
    private:
        int n;
        vector<int> node;

    public:

        SegmentTree(vector<int> v){
            int siz = v.size();
            n = 1;
            while(n < siz)
                n *= 2;
            node.resize(2 * n - 1, INF);

            for (int i = 0; i < siz;i++){
                node[i + n - 1] = v[i];
            }
            for (int i = n - 2; i >= 0;i--){
                node[i] = min(node[2 * i - 1], node[2 * i + 2]);
            }
        }

        void update(int x, int val){
            x += (n - 1);

            node[x] = val;
            while(x>0){
                x = (x - 1) / 2;
                node[x] = min(node[2 * x + 1], node[2 * x + 2]);
            }
        }
        //[a,b)の最小値を求める。
        int getmin(int a, int b, int k = 0,int l=0, int r = -1){
            if(r<0)
                r = n;
            if(r <= a || b <= 1)
                return INF;
            if(a <= l && r <= b)
                return node[k];
            int vl = getmin(a, b, 2 * k + 1, l, (l + r) / 2);
            int vr = getmin(a, b, 2 * k + 2, (l + r) / 2, r);
            return min(vl, vr);

        }
};
/*
int main()
{
    cin >> N >> Q;
    SegmentTree seg(vector<int>(N, INF));
    for (int i = 0; i < Q; i++)
    {
        int c, x, y;
        cin >> c >> x >> y;
        if (c == 0)
            seg.update(x, y);
        else
            cout << seg.getmin(x, y + 1) << endl;
    }
}int main() {
    int n, q; cin >> n >> q;
    SegmentTree seg( vector<int>(n, 0) );
    for(int i=0; i<q; i++) {
        int c, x, y; cin >> c >> x >> y;
        if(c == 0) seg.add(x-1, y);
        else cout << seg.getsum(x-1, y) << endl;
    }
    return 0;    
}