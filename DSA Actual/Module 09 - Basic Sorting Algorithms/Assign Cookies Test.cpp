#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int check(vector<int> g, vector<int>s){
    sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i = 0, j = 0, count = 0;
        while (i<g.size() && j<s.size()){
            if (s[j] >= g[i]) {
                count += 1;
                j += 1;
                i += 1;
            }
            else if (g[i] > s[j]) j++; 
            else i++;
        }
        return count;
}

int main() {
	// your code goes here
    int gsize, ssize;
    vector<int> g;
    vector<int> s;
    cin>>gsize;
    for(int i =0 ; i<gsize; i++){
        int temp;
        cin>>temp;
        g.push_back(temp);
    }
    cin>>ssize;
    for(int i =0 ; i<ssize; i++){
        int temp;
        cin>>temp;
        s.push_back(temp);
    }
    cout<<check(g,s);
	return 0;
}
