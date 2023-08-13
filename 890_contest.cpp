#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::vector<int>> adj_list;
std::vector<int> subtree_size;

int dfs(int u, int parent) {
    int count = 0;
    for (int v : adj_list[u]) {
        if (v != parent) {
            count += dfs(v, u) + subtree_size[v];
        }
    }
    subtree_size[u] = count;
    return count;
}

int findMaxFValue(int n) {
    adj_list.resize(n + 1);
    subtree_size.assign(n + 1, 0);

    // Read the tree edges
    for (int i = 2; i <= n; i++) {
        int p;
        std::cin >> p;
        adj_list[p].push_back(i);
    }

    dfs(1, 0);

    int max_f_value = 0;
    for (int u = 1; u <= n; u++) {
        int f_value = 0;
        for (int v : adj_list[u]) {
            f_value = std::max(f_value, subtree_size[v]);
        }
        f_value += (n - subtree_size[u] - 1);
        max_f_value = std::max(max_f_value, f_value);
    }

    return max_f_value;
}

int main() {
    int n;
    std::cin >> n;

    int result = findMaxFValue(n);
    std::cout << result << std::endl;

    return 0;
}
