# Data Structure

## Array

- **Array(배열)는 연관된 data를 하나의 이름으로 grouping하여 관리하기 위한 data structure.**
  
  > <img width="315" alt="ar" src="https://user-images.githubusercontent.com/23169707/79628887-30a2e400-8180-11ea-8472-23fded5727b0.png">
  >
  > Array는 **index:value** 형태를 가지고 **fixed size**로 구성된다.
  
- **Features**

  1. **`Index`**

     > * **random access** : data를 search하는 과정 없이, index를 통해 directly access가 가능하다.
  
  2. **`Cache hit`**
  
     > * **high performance** : cache의 spatial locality에 기반하여, cache hit의 가능성이 높아진다.
     >
     >   > **cache memory는 data locality(지역성)의 원리 기반**
     >   >
     >   > * `Temporal locality` : 시간 지역성은 한 번 참조된 data는 재사용 될 가능성이 높다.
     >   > * `Spatial locality` : 공간 지역성은 array의 data에 연속적으로 접근할 때, 참조된 data 근처에 있는 data가 재사용될 가능성이 높다.
  

- **Limits**

  1. **`Index`**

     > * **overhead** : index:data 구조를 가지고 있기 때문에, 중간에 data insert&delete 하는 overhead가 크다.
     
  2. **`Fixed size`**
  
     > * **Memory waste** 
     >
     >   > Array는 **연속된 memory allocation**을 하기 때문에, **memory에 종속적**이다.
     >   >
     >   > Data가 중간에 delete되는 경우, **불필요한 memory를 차지**하고 있게 된다.


- **Time complexity.**

  > * **Data access**
  >   $$
  >   O(1)
  >   $$
  >   → random access가 가능하기 때문.
  >
  > * **Data search**
  >   $$
  >   O(N)
  >   $$
  >   → N만큼 linear search해야 하기 때문.
