# Data Structure

## Disjoint set (Union-Find)

- **Disjoint set은 서로 중복되지 않는 부분 집합들로 나눠진 원소들에 대한 정보를 저장하고 조작하는 data structure.**
  
  > ![union-find](https://user-images.githubusercontent.com/23169707/52753674-76788100-2fac-11e9-9756-224c99b7908a.png)
  >
  > `find function` : Node의 root node를 판단한다.
  >
  > `union function` : 서로 다른 root node를 갖는 두 개의 node를 merge.
  
- **Features**

  1. **`initialize`**
  
     > ```c++
     > int root[MAX];
     > for(int i=0; i<MAX; i++)
     >     root[i] = i;
     > ```
     >
     > → 각 node를 자기 자신의 root node로 초기화.
  
  2. **`find`**
  
     >```c++
     >int find(int u)		
     >{
     >	if (u == parent[u])		
     >		return u;		
     >	return find(parent[u]);
     >}
     >```
     >
     >→ Node의 root node를 판단.
  
  3. **`union`**
  
     > ```c++
     > void union(int u, int v)
     > {
     > 	u = find(u), v = find(v);
     > 	if (u < v)
     > 		parent[v] = u;
     > 	else
     > 		parent[u] = v;
     > }
     > ```
     >
     > → 서로 다른 root node를 갖는 두 개의 node를 merge.
  
- **Examples**

  > * **Graph cycle 판단**
  >
  >   → sub set의 find 연산 결과가 같다면 **cycle exists**. (same root node.)


- **Time complexity.**

  > $$
  >O(N)
  > $$
  > → **array를 순회하며 find하고, root 값을 변경해야 한다.**
  > 

