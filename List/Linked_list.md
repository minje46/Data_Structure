# Data Structure

## Linked list

- **Linked list(연결 리스트)는 node를 이용하여 list를 구현한 data structure.**
  
> <img width="444" alt="ll" src="https://user-images.githubusercontent.com/23169707/79631106-bd09d280-8191-11ea-95dc-7a09489f7da1.png">
  >
> Linked list는 data를 node(data:pointer)형태로 저장하고, node를 서로 연결 시킨다.
  
- **Features**

  1. **`Pointer`**

     > * **sequential access** : pointer를 이용하여, 다음 data를 저장하기 때문에 data insert&delete가 쉽다.
     > * **memory utilization** : empty element를 허용하지 않기 때문에, memory waste를 줄일 수 있다.

  2. **`Unfixed size`**

     > * **dynamic allocation** : memory를 동적으로 할당하여, data를 저장할 수 있다.

- **Limits**

  1. **`Pointer`**

     > * **memory waste** : data:pointer 구조를 가지고 있기 때문에, 다음 data를 저장하는 pointer라는 memory waste가 발생한다.
     > * **low speed** : data access를 하기 위해서 항상 linear search를 해야한다.

- **Time complexity.**

  > - **Data access & search && insert && delete**
  >   $$
  >   O(N)
  >   $$
  >   → Sequential access만 가능하기 때문.
  >

