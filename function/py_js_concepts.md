# Python aur JavaScript me "Pass-by-Reference" aur "Pass-by-Value" ka Concept

C++ jaise pass-by-reference (`&`) ka direct concept Python aur JavaScript me nahi hota hai. Inka parameter passing model thoda alag hai, jise samajhna zaroori hai.

---

## Python: "Pass by Object Reference" ya "Pass by Assignment"

Python me, jab aap ek function me variable pass karte hain, to aap us variable ki value nahi, balki uss value (object) ka reference pass karte hain. Iska matlab hai:

1.  **Immutable Objects (Jaise Numbers, Strings, Tuples):** Ye "Pass by Value" jaisa behave karte hain.
    *   Jab aap ek immutable object pass karte hain, to function ke andar uspar koi bhi modification ek naya object banata hai. Purana object waisa ka waisa rehta hai.

    ```python
    def try_to_change_number(num):
        print(f"Function ke andar, change se pehle: {num}")
        num = 100  # Yahan ek naya integer object ban gaya hai
        print(f"Function ke andar, change ke baad: {num}")

    # Main code
    my_number = 10
    print(f"Function call se pehle: {my_number}")
    try_to_change_number(my_number)
    print(f"Function call ke baad: {my_number}")

    # Output:
    # Function call se pehle: 10
    # Function ke andar, change se pehle: 10
    # Function ke andar, change ke baad: 100
    # Function call ke baad: 10  <-- Dekhiye, original value change nahi hui
    ```

2.  **Mutable Objects (Jaise Lists, Dictionaries):** Ye "Pass by Reference" jaisa behave karte hain.
    *   Jab aap ek mutable object pass karte hain, to function ussi object ka reference leta hai. Isliye, function ke andar object ke content me kiya gaya change bahar bhi dikhta hai.

    ```python
    def change_list_content(my_list):
        print(f"Function ke andar, change se pehle: {my_list}")
        my_list.append(4) # Hum usi list object ko change kar rahe hain
        print(f"Function ke andar, change ke baad: {my_list}")

    # Main code
    my_actual_list = [1, 2, 3]
    print(f"Function call se pehle: {my_actual_list}")
    change_list_content(my_actual_list)
    print(f"Function call ke baad: {my_actual_list}")

    # Output:
    # Function call se pehle: [1, 2, 3]
    # Function ke andar, change se pehle: [1, 2, 3]
    # Function ke andar, change ke baad: [1, 2, 3, 4]
    # Function call ke baad: [1, 2, 3, 4] <-- Dekhiye, original list change ho gayi
    ```

**Sabse Important Point:** Agar aap function ke andar variable ko re-assign kar dete hain (ek naya object de dete hain), to original variable par koi fark nahi padega, chahe wo mutable ho ya immutable.

```python
def try_to_reassign_list(my_list):
    my_list = ['a', 'b', 'c'] # Yahan ek nayi list ban gayi, reference toot gaya
    print(f"Function ke andar re-assign ke baad: {my_list}")

my_other_list = [1, 2, 3]
print(f"Re-assign se pehle: {my_other_list}")
try_to_reassign_list(my_other_list)
print(f"Re-assign ke baad: {my_other_list}") # Original list change nahi hui

# Output:
# Re-assign se pehle: [1, 2, 3]
# Function ke andar re-assign ke baad: ['a', 'b', 'c']
# Re-assign ke baad: [1, 2, 3]
```

---

## JavaScript: "Pass by Value" (lekin Objects ke liye Value ek Reference hai)

JavaScript ka model Python jaisa hi hai.

1.  **Primitive Types (Number, String, Boolean, etc.):** Hamesha "Pass by Value" hota hai. Function ko value ki ek copy milti hai.

    ```javascript
    function tryToChangePrimitive(num) {
        console.log(`Function ke andar, change se pehle: ${num}`);
        num = 100; // Copy ko change kiya ja raha hai
        console.log(`Function ke andar, change ke baad: ${num}`);
    }

    // Main code
    let myNumber = 10;
    console.log(`Function call se pehle: ${myNumber}`);
    tryToChangePrimitive(myNumber);
    console.log(`Function call ke baad: ${myNumber}`);

    // Output:
    // Function call se pehle: 10
    // Function ke andar, change se pehle: 10
    // Function ke andar, change ke baad: 100
    // Function call ke baad: 10 // Original value change nahi hui
    ```

