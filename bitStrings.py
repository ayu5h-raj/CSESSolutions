#https://cses.fi/problemset/task/1617

M = 1000000007
n = int(input())
ans = 2**n
ans = ans%M
print(ans)
