# Data Structure

## Linked list

- **Linked list is a data structure that implements a list using a reference list.**
  <br>

  (링크드 리스트는 내부적으로 참조리스트를 이용하여 리스트를 구현한 자료구조.)

  > → **Data의 insert와 delete를 할때, 불필요한 data의 복사가 이루어지지 않는다.**
  >
  > > ![image](https://user-images.githubusercontent.com/23169707/66320304-8e48af00-e959-11e9-8dc1-86f397572fc7.png)
  >
  > → **Data와 pointer를 함께 저장하고 있어야 하기 때문에 memory의 소비가 크고, search 속도가 느리다.**
  >
  > > <img width="473" alt="Linked_list" src="https://user-images.githubusercontent.com/23169707/66320281-82f58380-e959-11e9-8da5-dfce7a1b45ed.png">
  >
  > * **Operation**
  >
  >   > → **List가 가지고 있는 functions(기능).**
  >   >
  >   > - Insert : 처음, 중간, 끝에 element를 insert.
  >   > - Delete : 처음, 중간, 끝에 있는 element를 delete.
  >   > - Next : next node의 pointer 저장.
  >   > - Prev : previous node의 pointer 저장.

- **Features**

  - Pointer

    >  `Node가 pointer로 연결되어 있어, data insert와 delete 용이.`

  - Memory utility

    > Pros : `N개의 data를 저장할때, 불연속적인 단위로 저장이 가능하다.` 
    >
    > Cons : `Pointer를 위한 추가 memory가 필요하다.`

- **Limits**

  - Sequential access

    > → Pointer로 node가 연결되어 있기 때문에, sequential access만 가능하다.

- **Time complexity.**

  > - Indexing
  >   $$
  >   O(N)
  >   $$
  >   → Sequential access만 가능하기 때문.
  >
  > - Insert & Delete *at beginning*
  >   $$
  >   O(1)
  >   $$
  >   → Node를 insert, delete해주면 되기 때문.
  >
  > - Insert & Delete *in middle*
  >   $$
  >   O(N)
  >   $$
  >   → Sequential access를 통해 search하기 때문.
  >
  > - Insert & Delete *at end*
  >   $$
  >   O(1) or O(N)
  >   $$
  >   → Tail pointer의 존재 유무에 따라 성능 차이.

