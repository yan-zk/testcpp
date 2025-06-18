// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <bits/stdc++.h>
// using namespace std;
//
// bool isUnique(long long a, long long b)
// {
//     string s = to_string(a) + to_string(b);
//     if (s.length() != 10)
//         return false;
//     sort(s.begin(), s.end());
//
//     for (int i = 0; i < 10; i++)
//     {
//         if (s[i] != '0' + i)
//             return false;
//     }
//     return true;
// }
//
// int main()
// {
//     for (int i = 11; i < 30; i++)
//     {
//         long long a_3 = (long long)i * i * i;
//         long long a_4 = (long long)i * i * i * i;
//         if ((a_3 >= 1000 && a_3 <= 9999) && (a_4 >= 100000 && a_4 <= 999999))
//         {
//             if (isUnique(a_3, a_4))
//                 cout << i << " " << a_3 << " " << a_4;
//         }
//     }
//     return 0;
// }

// DP

// #include <vector>
// #include <algorithm>
// #include <iostream>
// #include <climits>
//
// int coinChangeDP(std::vector<int> &coins, int amount)
// {
//     std::vector<int> dp(amount + 1, amount + 1); // 初始化为较大值
//     dp[0] = 0;                                   // 基础情况：0元需要0个硬币
//
//     // 遍历所有金额，从1到amount
//     for (int i = 1; i <= amount; ++i)
//     {
//         // 尝试所有硬币
//         for (int coin : coins)
//         {
//             if (coin <= i)
//             { // 硬币面额不超过当前金额
//                 dp[i] = std::min(dp[i], dp[i - coin] + 1);
//                 std::cout << "dp[" << i << "]= " << dp[i] << " dp[" << i - coin << "]+1=" << dp[i - coin] + 1 << std::endl;
//             }
//         }
//     }
//
//     // 判断是否有解
//     return dp[amount] > amount ? -1 : dp[amount];
// }
//
// // 示例
// int main()
// {
//     std::vector<int> coins = {1, 5, 10, 20, 50};
//     int amount;
//     std::cin >> amount;
//     int result = coinChangeDP(coins, amount);
//     std::cout << "最少硬币数：" << result << std::endl; // 输出5
//     return 0;
// }

// DFS

// #include <iostream>
// #include <vector>
// using namespace std;
//
// void dfs(int index, int n, vector<int> current)
// {
//     if (index > n)
//     {
//         for (int i = 0; i < current.size(); i++)
//         {
//             cout << current[i] << " ";
//         }
//         cout << endl;
//         return;
//     }
//
//     dfs(index + 1, n, current);
//
//     current.push_back(index);
//     dfs(index + 1, n, current);
//     return;
// }
//
// const int N = 15;
// int s[N];
// void dfs(int x, int n)
// {
//     if (x == n)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             if (s[i] == 1)
//                 cout << i + 1 << " ";
//         }
//         cout << endl;
//         return;
//     }
//
//     s[x] = 2;
//     dfs(x + 1, n);
//     s[x] = 0;
//
//     s[x] = 1;
//     dfs(x + 1, n);
//     s[x] = 0;
// }
//
// int main()
// {
//     int n;
//     cin >> n;
//
//     vector<int> current;
//     dfs(1, n, current);
//     dfs(0, n);
//     for (int i : s)
//         cout << i << " ";
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int n;
// const int N = 10;
// int s[N];
// bool used[N];
// void dfs(int u);
// int main()
// {
//     cin>>n;
//     dfs(1);
//     return 0;
// }
// void dfs(int u)
// {
//     if (u > n)
//     {
//         for (int i = 1; i <= n; i++)
//             cout << s[i] << " ";
//         cout << endl;
//         return;
//     }
//
//     for (int i = 1; i <= n; i++)
//     {
//         if (!used[i])
//         {
//             s[u] = i;
//             used[i] = true;
//             dfs(u + 1);
//             used[i] = false;
//             s[u] = 0;
//         }
//     }
// }

// #include <iostream>
// using namespace std;
// int n, m;
// const int N = 35;
// int st[N];
// void dfs(int u, int start);
//
// int main()
// {
//     cin >> n >> m;
//     dfs(1, 1);
//     return 0;
// }
//
// void dfs(int u, int start)
// {
//     if (n - start < m - u)
//         return;
//     if (u > m)
//     {
//         for (int i = 1; i <= m; i++)
//             cout << st[i] << " ";
//         cout << endl;
//         return;
//     }
//     for (int i = start; i <= n; i++)
//     {
//         st[u] = i;
//         dfs(u + 1, i + 1);
//         st[u] = 0;
//     }
// }

// Sort排序

// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <vector>
//
// struct Student
// {
//     std::string name;
//     int score;
//     Student() : name("no name"), score(0) {}
//     Student(const std::string &n, int s) : name(n), score(s) {}
// };
// bool cmp_score(Student &s1, Student &s2)
// {
//     return s1.score > s2.score;
// }
//
// int main()
// {
//     using namespace std;
//     Student stu[3];
//     string n;
//     int s;
//     for (int i = 0; i < 3; i++)
//     {
//         cin >> n >> s;
//         stu[i] = Student(n, s);
//     }
//     sort(stu, stu + 3, cmp_score);
//     for (int i = 0; i < 3; i++)
//     {
//         cout << stu[i].name << " " << stu[i].score << endl;
//     }
//     return 0;
// }

// 归并排序

