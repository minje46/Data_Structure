# Data Structure

## AVL Tree

- **AVL tree is Binary Search Tree that balances the tree height.**

  (AVL 트리는 트리 높이의 균형을 유지하는 이진 탐색 트리.)

  > → **AVL tree는 BST의 단점을 개선하기 위해 개발.**
  >
  > > BST의 worst case(불균형한 모양의 트리)에서 `O(N)` 성능.
  >
  > → **AVL tree는 insert, delete를 수행할 때 마다, tree의 balance를 확인하고 self-balancing.**
  >
  > ![image](https://user-images.githubusercontent.com/23169707/73452377-1fcaa980-43ad-11ea-8647-49ac2e419e2d.png)

* **Features**

  > **모든 node는 `balance factor < 2`를 유지.**
  >
  > > `balance factor` = `left sub tree height` - `right sub tree height`
  >
  > ![image](https://user-images.githubusercontent.com/23169707/73452828-11c95880-43ae-11ea-8b24-f5f1ad3404d0.png)
  >
  > `pros` : Well-balanced tree로서,  `O(log N)`의 효율성 보장.
  >
  > `cons` : Self-balancing을 위한 overhead 와 구현 hard.  

* **Rotation**

  > **AVL tree에서 balance를 유지하기 위해, `LL-rotation`, `RR-rotation`, `LR-rotation`, `RL-rotation` 존재.**
  >
  > 
  >
  > **#1. `LL-rotation` **
  >
  > → 
  >
  > d
  >
  > ![image](https://user-images.githubusercontent.com/23169707/73453124-b350aa00-43ae-11ea-9049-80ebd81b331e.png)
  >
  > d

