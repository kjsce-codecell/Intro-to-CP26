#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, string> m;

    m.insert({1, "one"});
    m.insert({2, "two"});
    m.insert({3, "three"});

    cout << "Size: " << m.size() << "\n";
    

    auto it = m.find(2);
    if (it != m.end()) {
        cout << "Found key 2 with value: " << (*it).second << "\n";
    }

    // count(key) - check if key exists (0 or 1 in map)
    cout << "Key 3 exists: " << m.count(3) << "\n";
    cout << "Key 5 exists: " << m.count(5) << "\n";

    // erase() - remove element by key
    m.erase(1);
    cout << "Size after erasing key 1: " << m.size() << "\n";
    cout << '\n';

    // traverse map (keys are sorted automatically)
    cout << "Map elements:\n";
    for (auto p : m) {
        cout << p.first << " " << p.second << "\n";
    }
    cout << '\n';

    // empty() - check if map is empty
    cout << "Is map empty? " << m.empty() << "\n";

    // clear() - remove all elements
    m.clear();

    cout << "Size after clear: " << m.size() << "\n";
    cout << "Is map empty now? " << m.empty() << "\n";
    cout << '\n';
    return 0;
}
