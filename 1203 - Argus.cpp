#include <queue>
#include <iostream>

using namespace std;

struct query {
    int qn, p, prox;
    bool operator < (const query& q) const {
        if(prox != q.prox)
            return (prox > q.prox);
        else
            return (qn > q.qn);
    }
};

int main() {
    int qn, p;
    string reg;
    priority_queue<query> pq;
    query q;
    while(cin>>reg) {
        if(reg.compare("#") == 0) break;
        cin>>qn>>p;
        q.qn = qn;
        q.p = p;
        q.prox = p;
        pq.push(q);
    }
    int k;
    cin>>k;
    while(k--) {
        q = pq.top();
        pq.pop();
        cout<<q.qn<<endl;
        q.prox += q.p;
        pq.push(q);
    }
}
