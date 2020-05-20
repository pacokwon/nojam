#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin>>n;
    int num[n];
    vector<char> ret;
    stack<int> st;

    for (int i=0; i<n; i++) cin>>num[i];

    int idx=0;
    for (int i=1; i<=n; i++) {
        st.push(i);
        ret.push_back('+');

        while (!st.empty() && st.top() == num[idx]) {
            idx++;
            st.pop();
            ret.push_back('-');
        }
    }

    if (!st.empty()) cout<<"NO"<<"\n";
    else for (auto c : ret) cout<<c<<"\n";

    return 0;
}
