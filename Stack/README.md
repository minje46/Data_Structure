# Data Structure

## Stack

- **Stack은 data를 linear structure로 쌓아 올린 형태의 data structure.**
  
  > <img width="250" alt="st" src="https://user-images.githubusercontent.com/23169707/79637313-5a2c3180-81b9-11ea-922b-5d40318d1972.png">
  >
  > Stack은 **LIFO(Last In First Out)**으로 마지막에 inserted data가 먼저 pop 된다.

- **Features**

  1. **`LIFO`**

     > * **data access** : `top`이 가리키는 data에만 접근할 수 있다.
     > * **linear structure** : data는 선형구조로 저장된다.
  
- **Examples**

  > 1. **recursive algorithm**
  >    → recursive function의 경우, temporary data를 stack에 저장하고, back tracking할 때 stack의 data를 pop하는 구조.
  > 2. **web browser (뒤로가기 기능)**
  > 3. **undo (실행 취소)**

- **Implemented**

  * **`array`**

    > * **pros** : implemented easily. (`top`의 index만 조정하면 된다.)
    > * **cons** : fixed size.

  * **`list`**

    > * **pros** : memory dynamic allocation. (저장소를 동적으로 할당.)
    > * **cons** : implement hard.


- **Time complexity.**

  > * **push & pop**
  >   $$
  >   O(1)
  >   $$
  >   → top을 사용하면 되기 때문.
  >
  > * **size**
  >   $$
  >   O(N)
  >   $$
  >   → list로 구현했을 경우, head에서 top까지 linear search 필요.