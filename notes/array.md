# C++ Array and String Methods Reference

## Array Operations


### Common Array Operations

#### Initialization
```cpp
int arr[5] = {1, 2, 3, 4, 5};  // Static initialization
int arr[] = {1, 2, 3, 4, 5};   // Size automatically determined
vector<int> nums = {1, 2, 3};  // Vector initialization
vector<int> nums(n);           // Vector of size n
vector<int> nums(n, value);    // Vector of size n with value
```

#### Array Properties
- `sizeof(arr)` - Returns the total size in bytes
- `sizeof(arr)/sizeof(arr[0])` - Gets the length of array

### STL Array (`<array>`)
Modern C++ provides `array` container which is safer than C-style arrays.

#### Properties
- `array.size()` - Returns number of elements
- `array.empty()` - Checks if array is empty
- `array.front()` - Access first element
- `array.back()` - Access last element

#### Methods
- `array.fill(value)` - Fill array with value
- `array.swap(other_array)` - Swap contents with another array
- `array.at(index)` - Access element with bounds checking

### Common Array Algorithms (`<algorithm>`)

#### Sorting
```cpp
sort(nums.begin(), nums.end());                    // Sort vector
sort(nums.begin(), nums.end(), greater());          // Sort in descending
sort(arr, arr + n);                    // Sort array
sort(arr, arr + n, greater());    // Sort in descending
```

#### Searching
```cpp
binary_search(arr, arr + n, value);    // Binary search
find(arr, arr + n, value);             // Linear search
```

#### Modification
```cpp
reverse(nums.begin(), nums.end());     // Reverse vector
reverse(arr, arr + n);                 // Reverse array
rotate(arr, arr + k, arr + n);         // Rotate array by k positions
```

#### Min/Max Operations
```cpp
*max_element(nums.begin(), nums.end()); // Find maximum element
*min_element(nums.begin(), nums.end()); // Find minimum element
max_element(arr, arr + n);             // Find maximum element
min_element(arr, arr + n);             // Find minimum element
```

## String Operations (`<string>`)
String in C++ is part of the STL and provides many built-in methods.

### String Properties
- `str.length()` or `str.size()` - Returns string length
- `str.capacity()` - Returns current allocated capacity
- `str.empty()` - Checks if string is empty

### String Methods

#### Modification
```cpp
str.append(str2)           // Append string
str.push_back(char)        // Add character at end
str.pop_back()            // Remove last character
str.insert(pos, str2)     // Insert at position
str.erase(pos, len)       // Remove characters
str.clear()               // Clear string
str.replace(pos, len, str2) // Replace substring
```

#### Access
```cpp
str.at(pos)               // Access with bounds checking
str[pos]                  // Direct access
str.front()               // First character
str.back()                // Last character
```

#### Search
```cpp
str.find(substr)          // Find substring
str.rfind(substr)         // Find last occurrence
str.find_first_of(chars)  // Find first of any char
str.find_last_of(chars)   // Find last of any char
```

#### Substring
```cpp
str.substr(pos, len)      // Extract substring
```

#### Comparison
```cpp
str.compare(str2)         // Compare strings
str == str2               // Equality comparison
str < str2                // Less than comparison ( it will make lexicographical comparison)
```

#### Conversion
```cpp
str = to_string(number)   // Convert number to string
stoi(str)                 // String to integer
stof(str)                 // String to float
stod(str)                 // String to double
```

### String Input/Output
```cpp
getline(cin, str)         // Read line from input
cin >> str                // Read word from input
cout << str               // Output string
```

## Best Practices

1. Use range-based for loops when possible:
```cpp
for(const auto& element : array) {
    // Process element
}
```

1. Use string methods instead of C-style string functions
2. Always check bounds when accessing elements
3. Use `at()` for safe element access with bounds checking

## Common Pitfalls to Avoid

1. Array bounds overflow
2. Not checking string method return values
3. Using C-style strings when std::string would be better
4. Forgetting to include necessary headers
5. Not checking for empty strings/arrays before operations

