# Data Structure

## Binary Tree

- **Binary tree는 root node를 중심으로 둘로 나뉘는 두 개의 sub tree도 binary tree이어야 하며, 그 sub tree의 모든 sub tree도 binary tree이어야 한다.**
  
> **Condition of binary tree**
  >
  > - **Binary tree는 root node를 중심으로 2개의 sub tree로 나뉜다.**
  > - **2개의 sub tree도 binary tree이어야 한다.**



* `Perfect Binary Tree`

  > - Tree의 모든 internal nodes가 two children을 가진다.
  >
  > - All leaf nodes가 same level에 존재.



* `Full Binary Tree`

  > Tree의 모든 level의 node가 full(포화) state.
  >
  > <img width="348" alt="Full_Binary_Tree" src="https://user-images.githubusercontent.com/23169707/72912077-70734e80-3d7e-11ea-9d4d-2252043a17d4.png">
  >
  > → Full state가 아니기 때문에, not full binary tree.
  >
  > → Node 3의 left child node가 존재하지 않기 때문에(빈 틈 존재), not complete binary tree.



* `Complete Binary Tree`

  > Tree의 node가 빈 틈 없이 채워진 state.
  >
  > → 모든 level에 full state가 유지되는 것이 차이점.
  >
  > <img width="256" alt="Complete_Binary_Tree" src="https://user-images.githubusercontent.com/23169707/72912317-ce079b00-3d7e-11ea-83b2-f6bbb886f04e.png">
  >
  > → Node가 위치할 수 있는 곳에 node가 존재하지 않는다면, empty set(공집합) node가 존재하는 것으로 간주.

