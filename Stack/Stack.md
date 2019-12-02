# Data Structure

## Stack

- **Stack is data structure that data is stacked like a pile of things.**
  <br>

  (스택이란, 물건을 쌓아 올리듯 자료를 쌓아 올린 형태의 자료구조.)

  > → **Stack은 LIFO(Last In First Out) 형식으로 마지막에 삽입된 자료가 가장 먼저  꺼내진다.**
  >
  > * Top : 가장 최근에 저장된 데이터를 가리킨다.
  > * Push : Stack의 Last위치에 data를 저장한다.
  > * Pop : Stack에서 Top이 가리키는 data를 삭제한다.
  >
  > ![stack](https://user-images.githubusercontent.com/23169707/69931526-fa373600-150a-11ea-8a66-0fe96c7beb2f.jpg)


- **Features**

  1. LIFO(Last In First Out)

     > → LIFO(Last In First Out) 형식으로 마지막에 삽입된 자료가 가장 먼저  꺼내진다.
     >
     > * Top이 가리키는 data만 접근할 수 있다.
     >
     >   > → 가장 마지막에 push된 data.
     >
     > * Stack에 저장된 중간의 data는 알 수 없다.
     >
     >   > → Data search가 불가능.
   >
     > * First pushed data는 위에 stacked된 data를 모두 pop해야 접근할 수 있다.

  2. Linear structure(선형구조)
  
     > → Stack에 저장된 data는 linear structure를 가진다.
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

  > * Recursive algorithm
  >
  >   > → Recursive function의 경우, temporary data를 stack에 저장하고, back tracking할 때 stack의 data를 pop하는 구조.
  >
  > * Web browser (뒤로가기 기능)
  >
  > * Undo (실행 취소)


- **Implemented**

  * Array

    > → `Pros` : Implemented easily. (Top의 index만 조정해주면 된다.)
    >
    > → `Cons` : Fixed size.
    
  * List
  
    > → `Pros` : Memory dynamic allocation. (저장소를 동적으로 할당.)
    >
    > → `Cons` : Implement hard.


- **Time complexity.**

  > * Array
  >   $$
  >   O(1)
  >   $$
  >   → Array로 구현된 경우, **index를 통해 top을 저장**하고 있기 때문에 Push & Pop & Empty & Size 모두 O(1)로 가능.
  >
  > * List
  >   $$
  >   O(N)
  >   $$
  >   → List로 구현된 경우, Head에서 top까지 access해야 Size를 알 수 있다.