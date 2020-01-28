# Data Structure

## Heap

- **Heap is data structure that is designed to search the maximum and minimum value easily based on the complete binary tree structure.**
  (힙은 완전 이진 트리 구조를 기반으로 최댓값, 최솟값을 쉽게 찾아내기 위한 자료구조.)

  > → **Heap의 표준 자료구조는 Array.**
  > → **Parent node와 child node의 key value 사이에 대소관계가 성립.**
  >
  > * Max Heap
  >   → 모든 node에 저장된 값은 child node에 저장된 값보다 크거나 같아야 한다. (Root node에 가장 큰 값이 저장.)
  >   <img width="202" alt="max" src="https://user-images.githubusercontent.com/23169707/73246166-43e18b80-41f1-11ea-9678-67844f685dc7.png">
  > * Min Heap
  >   → 모든 node에 저장된 값은 child node에 저장된 값보다 작거나 같아야 한다. (Root node에 가장 작은 값이 저장.)
  >   <img width="203" alt="min" src="https://user-images.githubusercontent.com/23169707/73246172-480da900-41f1-11ea-8b91-cac4ace9035d.png">


- **Features**

  - Insert
  
    > <img width="403" alt="insert" src="https://user-images.githubusercontent.com/23169707/73247667-c1f36180-41f4-11ea-9519-e5fa33eade0b.png">
    >
    > 1. new node는 heap의 마지막 node에 insert.
    >    (Complete binary tree : Leaf node의 left → right 순서로 추가)
    >
    > 2. parent node와 value의 대소관계를 비교.
    >
    >    > max heap : new node가 크다면, `swap(parent, new)`
    >    >
    >    > min heap : new node가 작으면, `swap(parent, new)`
    >
    > 3. Root node까지 반복.
  
  - Delete
  
    > <img width="429" alt="delete" src="https://user-images.githubusercontent.com/23169707/73248118-b3597a00-41f5-11ea-9fac-90b0c3d7a85c.png">
    >
    > 1. Root node를 delete.
    >
    >    > max heap : root node(Maximum value.)
    >    >
    >    > min heap : root node(Minimum value.)
    >
    > 2. Heap의 마지막 node를 root node로 이동.
    >
    > 3. children node들과 value의 대소관계를 비교.
    >
    >    > max heap : new node가 크다면, `swap(parent, new)`
    >    >
    >    > min heap : new node가 작으면, `swap(parent, new)`
    >
    > 4. Leaf node까지 반복. (Heap 재구성.)
  
- **Examples**

  > - Heap sort
  >
  >   > `O(NlogN)` 성능을 가지는 array sort.
  >
  > - Priority queue
  >
  >   > `O(logN)` 성능을 가지는 priority queue 구현 가능.
  >
  > - Graph algorithm


- **Implemented**

  * Array

    > `pros` : **index를 통해 node에 접근할 수 있다.**
    >
    > - Index
    >   → [0] 은 사용하지 않는다.
    >   → `parent node` : `child node의 index / 2`
    >
    >   → `left child node` : `parent node의 index * 2`
    >
    >   → `right child node` : `parent node의 index * 2 + 1`
    
  * List
  
    > `Cons` : `new node`를 **heap**의 마지막 위치에 추가하는 것이 hard.


- **Time complexity.**

  > * Array 
  >
  > $$
  > O(log N)
  > $$
  > → **Tree의 높이만큼 비교연산을 진행하면 되기 때문이다.**
  >

