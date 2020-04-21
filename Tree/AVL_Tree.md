

# Data Structure

## AVL Tree

- **AVL tree는 tree의 height 균형을 유지하기 위한 binary search tree.**

  > <img width="250" alt="avl" src="https://user-images.githubusercontent.com/23169707/79861910-27c84180-8410-11ea-8e62-79ae63d4ad28.png">
  >
  > AVL tree는 insert, delete 연산 이후, tree balance를 확인하고 **self-balancing**.
  >
  > > → BST의 불균형한 형태의 `O(N)`성능을 개선하기 위해 개발.
* **Features**

  1. **`self-balancing`**

     > **모든 node는 `balance factor < 2`를 유지.**
     >
     > > `balance factor` = `left sub tree height` - `right sub tree height`
     >
     > ![balance-factor](https://user-images.githubusercontent.com/23169707/73453291-117d8d00-43af-11ea-94ae-20e373ee0b06.gif)
     >
     > * **pros** : well-balanced tree로서,  `O(log N)`의 효율성 보장.
     > * **cons** : self-balancing을 위한 overhead 와 구현 hard.  

* **Rotation**

  1. **`LL-rotation`**
  
     > * **`balance_factor >= |2|`** : root node로 부터 left_height = 2, right_height = 0 상태.
     >
     > ![LL](https://user-images.githubusercontent.com/23169707/73453251-f874dc00-43ae-11ea-823e-8e743c1d05c1.gif)
     >
     > 1. **parent node의 left_child node를 root로 변환.**
     > 2. **기존의 parent node를 새로운 root의 right_child node로 변환.**
     > 3. **Root가 되는 left_child node의 right_child node가 존재하는 경우, 기존 parent node의 left_child node로 연결.**
  
  2. **`RR-rotation`**
  
     > * **`balance_factor >= |2|`** : root node로 부터 left_height = 0, right_height = 2 상태.
     >
     > ![RR](https://user-images.githubusercontent.com/23169707/73453963-708fd180-43b0-11ea-856f-f6f96d9f709b.gif)
     >
     > 1. **parent node의 right_child node를 root로 변환.**
     > 2. **기존의 parent node를 새로운 root의 left_child node로 변환.**
     > 3. **Root가 되는 right_child node의 left_child node가 존재하는 경우, 기존 parent node의 right_child node로 연결.**
  
  3. **`LR-rotation`**
  
     > * **`balance_factor >= |2|`** : root node로 부터 left_height = 2, right_height = 0 상태.
     >
     > ![LR](https://user-images.githubusercontent.com/23169707/73454173-e1cf8480-43b0-11ea-94cb-d0bd3b380649.gif)
     >
     > 1. **LR 상태의 tree를 `RR-rotation`을 통해 LL 상태로 변환.**
     > 2. **`LL-rotation` 수행.**
  
  4. **`RL-rotation`**
  
     > * **`balance_factor >= |2|`** : root node로 부터 left_height = 0, right_height = 2 상태.
     >
     > ![RL](https://user-images.githubusercontent.com/23169707/73454177-e3994800-43b0-11ea-88c0-546f682c5e0a.gif)
     >
     > 1. **RL 상태의 tree를 `LL-rotation`을 통해 RR 상태로 변환.**
     > 2. **`RR-rotation` 수행.**