// #include <iostream>
// #include <vector>
//
// const int N = 1000;
// int q[N], temp[N];
// typedef long long LL;
// LL count;
// LL merge_sort(int l, int r)
// {
//     if (l >= r)
//         return 0;
//     int mid = (l + r) >> 1;
//     count = merge_sort(l, mid) + merge_sort(mid + 1, r);
//
//     int k = 0, i = l, j = mid + 1;
//     while (i <= mid && j <= r)
//     {
//         if (q[i] <= q[j])
//             temp[k++] = q[i++];
//         else
//         {
//             temp[k++] = q[j++];
//             count += mid - i + 1;
//         }
//     }
//     while (i <= mid)
//     {
//         temp[k++] = q[i++];
//     }
//     while (j <= r)
//     {
//         temp[k++] = q[j++];
//     }
//     for (int i = l, j = 0; i <= r; i++, j++)
//     {
//         q[i] = temp[j];
//     }
//     return count;
// }
//
// int main()
// {
//     using std::cin;
//     using std::cout;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//         cin >> q[i];
//     cout << merge_sort(0, n - 1) << std::endl;
//     for (int i = 0; i < n; i++)
//         cout << q[i] << " ";
//     cout << std::endl;
//     return 0;
// }

#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <algorithm>

// 定义文字结构体，包含变量名和是否为否定
struct Literal
{
    char var;
    bool negated;

    Literal(char v, bool neg = false) : var(v), negated(neg) {}

    // 重载==运算符，用于比较
    bool operator==(const Literal &other) const
    {
        return var == other.var && negated == other.negated;
    }

    // 重载<运算符，用于set排序
    bool operator<(const Literal &other) const
    {
        if (var == other.var)
            return negated < other.negated;
        return var < other.var;
    }
};

using Clause = std::set<Literal>;
using Formula = std::vector<Clause>;

// 检查是否存在空子句
bool hasEmptyClause(const Formula &formula)
{
    for (const auto &clause : formula)
    {
        if (clause.empty())
            return true;
    }
    return false;
}

// 移除重言式子句
Formula removeTautologies(Formula formula)
{
    Formula newFormula;
    for (const auto &clause : formula)
    {
        bool isTautology = false;
        for (const auto &lit : clause)
        {
            Literal opposite(lit.var, !lit.negated);
            if (clause.count(opposite))
            {
                isTautology = true;
                break;
            }
        }
        if (!isTautology)
            newFormula.push_back(clause);
    }
    return newFormula;
}

// 单位传播：处理单位子句
Formula unitPropagate(Formula formula, Literal unit)
{
    Formula newFormula;
    for (const auto &clause : formula)
    {
        // 如果子句包含单位文字，则整个子句被满足，跳过
        if (clause.count(unit))
            continue;

        Clause newClause;
        Literal negUnit(unit.var, !unit.negated);
        for (const auto &lit : clause)
        {
            if (!(lit == negUnit))
            { // 移除否定形式的单位文字
                newClause.insert(lit);
            }
        }
        if (!newClause.empty())
        {
            newFormula.push_back(newClause);
        }
        else
        { // 产生空子句
            return {Clause()};
        }
    }
    return newFormula;
}

// 查找纯文字
std::pair<bool, Literal> findPureLiteral(const Formula &formula)
{
    std::unordered_map<char, bool> literalStatus; // true: 只正出现, false: 只负出现

    for (const auto &clause : formula)
    {
        for (const auto &lit : clause)
        {
            auto it = literalStatus.find(lit.var);
            if (it == literalStatus.end())
            {
                literalStatus[lit.var] = !lit.negated;
            }
            else
            {
                if (it->second != !lit.negated)
                {
                    literalStatus[lit.var] = 'mixed'; // 标记为混合出现
                }
            }
        }
    }

    for (const auto &[var, status] : literalStatus)
    {
        if (status == true)
            return {true, Literal(var, false)};
        if (status == false)
            return {true, Literal(var, true)};
    }
    return {false, Literal('\0')};
}

// 主DPLL算法
bool dpll(Formula formula)
{
    // 1. 空公式可满足
    if (formula.empty())
        return true;

    // 2. 存在空子句不可满足
    if (hasEmptyClause(formula))
        return false;

    // 3. 移除重言式
    formula = removeTautologies(formula);

    // 4. 单位传播
    for (const auto &clause : formula)
    {
        if (clause.size() == 1)
        {
            Literal unit = *clause.begin();
            return dpll(unitPropagate(formula, unit));
        }
    }

    // 5. 纯文字消除
    auto [hasPure, pureLit] = findPureLiteral(formula);
    if (hasPure)
    {
        return dpll(unitPropagate(formula, pureLit));
    }

    // 6. 分裂规则：选择第一个出现的变量
    Literal splitLit = formula[0].begin()->var;

    // 尝试赋值为真
    Formula newFormulaTrue = unitPropagate(formula, Literal(splitLit, false));
    if (dpll(newFormulaTrue))
        return true;

    // 尝试赋值为假
    Formula newFormulaFalse = unitPropagate(formula, Literal(splitLit, true));
    return dpll(newFormulaFalse);
}

int main()
{
    // 示例输入： (P∨¬Q) ∧ (Q∨R) ∧ (¬R∨¬P)
    Formula formula = {
        {Literal('P', false), Literal('Q', true)},  // P∨¬Q
        {Literal('Q', false), Literal('R', false)}, // Q∨R
        {Literal('R', true), Literal('P', true)}    // ¬R∨¬P
    };

    bool result = dpll(formula);
    std::cout << "Formula is " << (result ? "satisfiable" : "unsatisfiable") << std::endl;

    return 0;
}