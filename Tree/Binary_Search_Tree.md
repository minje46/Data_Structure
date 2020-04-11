# Data Structure

## Binary Search Tree

- **BST is data structure for search that is binary tree with data storage rules.** <br> (BST는 데이터 저장 규칙을 가진 binary tree로서, 탐색을 위한 자료구조.)

  > **Condition of binary search tree**
>
  > * **BST node에 저장된 key는 unique. (중복 허용 X)**
  > * **Root node의 key는 left sub tree를 구성하는 어떠한 node의 key보다 크다.**
  > * **Root node의 key는 right sub tree를 구성하는 어떠한 node의 key보다 작다.**
  > * **Left sub tree와 Right sub tree 모두 BST.**
  >
  > <img width="355" alt="bst" src="https://user-images.githubusercontent.com/23169707/73448465-46381700-43a4-11ea-9043-df26de260fef.png">
  
- **Search**

  > **Search는 항상 root node에서 시작한다.**
  > → **`left_child < root_node < right_child` 수식이 항상 만족.**
  >
  > ![image](https://user-images.githubusercontent.com/23169707/73448887-408f0100-43a5-11ea-960b-c22dec7750ef.png)
  >
  > ```c++
  > if(key == root)
  > 	return &root;
  > else if(root > key)
  >     Search(root->left_child);
  > else if(root < key)
  >     Search(root->right_child);
  > ```

* **Insert**

  > ![image](https://user-images.githubusercontent.com/23169707/73449160-e7739d00-43a5-11ea-80db-c61892238346.png)
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
  > ![image](https://user-images.githubusercontent.com/23169707/73449273-2275d080-43a6-11ea-8572-980e2e68455e.png)
  >
  > → **node delete 후, 메모리 해제(NULL) **
  >
  > 
  >
  > **#2. Delete node has one child node.**
  > ![image](https://user-images.githubusercontent.com/23169707/73449409-69fc5c80-43a6-11ea-8dc7-4971f10f43fe.png)
  >
  > → **node delete 후, 남겨진 child node를 parent node와 연결.**
  >
  > 
  >
  > **#3. Delete node has children node.**
  >
  > ![image](https://user-images.githubusercontent.com/23169707/73449503-a9c34400-43a6-11ea-8531-9fec1d4da17e.png)
  >
  > → **node delete 후, left sub tree에서 가장 큰 node로 대체.**
  > → **node delete 후, right sub tree에서 가장 작은 node로 대체.**

* **Examples**

  > * 이진 암호화.
  > * Data base.
  > * File system.

* **Time complexity**

  > * Average
  >   $$
  >   O(log N)
  >   $$
  >   **→ Well-balanced tree의 경우, tree height 만큼 search.**
  >
  > * Worst
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

