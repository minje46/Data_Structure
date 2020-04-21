# Data Structure

## Binary Search Tree

- **Binary Search Tree(이진 탐색 트리)는 data 저장 규칙을 가진 binary tree로서, search를 위한 data structure.**

  > <img width="250" alt="bst" src="https://user-images.githubusercontent.com/23169707/73448465-46381700-43a4-11ea-9043-df26de260fef.png">
  >
  > **Condition of binary search tree**
  >
  > 1. **BST node에 저장된 key는 unique. (중복 허용 X)**
  > 2. **Root node의 key는 left sub tree를 구성하는 어떠한 node의 key보다 크다.**
  > 3. **Root node의 key는 right sub tree를 구성하는 어떠한 node의 key보다 작다.**
  > 4. **Left sub tree와 Right sub tree 모두 BST.**
  
- **`Search`**

  > **Search는 항상 root node에서 시작한다.**
  > → **`left_child < root_node < right_child` 수식이 항상 만족.**
  >
  > <img width="252" alt="sr" src="https://user-images.githubusercontent.com/23169707/79860119-1598d400-840d-11ea-87b6-c08d8a4fd84f.png">
  >
  > ```c++
  > if(key == root)
  > 	return &root;
  > else if(root > key)
  >     Search(root->left_child);
  > else if(root < key)
  >     Search(root->right_child);
  > ```

* **`Insert`**

  > <img width="241" alt="in" src="https://user-images.githubusercontent.com/23169707/79860225-3e20ce00-840d-11ea-91d4-41ef691a1c9b.png">
  >
  > 1. **Node를 insert하기 위해, bst에 같은 node가 존재하는 search.**
  >
  > 2. **중복된다면, insert 수행 X.**
  >
  >    > BST condition : Key is unique.
  >
  > 3. **대소를 비교하여 찾아간 node의 위치에 new_node insert.**

* **Delete**

  > **#1. Delete node is leaf node.**
  >
  > <img width="529" alt="ins" src="https://user-images.githubusercontent.com/23169707/79860306-627caa80-840d-11ea-9732-465b43aee8aa.png">
  >
  > → **node delete 후, 메모리 해제(NULL) **
  >
  > 
  >
  > **#2. Delete node has one child node.**
  > <img width="564" alt="de" src="https://user-images.githubusercontent.com/23169707/79860367-83dd9680-840d-11ea-9069-e343a375366d.png">
  >
  > → **node delete 후, 남겨진 child node를 parent node와 연결.**
  >
  > 
  >
  > **#3. Delete node has children node.**
  >
  > <img width="545" alt="dew" src="https://user-images.githubusercontent.com/23169707/79860442-a1aafb80-840d-11ea-976f-4a046e77e2cd.png">
  >
  > → **node delete 후, left sub tree에서 가장 큰 node로 대체.**
  > → **node delete 후, right sub tree에서 가장 작은 node로 대체.**

* **Examples**

  > 1. **data base**
  > 2. **file system**
  
* **Time complexity**

  > * **average**
  >   $$
  >   O(log N)
  >   $$
  >   **→ Well-balanced tree의 경우, tree height 만큼 search.**
  >
  > * **worst**
  >   $$
  >   O(N)
  >   $$
  >   **→ worst case(한 쪽으로 치우친 tree)의 경우, bst의 모양이 linked list와 유사.**
  >
  > 
  >
  > **선형 자료구조와는 달리, 비선형 자료 구조는 average와 worst 모두 고려.**
  >
  > ​	→ Well-balanced tree와 worst-case tree에 따라 성능의 차이가 크기 때문.

