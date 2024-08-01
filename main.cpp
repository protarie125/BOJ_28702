#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

bool ContainsZ(const string& str) {
  for (const auto& c : str) {
    if ('z' == c) {
      return true;
    }
  }

  return false;
}

void Print(ll x) {
  if (0 == x % 3 && 0 == x % 5) {
    cout << "FizzBuzz";
  } else if (0 == x % 3) {
    cout << "Fizz";
  } else if (0 == x % 5) {
    cout << "Buzz";
  } else {
    cout << x;
  }
}

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  string a, b, c;
  cin >> a >> b >> c;

  ll p, q, r;
  if (!ContainsZ(a)) {
    auto iss = istringstream{a};
    iss >> p;
    Print(p + 3);
    return 0;
  }

  if (!ContainsZ(b)) {
    auto iss = istringstream{b};
    iss >> q;
    Print(q + 2);
    return 0;
  }

  if (!ContainsZ(c)) {
    auto iss = istringstream{c};
    iss >> r;
    Print(r + 1);
    return 0;
  }

  return 0;
}