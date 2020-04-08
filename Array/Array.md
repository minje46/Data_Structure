# Data Structure

## Array

- **Array is data structure that controls associated data by grouping it into one name**.<br>(배열이란, 연관된 데이터를 하나의 이름으로 그룹핑해서 관리하기 위한 자료구조.)
  
  > → **Array는 data structure의 size가 fixed되어 있고, data를 physical address에 sequential 저장한다.**
  >
  > * Index : Data(value)에 대한 위치.
  > * Value : Memory에 저장되어 있는 값.
  > * Element : Index와 Value를 포함한 Array의 data.
  >
  > ![image](https://user-images.githubusercontent.com/23169707/66268907-0c835380-e87d-11e9-9348-1274f8f99c4d.png)

- **Features**

  1. Fixed size 

     > → Size를 변경할 수 없다.
     >
     > - 가변 array일 경우.
     >
     > 1. 새로운 size를 할당하기 위해 memory가 있는지 탐색.
     > 2. 기존 array의 data를 copy.
     > 3. 기존 array를 delete.
     >
     > → 3번의 Task + Memory search의 resource 낭비 大

  2. Index

     > ![image](https://user-images.githubusercontent.com/23169707/66269394-cdf09780-e882-11e9-982a-53134a8817d6.png)
     >
     > Pros : `Data를 찾기 위한 search과정 없이. index를 통해 빠른 access가 가능하다.[=random access]`
     >
     > Cons : `Data와 index가 fixed되어 있어, 중간에 delete되면 memory 낭비 발생.`

  3. No functions.

     > Pros : `Array는 다른 data structure의 component(element)가 될 수 있다.`
     >
     > Cons : `기능을 사용하기 위해 직접 구현해야 한다.` 

  4. Cache hit

     > → Cache hit의 가능성이 높기 때문에 high performance.

- **Limits**

  * Fixed size & Index

    > ![image](https://user-images.githubusercontent.com/23169707/66269537-7a7f4900-e884-11e9-9bcb-35598650b81d.png)
    >
    > → `Memory 낭비` : Array는 index에 따라서 value를 유지하기 때문에, element가 delete되어도 null(빈자리)가 남게된다.
    >
    > → `Memory 종속` : Array는 연속된 memory를 할당하기 때문에, memory에 종속적이다.
    >
    > → `Sequential` : Data가 순차적으로 연속 저장되어 있기 때문에, 중간에 data를 insert & delete하는 경우 overhead. 


- **Time complexity.**

  > * Indexing
  >   $$
  >   O(1)
  >   $$
  >   → Index를 이용하여 direct access가 가능하기 때문.
  >
  > * Search
  >   $$
  >   O(N)
  >   $$
  >   → N만큼 linear search해야 하기 때문.
