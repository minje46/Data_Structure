# Data Structure

## Deque (Double Ended Queue)

- **Deque is data structure that data can be inserted and deleted at both of ends.**<br>(덱은 양 끝에서만 자료를 삽입하고 삭제가 가능한 형태의 자료구조.)
  
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
  1. Front & Rear

     > `pros` : Front 와 Rear를 통해 **deque**의 앞과 뒤 data에 접근이 용이.
     >
     > `cons` : **deque**에 저장된 중간의 data에 접근이 불가능.
     
  2. Memory allocation
  
     > → **deque**은 여러 개의 memory block을 할당하고, user에게는 하나의 block처럼 보이게 하는 방식.
     >
     > ​	Data를 추가할 때, memory가 부족하다면, 일정한 크기의 memory block을 할당하여 연결한다.
     >
     > ![image](https://user-images.githubusercontent.com/23169707/72663801-c623c000-3a39-11ea-8c2c-950a7385f2d5.png)
     
  3. Random access
  
     > → **deque**는 sequence container이며, array 기반 container이다.
     > 그래서 **vector**와 유사한 특징을 가지며, random access iterator를 지원한다.
     >
     > <img width="209" alt="Random_access" src="https://user-images.githubusercontent.com/23169707/72624627-a71a2500-398a-11ea-9200-cc8f2981f6bc.png">
     >
     > `Random Access` : 특정 위치로 directly access 가능한 것을 말한다.
  
  4. Linear structure(선형구조)
  
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
