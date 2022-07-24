#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>

using namespace std;

int main() {

    // map<int, float> mp;
    // mp[2] = 3.0;
    // mp[1] = 4.2;

    // unordered_map<int, int> ump;
    // ump[1] = 2;

    // if (ump.find(2) != ump.end()) {
    //     cout << "Found!";
    // } else cout << "Not Found!";

    // mp.insert({2, 3.5});

    // // Traversing maps:
    // for (auto it = mp.begin(); it != mp.end(); it++) {
    //     cout << it->first << " " << it->second << "\n";
    // }

    // .erase() and .count() 
    // unordered_map<int, int> m;
    // m[1] = 5; // [(1, 5)]
    // m[3] = 14; // [(1, 5); (3, 14)]
    // m[2] = 7; // [(1, 5); (3, 14); (2, 7)]
    // m.erase(2); // [(1, 5); (3, 14)]
    // cout << m[1] << '\n'; // 5
    // cout << m.count(7) << '\n' ; // 0
    // cout << m.count(1) << '\n' ; // 1

    // COUNT() METHOD OF MAPS
    // map<int, int> mp;
    // for (int i = 0; i < 5; i++) mp[i] = 1;
    // int n; cin >> n;
    // if (mp.count(n)) cout << mp[n];
    // else cout << "Not found!";

    // USING COUNT() INSTEAD OF .FIND() TO FIND THE EXISTENCE OF AN ELMENT IN A MAP:
    // int n; cin >> n;
    // map<int, int> m;
    // int arr[n]; for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    //     if (m.count(arr[i])) m[arr[i]]++;
    //     else m[arr[i]] = 1;
    // }
    // for (auto i: m) cout << i.first << " " << i.second << endl;


    // lower_bound() and upper_bound() in ordered maps:
    // map<int, int> m;
    // m[3] = 5; // [(3, 5)]
    // m[11] = 4; // [(3, 5); (11, 4)]
    // m[10] = 491; // [(3, 5); (10, 491); (11, 4)]
    // cout << m.lower_bound(10)->first << " " << m.lower_bound(10)->second << '\n'; //,→ 10 491
    // cout << m.upper_bound(10)->first << " " << m.upper_bound(10)->second << '\n'; //,→ 11 4
    // m.erase(11); // [(3, 5); (10, 491)]
    // if (m.upper_bound(10) == m.end())
    // {
    //     cout << "end" << endl; // Prints end
    // }


    // Converting a container to a map:
    vector<int> v = {1, 1, 2, 3, 4, 4, 5, 5, 5, 5, 8, 9};
    map<int, int> mp;
    for (auto &i: v) {
        mp[i]++; // no need of using mp.find(i) != mp.end() or mp.count(i)...just use this syntax to fill a map with some values.
    }  
    for (auto &i: mp) {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}