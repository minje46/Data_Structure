# Data Structure

## Tree

- **Tree is a nonlinear data structure that expresses hierarchical relationships.**
  <br>(트리는 계층적 관계를 표현하는 비선형 자료구조.)

  > → **Tree는 node로 이루어진 자료구조**
  >
  > → **Tree는 N개의 node와 N-1개의 edge로 구성.**
  >
  > - Node : Tree 구조의 구성요소.
  >
  > - Root : Tree 구조의 최상위 node.
  >
  > - Sibling : Same parent node를 가지는 node.
  >
  > - Edge : Node를 연결하는 선.
  >
  > - Leaf node(Terminal node) : child node가 없는 말단 node.
  >
  > - Internal node(Nonterminal node) : Leaf node를 제외한 모든 node.
  >
  >   ![img](https://t1.daumcdn.net/cfile/tistory/2672FD3D5892B6BE0E)


- **Features**

  > - Tree는 hierarchical model.
  > - Tree는 최소 연결 트리라고 불리며, graph의 한 종류.
  >
  > - Tree는 DAG의 한 종류.
  >
  >   > Directed Acyclic Graphs : 방향성이 있는 비순환 그래프
  >
  > - Traversal(순회)
  >
  >   > - `Pre-order(전위 순회)` 
  >   >
  >   >   ```c++
  >   >   void Pre_order(TreeNode node)
  >   >   {
  >   >   	if(node == NULL)
  >   >           return;
  >   >       cout << node->data;			// Root
  >   >       Pre_order(node->left);		// Left	
  >   >       Pre_order(node->right);		// Right
  >   >   }
  >   >   ```
  >   >
  >   > - `In-order(중위 순회)`
  >   >
  >   >   ```c++
  >   >   void In_order(TreeNode node)
  >   >   {
  >   >   	if(node == NULL)
  >   >           return;
  >   >       In_order(node->left);		// Left	
  >   >       cout << node->data;			// Root
  >   >       In_order(node->right);		// Right
  >   >   }
  >   >   ```
  >   >
  >   > - `Post-order(후위 순회)`
  >   >
  >   >   ```c++
  >   >   void Post_order(TreeNode node)
  >   >   {
  >   >   	if(node == NULL)
  >   >           return;
  >   >       Post_order(node->left);		// Left	
  >   >       Post_order(node->right);	// Right
  >   >       cout << node->data;			// Root
  >   >   }
  >   >   ```
  >
  > - Examples
  >
  >   > `Binary tree` / `Binary Search Tree` / `AVL tree` / `Red-Black tree` / `binary heap`


- **Implemented**

  * Array

    > `Pros` : Index를 통해 search speed가 빠르기 때문에, search가 빈번한 경우 적합.
    >
    > `Cons` : Tree를 구현하기에 직관적이지 못하다.
    >
    > → **`array`를 이용한 tree는 heap.**
    
  * List
  
    > `Pros` : Tree를 구현하기에 직관적. (List의 구성 형태가 tree와 일치.)
    >
    > `Cons` : Memory leak(누수)에 유의. (pointer 사용.)


- **Time complexity.**

  > $$
  > O(log N)
  > $$
  > → 불균형(편향된) tree의 경우 O(N)이 되기 때문에, 균형있는 트리 필요.
  > 
