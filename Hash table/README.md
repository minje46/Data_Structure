# Data Structure

## Hash Table

- **Hash table은 `hash key:hash value` 형식으로 data를 저장하는 data structure.**

  > <img width="353" alt="hs" src="https://user-images.githubusercontent.com/23169707/73607036-7f0ef200-4544-11ea-8f7b-9a0066846c7d.png">
  >
  > `hash function` : random size를 가진 data를 fixed size의 data로 변환시키는 것.
  >
  > `table(map)` : Data를 `key:value` type으로 저장하는 구조. (Key는 unique.)


- **Features**

  1. **`pros`**
  
     > * 적은 resource로 많은 data를 효율적으로 관리할 수 있다.
     > * `key:value` type으로 저장되기 때문에, `O(1)`의 성능으로 data access할 수 있다.
  
  2. **`cons`**
  
     > * `hash function`의 의존도가 높다.
     > * 동일한 `key`를 가지는 경우, **collision**을 해결해야한다.
     >
     > Ex) `open addressing` / `closed addressing`
  
- **Implemented**

  * **`open addressing`**

    > **open addressing method는 collision이 발생하는 경우, 다른 자리에 data를 저장하는 방식.**
    >
    > > * `pros` : 저장공간을 추가할 필요가 없다.
    > > * `cons` : hash table state(empty, delete, using)을 관리해야한다. (collision 발생 후, data가 초기 hash key 값과 다른 위치에 저장된 경우, 이를 찾기 위함.)
    >
    > 1. `linear probing`
    >    → collision이 발생할 경우, 주위의 empty space에 data를 저장.
    > 2. `double hasing`
    >    → collision이 발생했을 때, 불규칙한 hash를 통해 clustering을 방지하는 방식.

  * **`closed addressing`**

    > **closted addressing method는 collision이 발생해도, 현재 위치에 저장하는 방식.**
    >
    > > * `pros` : 제한된 table을 효율적으로 사용 가능.
    > > * `cons` : 추가 저장 공간이 필요하며, 특정 hash 값에 clustering 현상.
    >
    > 1. `chaining`
    >    → collision이 발생하면, 추가로 memory를 생성하여 data를 저장하는 방식.

* **Time complexity**

  > * Best case
  >   $$
  >   O(1)
  >   $$
  >   → **Hash key를 통해 data에 index access가 가능.**
  >
  > * Worst case
  >   $$
  >   O(N)
  >   $$
  >   → **collision 해결 방식에 따라, N개의 data를 탐색해야 할 수 도 있다.**