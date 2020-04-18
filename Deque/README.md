# Data Structure

## Deque (Double Ended Queue)

- **Deque(덱)은 data를 앞과 뒤 모두에서 처리할 수 있는 형태의 data structure.**
  
  > <img width="250" alt="Deque" src="https://user-images.githubusercontent.com/23169707/72618897-7b457200-397f-11ea-82db-45e22495fce0.png">
  >
  > Deque은 **double linked list**를 통해 구현되어 queue와 stack의 성질을 모두 가지고 있다.
  
- **Features**
  
1. **`Memory allocation`**
  
     > * **deque** : deque은 dynamic allocation할 때, fixed size의 chunk를 연결한다.
     >
     > <img width="250" alt="dq" src="https://user-images.githubusercontent.com/23169707/79639063-1e4a9980-81c4-11ea-9c76-dc88b6ec3b31.png">
     >
     > → user에게는 하나의 block처럼 보이게 한다.
     >
     > * **vector(dynamic array)** : vector는 dynamic allocation할 때, 내부 capacity가 고갈되면, 전체 메모리 크기만큼 reallocation한다.
     >
     >   → dynamic array처럼 threshold 기준으로, reallocation 수행.
  
  2. **`front, rear`**
  
     > * **data access** : `front`와 `rear`를 통해 앞과 뒤에서 data에 접근할 수 있다.
     > * **linear structure** : data는 선형구조로 저장된다.
  
- **Examples**

  > **scheduler** : scheduler가 복잡해지거나, priority를 높이는 경우 효율적.


- **Time complexity.**

  > $$
  > O(1)
  > $$
  > → `front`와 `rear`를 통해 **push, pop, empty, size** 모두 O(1)로 가능.
  >
  > ex) **`size` = `rear` - `front`**

