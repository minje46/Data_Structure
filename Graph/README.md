# Data Structure

## Graph

- **Graph(`G(V,E)`)는 vertex(정점)과 edge(간선)을 통해 data를 표현하는 data structure.**
  
  > <img width="276" alt="1" src="https://user-images.githubusercontent.com/23169707/73608675-3705d300-4609-11ea-8c54-58730c3305d4.png">
  >
  > Graph는 연결되어 있는 **객체간의 관계**를 표현할 수 있다.
  
- **Features**

  1. **`Recursive`**
  
     > ![dfs](https://user-images.githubusercontent.com/23169707/73608616-91eafa80-4608-11ea-9dca-57f543e9da73.gif)
     >
     > `DFS(Depth First Search)`
     >
     > ```c++
     > void DFS(Node cur)
     > {
     > 	if(cur == NULL)
     >         return;
     >     visit[cur] = true;
     >     for(each : cur.adjacent)
     >         if(!visit[each])
     >             DFS(each);
     > }
     > ```
     >
     > `BFS(Breadth First Search)`
     >
     > ```c++
     > void BFS(Node dpt)
     > {
     >     queue<int> que;    
     >     que.push(dpt);	visit[dpt] = true;
     >     while(!que.empty())
     >     {
     >         auto cur = que.front();
     >         que.pop();
     >         
     >         for(each : cur.adjacent)
     >             if(!visit[each])
     >                 que.push(each);		visit[each] = true;
     >     }
     > }
     > ```
  
- **Graph Type**

  > * **`directed graph` vs. `undirected graph`**
  >
  >   > <img width="235" alt="dir" src="https://user-images.githubusercontent.com/23169707/73608280-7aaa0e00-4604-11ea-85df-3429941c07b3.png">
  >   > `directed graph` : edge(간선)에 방향이 존재.
  >   >
  >   > `undirected graph` : edge를 통해 양 방향으로 이동 가능.
  >
  > * **`complete graph` vs. `sub graph`**
  >
  >   > <img width="468" alt="com" src="https://user-images.githubusercontent.com/23169707/73608359-5bf84700-4605-11ea-8690-236b75c5fe1d.png">
  >   >
  >   > `complete graph` : 각 vertex에서 다른 모든 vertex을 연결한 graph. 
  >   > 	→ `edge의 수` : `N*(N-1)/2` (N : vertex의 수)
  >   >
  >   > `sub graph` : 기존의 graph에서 일부의 vertex, edge를 제외하여 만든 graph.
  >
  > * **`weighted graph`**
  >
  >   > <img width="170" alt="we" src="https://user-images.githubusercontent.com/23169707/73608373-8813c800-4605-11ea-8fd3-6b4c75495599.png">
  >   >
  >   > `weighted graph` : edge(간선)에 cost, weight가 할당된 graph. (`network`)


- **Implemented**

  * **`adjacent matrix`**

    > <img width="240" alt="mat" src="https://user-images.githubusercontent.com/23169707/73608454-7383ff80-4606-11ea-8eb1-4ce69e835a93.png">
    >
    > * `pros` :  **vertex `(u,v)`를 통해 edge의 유무를 바로 확인할 수 있다**.
    > * `cons` : **`V*V` size의 memory 필요**.

  * **`adjacent list`**

    > <img width="335" alt="list" src="https://user-images.githubusercontent.com/23169707/73608455-754dc300-4606-11ea-898a-b3919035535e.png">
    >
    > * `pros` : **`V+E` size의 memory 사용**.
    > * `cons` : **vertex `(u,v)`를 확인하기 위해, `adjacent[u]`를 모두 확인해야 한다.**


