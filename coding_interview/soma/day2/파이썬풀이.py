N, M = map(int, input().split())
ans = []
visited = []

def DFS(n, lst):
    if n == M:
        ans.append(lst)
        return
    for i in range(N):
        if i not in visited:
            visited.append(i)
            DFS(n+1, lst+[i+1])
            visited.remove(i)

DFS(0, [])

for a in ans:
    print(' '.join(map(str, a)))
