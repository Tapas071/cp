            # Stack

            ## Implmentation

            ```cpp
            stack<int> s;

            s.push(10); // inserting the element 10 into the stack

            int topElement = s.top(); // getting the topmost element of the stack

            s.pop(); // removing the top element from the stack

            s.empty(); // to check if the stack is empty or not: it will return true or false

            stack<int>temp;
            s.swap(temp); // now s  is temp and temp is s   

            ```

            ### To traverse through the stack

            ```cpp
            while(!s.empty()){
                int topElement = s.top();
                cout<<topElement<<endl;
                s.pop();
            }
            ```
