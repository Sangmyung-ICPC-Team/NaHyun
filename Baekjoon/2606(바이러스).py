from collections import deque
def init(V):
    visited = [False for _ in range(V)]
    return visited

def insert_edge(V, E):
    adj_mat = [[0 for _ in range(V)] for _ in range(V)]
    for edge in E:
        adj_mat[edge[0]][edge[1]] = 1 
        adj_mat[edge[1]][edge[0]] = 1
        
    return adj_mat

dfs_list=[]
def dfs(V, adj_mat, vertex, visited):
    visited[vertex] =True
    dfs_list.append(vertex)

    for i in range(V):
        if adj_mat[vertex][i] == 1 and visited[i] == False:
            dfs(V, adj_mat, i, visited)

bfs_list=[]
def bfs(V, adj_mat, vertex, visited):
    visited[vertex] = True
    bfs_list.append(vertex)

    queue = deque()
    queue.append(vertex)

    while queue:
        vertex = queue.popleft()
        for i in range(V):
            if adj_mat[vertex][i] == 1 and visited[i] == False:
                visited[i] = True #방문 확인
                bfs_list.append(i)
                queue.append(i)

if __name__ == "__main__":
    #undirected graph
    V = int(input())
    E=int(input())
    #시작 index는 0부터
    E = [list(map(int, input().split())) for _ in range(E)]
    V += 1

    adj_mat = insert_edge(V, E)
    visited = init(V)

    cnt=-1

    bfs(V, adj_mat, 1, visited)
    for i in range(V):
        if visited[i] == True:
            cnt+=1
    print(cnt)

   
