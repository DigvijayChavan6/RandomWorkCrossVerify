#include <iostream>
#include <map>
using namespace std;

bool areIsomorphic(string m, string n) {
    if (m.size() != n.size())
        return false;

    map<char, char> vec;
    int siz = m.size();

    for (int i = 0; i < siz; i++) {
        char a = m[i], b = n[i];

        if (vec.find(a) == vec.end() && vec.find(b) == vec.end()) {
            // If neither character is mapped, create a mapping
            vec[a] = b;
            vec[b] = a;
        } else {
            // If one of the characters is already mapped, check if the mapping is correct
            if (vec[a] != b || vec[b] != a)
                return false;
        }
    }

    for (auto p : vec)
        cout << p.first << " -> " << p.second << endl;

    return true;
}

int main() {
    if (areIsomorphic("aab", "xxy"))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
