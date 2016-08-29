#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

struct person {
    char pn[20];
    int dd, mm, yyyy;

    bool operator < (const person& p) const {
        if(this->yyyy != p.yyyy)
            return (this->yyyy < p.yyyy);
        else if(this->mm != p.mm)
            return (this->mm < p.mm);
        else
            return (this->dd < p.dd);
    }
};

int main() {
    int n;
    cin>>n;
    vector<person> a;
    while(n--) {
        person p;
        cin>>p.pn>>p.dd>>p.mm>>p.yyyy;
        a.push_back(p);
    }
    sort(a.begin(), a.end());
    cout<<a[a.size()-1].pn<<endl<<a[0].pn<<endl;
}
