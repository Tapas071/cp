## `std::lower_bound`

- **Finds**: The iterator to the first element that is **not less than** the given value.  
  This means it points to the first element that is **greater than or equal to** the value.

- **Example**:  
  For a sorted array `[1, 3, 5, 5, 7, 9]`,  
  `lower_bound(5)` would point to the **first 5** at index **2**.

- **Time Complexity**: `O(log n)`

---

## `std::upper_bound`

- **Finds**: The iterator to the first element that is **strictly greater than** the given value.

- **Example**:  
  For a sorted array `[1, 3, 5, 5, 7, 9]`,  
  `upper_bound(5)` would point to the **7** at index **4**.

- **Time Complexity**: `O(log n)`

---

> **Note**: Both functions require the container to be **sorted** to achieve logarithmic time complexity.
