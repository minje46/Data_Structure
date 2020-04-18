# Data Structure

## Dynamic Array (Array List, Vector)

- **Dynamic array(동적 배열)은 array를 이용하여 list를 구현한 data structure.** 

  > <img width="303" alt="al" src="https://user-images.githubusercontent.com/23169707/79631308-6ac9b100-8193-11ea-80c0-b4a4583ff3b8.png">
  >
  > Dynamic array는 array로 구현되기 때문에 fixed size를 할당받으며, 필요에 따라 dynamic allocation을 통해 크기를 변동할 수 있다.
  
- **Features**

  1. **`Index`**

     > * **random access** : data를 search하는 과정 없이, index를 통해 directly access가 가능하다.
  
  2. **`Unfixed size`**
  
     > * **dynamic allocation** : memory를 동적으로 할당하여, data를 저장할 수 있다.
  
- **Limits**

  1. **`Efficiency`**

     > * **overhead** : unfixed size의 특성을 유지하기 위해, threshold를 초과할 경우, 새로운 fixed size의 memory를 할당하고, previous data를 copy & delete 해야한다.


- **Time complexity.**

  > * **Data access**
  >   $$
  >   O(1)
  >   $$
  >   → Index를 이용하여 direct access가 가능하기 때문.
  > * **Data search**
  >   $$
  >   O(N)
  >   $$
  >   → 기존의 data를 shift해야 하기 때문.
  >
  > * **Data insert**
  >   $$
  >   O(1) or O(N)
  >   $$
  >   → Allocated memory에 따라, dynamic allocation을 우선 수행하게 되는 경우가 존재.