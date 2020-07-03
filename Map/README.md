# Data Structure

## Map

- **Map은 **
  **Map은 `key:value` 형태로 data를 중복없이 저장하며, iterator를 이용하여 data에 접근하는 data structure.**
  
  > <img width="137" alt="제목 없음" src="https://user-images.githubusercontent.com/23169707/86357879-7fedb080-bca9-11ea-8c32-8a5e23fb0cd2.png">
  >
  > Map 내부의 `key`는 중복될 수 없지만, `value`는 중복될 수 있다.
  
- **`tree_map`**

  >**tree map은 data의 순서를 보장한다.**
  >
  ><img width="382" alt="제목 없음" src="https://user-images.githubusercontent.com/23169707/86356610-824f0b00-bca7-11ea-801d-a0247f18efd4.png">
  >
  >→ `red_black_tree`를 활용하여 ascending sort로 data 저장.
  >$$
  >O(log N)
  >$$
  >→ `tree` 구조로 data를 저장하기 때문에, tree의 높이에 성능이 결정.


- **`hash_map`**

  > **hash map은 data의 순서를 보장하지 않는다.**
  >
  > <img width="539" alt="제목 없음" src="https://user-images.githubusercontent.com/23169707/86357611-0ce43a00-bca9-11ea-9130-c8ad54559bf5.png">
  >
  > → `hash_function`을 활용하여 data를 저장.
  > $$
  > O(1)
  > $$
  > → `hash` 구조로 data가 저장되기 때문에, insert, erase, find 연산을 direct로 수행할 수 있다.

