# Data Structure

## Heap

- **Heap은 complete binary tree(완전 이진 트리)구조를 기반으로 최대,최소 값을 빠르게 search하기 위한 data structure.**
  
  > * **`max heap`**
  >   <img width="202" alt="max" src="https://user-images.githubusercontent.com/23169707/73246166-43e18b80-41f1-11ea-9678-67844f685dc7.png">
  > * **`min heap`**
  >   <img width="203" alt="min" src="https://user-images.githubusercontent.com/23169707/73246172-480da900-41f1-11ea-8b91-cac4ace9035d.png">
  >
  > Heap의 **표준 자료구조는 array**이며, **root는 max,min value**를 저장하고 있다.
  
- **Features**

  1. **`Insert`**
  
     > <img width="300" alt="insert" src="https://user-images.githubusercontent.com/23169707/73247667-c1f36180-41f4-11ea-9519-e5fa33eade0b.png">
     >
     > - new node는 leaf(heap의 마지막 위치)에 insert.
     >
     > - parent node와 value의 대소관계를 비교.
     >
     >   > `max heap` : new node가 크다면, `swap(parent, new)`
     >   >
     >   > `min heap` : new node가 작으면, `swap(parent, new)`
     >
     > - root node까지 recursive.
  
  2. **`Delete`**
  
     > <img width="300" alt="delete" src="https://user-images.githubusercontent.com/23169707/73248118-b3597a00-41f5-11ea-9fac-90b0c3d7a85c.png">
     >
     > * root node를 delete.
     >
     >   > `max heap` : root node(maximum value.)
     >   >
     >   > `min heap` : root node(minimum value.)
     >
     > * heap의 마지막 node를 root node로 이동.
     >
     > * children node들과 value의 대소관계를 비교.
     >
     >   > `max heap` : new node가 크다면, `swap(parent, new)`
     >   >
     >   > `min heap` : new node가 작으면, `swap(parent, new)`
     >
     > * leaf node까지 반복. (heap 재구성.)
  
- **Examples**

  > 1. **heap sort** : `O(NlogN)` 성능을 가지는 array sort.
  > 2. **priority queue** : `O(logN)` 성능을 가지는 priority queue 구현.


- **Implemented**

  * **`array`**

    > * **pros** : index를 통해 node access.
    >
    >   > `parent node` : child node의 index / 2
    >   >
    >   > `left child node` : parent node의 index * 2
    >   >
    >   > `right child node` : parent node의 index * 2 + 1
    
  * **`list`**
  
    > * **cons** : `new node`를 **heap**의 마지막 위치에 추가하는 것이 hard.


- **Time complexity.**

  > * **array** 
  >
  > $$
  > O(log N)
  > $$
  > → **Tree의 높이만큼 비교연산을 진행하면 되기 때문이다.**
  >

