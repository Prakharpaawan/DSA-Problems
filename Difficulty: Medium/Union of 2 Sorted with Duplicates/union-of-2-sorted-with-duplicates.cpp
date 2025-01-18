//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int> Union;
        int n1 = a.size();
        int n2 = b.size();
        int i = 0;
        int j = 0;
        
        while (i < n1 && j < n2) {
            if (a[i] <= b[j]) {
                if (Union.size() == 0 || Union.back() != a[i]) {
                    Union.push_back(a[i]);
                }
                i++;
            } else {
                if (Union.size() == 0 || Union.back() != b[j]) {
                    Union.push_back(b[j]);
                }
                j++;
            }
        }

        while (i < n1) {
            if (Union.size() == 0 || Union.back() != a[i]) {
                Union.push_back(a[i]);
            }
            i++;
        }

        while (j < n2) {
            if (Union.size() == 0 || Union.back() != b[j]) {
                Union.push_back(b[j]);
            }
            j++;
        }

        return Union;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a, b;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        // Read second array
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            b.push_back(number);
        }

        Solution ob;
        vector<int> ans = ob.findUnion(a, b);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends