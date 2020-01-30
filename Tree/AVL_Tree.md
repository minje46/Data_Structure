

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
  > ![balance-factor](https://user-images.githubusercontent.com/23169707/73453291-117d8d00-43af-11ea-94ae-20e373ee0b06.gif)
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
  > Root node 기준으로 `balance_factor >= |2|` (`left_height = 2`, `right_height = 0`) 상태.
  >
  > ![LL](https://user-images.githubusercontent.com/23169707/73453251-f874dc00-43ae-11ea-823e-8e743c1d05c1.gif)
  >
  > 1. **parent node의 left_child node를 root로 변환.**
  > 2.  **기존의 parent node를 새로운 root의 right_child node로 변환.**
  > 3. **Root가 되는 left_child node의 right_child node가 존재하는 경우, 기존 parent node의 left_child node로 연결.**
  >
  > 
  >
  > **#2. `RR-rotation` **
  >
  > Root node 기준으로 `balance_factor >= |2|` (`left_height = 0`, `right_height = 2`) 상태.
  >
  > ![RR](https://user-images.githubusercontent.com/23169707/73453963-708fd180-43b0-11ea-856f-f6f96d9f709b.gif)
  >
  > 1. **parent node의 right_child node를 root로 변환.**
  > 2.  **기존의 parent node를 새로운 root의 left_child node로 변환.**
  > 3. **Root가 되는 right_child node의 left_child node가 존재하는 경우, 기존 parent node의 right_child node로 연결.**
  >
  > 
  >
  > **#3. `LR-rotation` **
  >
  > Root node 기준으로 `balance_factor >= |2|` (`left_height = 2`, `right_height = 0`) 상태.
  >
  > ![LR](https://user-images.githubusercontent.com/23169707/73454173-e1cf8480-43b0-11ea-94cb-d0bd3b380649.gif)
  >
  > 1. **LR 상태의 tree를 `RR-rotation`을 통해 LL 상태로 변환.**
  > 2. **`LL-rotation` 수행.**
  >
  > 
  >
  > **#4. `RL-rotation` **
  >
  > Root node 기준으로 `balance_factor >= |2|` (`left_height = 0`, `right_height = 2`) 상태.
  >
  > ![RL](https://user-images.githubusercontent.com/23169707/73454177-e3994800-43b0-11ea-88c0-546f682c5e0a.gif)
  >
  > 1. **RL 상태의 tree를 `LL-rotation`을 통해 RR 상태로 변환.**
  > 2. **`RR-rotation` 수행.**

