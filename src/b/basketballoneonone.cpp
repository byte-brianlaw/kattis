#include <ios>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::ios_base;
using std::string;

auto solve() {

    auto record = string();

    cin >> record;

    cout << record[record.length() - 2] << '\n';

}

int main() {

    cin.tie(nullptr);

    ios_base::sync_with_stdio(false);

    solve();

    return 0;

}
