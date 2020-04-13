# Data Structure

## vs. Deque

- **`vector`**
  
  > **vector**는 내부 **capacity()**가 고갈되면, 전체 메모리 크기만큼 **reallocation** 과정을 수행.

- **`deque`**

  > **deque**은 fixed size의 **chunk**를 연결하는 구조를 가지기 때문에, 
  > 메모리가 추가될 때, **chunk** 단위로 확장되는 과정.
  >
  > 
  > **→ That's why, `stack` 과 `queue`는 `deque class`가 base.** 