2.  **Objects (Arrays, Objects, etc.):** Yahan "Value" khud ek reference hoti hai. Isliye yeh "Pass by Reference" jaisa behave karta hai. Function ko object ke reference ki copy milti hai. Dono reference (original aur copy) ek hi object ko point karte hain.

    ```javascript
    function changeObjectContent(myObj) {
        console.log(`Function ke andar, change se pehle: ${JSON.stringify(myObj)}`);
        myObj.name = "Gemini"; // Hum usi object ki property ko change kar rahe hain
        console.log(`Function ke andar, change ke baad: ${JSON.stringify(myObj)}`);
    }

    // Main code
    let myActualObject = { name: "Google", version: 1.0 };
    console.log(`Function call se pehle: ${JSON.stringify(myActualObject)}`);
    changeObjectContent(myActualObject);
    console.log(`Function call ke baad: ${JSON.stringify(myActualObject)}`);

    // Output:
    // Function call se pehle: {"name":"Google","version":1}
    // Function ke andar, change se pehle: {"name":"Google","version":1}
    // Function ke andar, change ke baad: {"name":"Gemini","version":1}
    // Function call ke baad: {"name":"Gemini","version":1} // Original object change ho gaya
    ```

**JavaScript me bhi Important Point:** Agar aap function ke andar variable ko re-assign kar dete hain, to original reference par koi fark nahi padta.

```javascript
function tryToReassignObject(myObj) {
    myObj = { name: "New Object" }; // Yahan ek naya object ban gaya, reference toot gaya
    console.log(`Function ke andar re-assign ke baad: ${JSON.stringify(myObj)}`);
}

let myOtherObject = { name: "Original" };
console.log(`Re-assign se pehle: ${JSON.stringify(myOtherObject)}`);
tryToReassignObject(myOtherObject);
console.log(`Re-assign ke baad: ${JSON.stringify(myOtherObject)}`); // Original object change nahi hua

# Output:
# Re-assign se pehle: {"name":"Original"}
# Function ke andar re-assign ke baad: {"name":"New Object"}
# Re-assign ke baad: {"name":"Original"}
```
---

## C++: "Pass by Value" vs "Pass by Reference" vs "Pass by Pointer"

C++ me teeno concepts bahut clear aur alag hain.

1.  **Pass by Value**
    *   Jab aap ek variable ko by value pass karte hain, to uski ek actual copy banayi jaati hai aur function ko di jaati hai.
    *   Function ke andar us copy par kiye gaye changes original variable ko affect nahi karte.
    *   Ye default method hai.

    ```cpp
    #include <iostream>

    void passByValue(int num) {
        std::cout << "Function ke andar, change se pehle: " << num << std::endl;
        num = 100; // Sirf copy ko change kiya ja raha hai
        std::cout << "Function ke andar, change ke baad: " << num << std::endl;
    }

    int main() {
        int myNumber = 10;
        std::cout << "Function call se pehle: " << myNumber << std::endl;
        passByValue(myNumber);
        std::cout << "Function call ke baad: " << myNumber << std::endl;
        return 0;
    }

    /*
    Output:
    Function call se pehle: 10
    Function ke andar, change se pehle: 10
    Function ke andar, change ke baad: 100
    Function call ke baad: 10  // Original value change nahi hui
    */
    ```

2.  **Pass by Reference (`&`)**
    *   Isme variable ki copy nahi banayi jaati. Balki, function parameter original variable ka ek "alias" ya dusra naam ban jaata hai.
    *   Function parameter ko change karne se original variable bhi change ho jaata hai.
    *   Ise `&` symbol se specify kiya jaata hai.

    ```cpp
    #include <iostream>

    void passByReference(int &num) {
        std::cout << "Function ke andar, change se pehle: " << num << std::endl;
        num = 100; // Yahan original variable hi change ho raha hai
        std::cout << "Function ke andar, change ke baad: " << num << std::endl;
    }

    int main() {
        int myNumber = 10;
        std::cout << "Function call se pehle: " << myNumber << std::endl;
        passByReference(myNumber);
        std::cout << "Function call ke baad: " << myNumber << std::endl;
        return 0;
    }

    /*
    Output:
    Function call se pehle: 10
    Function ke andar, change se pehle: 10
    Function ke andar, change ke baad: 100
    Function call ke baad: 100 // Original value change ho gayi
    */
    ```

3.  **Pass by Pointer (`*`)**
    *   Isme variable ka memory address (pointer) function me pass hota hai.
    *   Function us address par jaakar value ko access aur modify kar sakta hai.
    *   Iske liye pointers (`*` aur `&` operators) ka istemal hota hai. Result "pass by reference" jaisa hi hota hai, lekin syntax alag hai.

    ```cpp
    #include <iostream>

    void passByPointer(int *ptr) {
        std::cout << "Function ke andar, change se pehle: " << *ptr << std::endl;
        *ptr = 100; // Pointer jis address ko point kar raha hai, uski value change karo
        std::cout << "Function ke andar, change ke baad: " << *ptr << std::endl;
    }

    int main() {
        int myNumber = 10;
        std::cout << "Function call se pehle: " << myNumber << std::endl;
        passByPointer(&myNumber); // Variable ka address (&) pass kiya ja raha hai
        std::cout << "Function call ke baad: " << myNumber << std::endl;
        return 0;
    }

    /*
    Output:
    Function call se pehle: 10
    Function ke andar, change se pehle: 10
    Function ke andar, change ke baad: 100
    Function call ke baad: 100 // Original value change ho gayi
    */
    ```
