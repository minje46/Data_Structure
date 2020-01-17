# Data Structure

## Deque (Double Ended Queue)

- **Deque is data structure that data can be inserted and deleted at both of ends.**
  (덱은 양 끝에서만 자료를 삽입하고 삭제가 가능한 형태의 자료구조.)

  > → **Deque은 Queue와 Stack의 성질을 모두 가지고 있다고 볼 수 있다.**
  >
  > → **Double Linked List를 통해 구현.**
  >
  > - Front : Deque의 첫 번째 data 위치를 가리킨다.
  >
  > - Rear : Deque의 마지막 data 위치를 가리킨다.
  >
  >   <img width="416" alt="Deque" src="https://user-images.githubusercontent.com/23169707/72618897-7b457200-397f-11ea-82db-45e22495fce0.png">


- **Features**

  2. Front & Rear

     > `pros` : Front 와 Rear를 통해 **deque**의 앞과 뒤 data에 접근이 용이.
     >
     > `cons` : **deque**에 저장된 중간의 data에 접근이 불가능.
     
  3. Random access
  
     > 
     
  3. Linear structure(선형구조)
  
     > → Deque에 저장된 data는 linear structure를 가진다.
     >
     > * Linear structure
     >
     >   > → 자료 간의 관계가 1 : 1 관계를 가진다.
     >   > ex) array, list, stack, queue
     >
     > * Nonlinear structure
     >
     >   > → 자료 간의 관계가 1 : N의 관계를 가진다.
     >   > ex) Tree
- **Examples**

  > * Scheduler
  >
  >   > → Scheduler가 복잡해지거나, priority를 높이는 경우 효율적.
  >


- **Time complexity.**

  > $$
  > O(1)
  > $$
  > → `front`와 `rear`를 통해 **push, pop, empty, size** 모두 O(1)로 가능.
  >
  > ex) **`size` = `rear` - `front`**
  > → `List`로 구현하는 경우, `size`의 성능은 O(N).