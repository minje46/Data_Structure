

# Data Structure

## Red-Black Tree

- **Red-Black tree는 tree의 height 균형을 유지하기 위한 binary search tree.**

  > <img width="250" alt="rb" src="https://user-images.githubusercontent.com/23169707/79867799-e2107680-8419-11ea-8570-8bd2703d7097.png">
  >
  > **Condition of red-black tree**
  >
  > * **root node is black.**
  > * **모든 leaf node(NIL)은 black.**
  > * **node가 red라면, children은 모두 black. (No double red)**
  > * **각 node로부터 해당 node의 자손인 leaf로 가는 경로들은 모두 같은 수의 black node를 포함한다.**
* **Features**

  1. **`restructing`**

     > **insert node의 uncle(parent's sibling) node 색이 black 이거나, NULL인 경우.**
     >
     > <img width="241" alt="rcs" src="https://user-images.githubusercontent.com/23169707/79868964-ab3b6000-841b-11ea-8762-9c0a5bd5e6d0.png">
     >
     > 1. **insert node, parent node, grand-parent node를 reconstructing.**
     > 2. **3개의 node를 ascending sort.**
     > 3. **가운데 값을 가진 node를 parent node[black], 나머지 node를 children node[red].**
     
  2. **`recoloring`**

     > **insert node의 uncle(parent's sibling) node 색이 red인 경우.**
     >
     > <img width="241" alt="rc" src="https://user-images.githubusercontent.com/23169707/79869027-c3ab7a80-841b-11ea-89a8-95991135870e.png">
     >
     > 1. **parent node(v), uncle node(w), grand-parent node를 recoloring.**
     > 2. **parent node(v) 와 uncle node(w)를 black, grand-parent node는 red로 한다.**
     > 3. **root node는 항상 black이어야 하며, recoloring 이후, double red가 다시 발생하면 recoloring 반복.**

* **Time complexity**

  > * **search, insert, delete**
  >   $$
  >   O(logN)
  >   $$

