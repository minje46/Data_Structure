# Data Structure

## Graph

- **Graph(`G(V,E)`) is data structure that represent data through `V`(vertexes) and `E`(edges).** <br>(그래프는 정점과 간선을 통해 데이터를 표현하는 자료구조.)
  
> → **Graph는 정점들과 간선들로 정의되며, 정점의 위치 정보 or 간선의 순서는 graph의 정의X.**
  >
  > →**연결되어 있는 객체 간의 관계를 표현할 수 있는 자료구조.**
  >
  > - Vertex : 연결의 대상이 되는 개체 or 위치. (node)
  >
  > - Edge : vertex를 연결하는 선.
  >
  >   ![image](https://user-images.githubusercontent.com/23169707/73608200-42560000-4603-11ea-8182-05b08a263ebe.png)


- **Features**

  > - **Graph는 network model**.
  >- **Root node와 parent-child 개념이 없다**.
  > - **Graph의 순회는 DFS와 BFS로 이루어진다**.
  
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

  > **Graph를 구현하기 위해 vertexes 와 edges의 집합을 표현**.
>
  > * `Adjacent Matrix`
  >
  >   > **vertex의 연결 유무를 matrix로 저장하는 방식**.
  >   >
  >   > ​	→ **Graph에 edge가 많이 존재하는`dense graph` 표현**.
  >   >
  >   > 
  >   >
  >   > <img width="240" alt="mat" src="https://user-images.githubusercontent.com/23169707/73608454-7383ff80-4606-11ea-8eb1-4ce69e835a93.png">
  >   >
  >   > `pros` :  **vertex `(u,v)`를 통해 edge의 유무를 바로 확인할 수 있다**.
  >   >
  >   > `cons` : **`V*V` size의 memory 필요**.
  >
  > * `Adjacent List`
  >
  >   > **vertex에 연결된 edge list를 저장하는 방식**.
  >   >
  >   > ​	→ **Graph에 적은 수의 edge가 존재하는 `sparse graph` 표현**.
  >   >
  >   > <img width="335" alt="list" src="https://user-images.githubusercontent.com/23169707/73608455-754dc300-4606-11ea-898a-b3919035535e.png">
  >   >
  >   > `pros` : **`V+E` size의 memory 사용**.
  >   >
  >   > `cons` : **vertex `(u,v)`를 확인하기 위해, `adjacent[u]`를 모두 확인해야 한다.**


- **Graph Search**

  > * **`Depth First Search` vs. `Breadth First Search`**
  >
  >   ![dfs](https://user-images.githubusercontent.com/23169707/73608616-91eafa80-4608-11ea-9dca-57f543e9da73.gif)
