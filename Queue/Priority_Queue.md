# Data Structure

## Priority Queue

- **Priority queue(우선 순위 큐)는 우선 순위를 고려하는 data structure.**

  > → **Priority queue는 비선형 자료구조. (Heap 구현)**
  >
  > > Queue는 선형 자료구조. (Array or List 구현)
* **Examples**

  > 1. **Network traffic control**
  > 2. **OS scheduler**
  
* **Implemented**

  * **`array & list`**

    >* **cons** : priority를 비교하기 위해 모든 data를 비교해야한다.
    >
    >$$
    >O(N)
    >$$
    > 
    
  * **`heap`**
  
    > * **pros** : 각 level의 parent node만 비교하면 된다.
    > * **cons** : pop 수행 후, 매번 heap의 재구성이 요구된다.
    >
    > $$
    > O(logN)
    > $$
    >
    > 

