# Data Structure

## Tree

- **Tree는 hierarchical relationship(계층적 관계)를 표현하는 비선형 data structure.**
  
  > <img width="250" alt="tr" src="https://user-images.githubusercontent.com/23169707/79843600-6c92af00-83f5-11ea-8678-c6e5663cf99f.png">
  >
  > Tree는 **data가 저장된 node**들이 **edge(간선)으로 서로 연결**되어 있다.

- **Features**

  1. **`Search`**
  
     > * **speedy** : Tree는 hierarchical model로 구성되어 있기 때문에, data search에 효율적.
     > * **graph** : Tree는 graph의 한 종류이며, 연결된 depth(tree height)만 search하면 된다.
  
  2. **`Recursive`**
  
     > * **Traversal(순회)**
     >
     >   > `Pre-order(전위 순회)`
     >   >
     >   > ```c++
     >   > void Pre_order(TreeNode node)
     >   > {
     >   > 	if(node == NULL)
     >   >         return;
     >   >     cout << node->data;			// Root
     >   >     Pre_order(node->left);		// Left	
     >   >     Pre_order(node->right);		// Right
     >   > }
     >   > ```
     >   >
     >   > `In-order(중위 순회)`
     >   >
     >   > ```c++
     >   > void In_order(TreeNode node)
     >   > {
     >   > 	if(node == NULL)
     >   >         return;
     >   >     In_order(node->left);		// Left	
     >   >     cout << node->data;			// Root
     >   >     In_order(node->right);		// Right
     >   > }
     >   > ```
     >   >
     >   > `Post-order(후위 순회)`
     >   >
     >   > ```c++
     >   > void Post_order(TreeNode node)
     >   > {
     >   > 	if(node == NULL)
     >   >         return;
     >   >     Post_order(node->left);		// Left	
     >   >     Post_order(node->right);	// Right
     >   >     cout << node->data;			// Root
     >   > }
     >   > ```


- **Examples**

  > `Binary tree` / `Binary Search Tree` / `AVL tree` / `Red-Black tree` / `binary heap`

- **Implemented**

  * **`array`**

    > * **pros** : index를 통해 search speed가 빠르기 때문에, search가 빈번한 경우 적합. [→ `Heap`]
    >* **cons** : tree를 구현하기에 직관적이지 못하다.
    
  * **`list`**
  
    > * **pros** : tree를 구현하기에 직관적. (list의 구성 형태가 tree와 일치.)
    >* **cons** : memory leak(누수)에 유의. (pointer 사용.)


- **Time complexity.**

  > $$
  > O(log N)
  > $$
  > → 불균형(편향된) tree의 경우 O(N)이 되기 때문에, 균형있는 트리 필요.
  > 
