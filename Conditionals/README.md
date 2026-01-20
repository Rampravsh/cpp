# C++ Conditionals: `if-else` aur `switch`

Is file me hum C++ ke conditional statements (`if`, `else if`, `else`, aur `switch`) ke baare me seekhenge. Agar aap Python ya JavaScript jaise languages se aa rahe hain, to kuch mukhya antar (differences) hain jo aapko samajhne me madad karenge.

## `if-else` Statement

C++ me `if-else` ka structure C-family ki dusri languages jaisa hi hota hai.

```cpp
#include <iostream>

int main() {
    int number = 10;

    if (number > 0) {
        std::cout << "Number is positive." << std::endl;
    } else if (number < 0) {
        std::cout << "Number is negative." << std::endl;
    } else {
        std::cout << "Number is zero." << std::endl;
    }

    return 0;
}
```

### Python aur JavaScript se Kya Alag Hai?

1.  **Syntax:**
    *   **C++:** C++ me conditions ko `()` parentheses ke andar likha jaata hai aur code blocks ko `{}` curly braces ke andar. Har statement ke baad semicolon `;` lagana zaroori hai.
    *   **Python:** Python me indentation (space) ka use hota hai code blocks ko define karne ke liye, aur condition ke baad colon `:` lagta hai.
    *   **JavaScript:** JavaScript ka syntax C++ jaisa hi hai, lekin yeh type coercion me thoda flexible hai.

2.  **Type Checking (Sabse Bada Antar):**
    *   **C++:** Yeh ek strongly-typed language hai. `if` ki condition ko aam taur par ek `bool` (true/false) value deni hoti hai. Agar aap integer (`int`) use karte hain, to `0` ko `false` maana jaata hai aur kisi bhi non-zero value (jaise 1, -5, 100) ko `true` maana jaata hai. Aap direct string ya dusre complex types ko condition me nahi daal sakte jaise Python ya JS me karte hain.
    *   **JavaScript:** JS me "truthy" aur "falsy" values ka concept hai. `0`, `""` (khali string), `null`, `undefined`, `NaN` sab `false` maane jaate hain. `if ("hello")` ya `if (1)` `true` hoga.
    *   **Python:** Python me bhi "truthy" aur "falsy" values hoti hain. `0`, `[]` (khali list), `{}` (khali dictionary), `""` (khali string), `None` sab `False` hote hain.

## `switch` Statement

Yeh C++ ka ek khaas feature hai jo `if-else if-else` ladder ka ek behtar alternative ho sakta hai, khaas kar jab aapko ek hi variable ki alag-alag values ko check karna ho.

`switch` statement integers (`int`, `char`, `enum`) par kaam karta hai.

```cpp
#include <iostream>

int main() {
    char grade = 'B';

    switch (grade) {
        case 'A':
            std::cout << "Excellent!" << std::endl;
            break; // 'break' agle case me jaane se rokta hai
        case 'B':
            std::cout << "Good job!" << std::endl;
            break;
        case 'C':
            std::cout << "Well done" << std::endl;
            break;
        case 'D':
            std::cout << "You passed" << std::endl;
            break;
        case 'F':
            std::cout << "Better try again" << std::endl;
            break;
        default:
            std::cout << "Invalid grade" << std::endl;
    }

    return 0;
}
```

### `switch` Kyu Khaas Hai?

*   **Readability:** Jab bahut saare `else if` hote hain, to `switch` code ko saaf-suthra aur padhne me aasan banata hai.
*   **Performance:** Kuch cases me, compiler `switch` ko `if-else` ladder se zyada optimize kar sakta hai.
*   **`break` ka Dhyaan Rakhein:** Har `case` ke baad `break;` lagana zaroori hai. Agar aap `break` nahi lagate, to code agle `case` me "gir jaata hai" (fall-through) aur uska code bhi execute ho jaata hai, jo aam taur par hum nahi chahte.

## Ternary Operator (`? :`)

Yeh `if-else` ka ek shortcut hai. Teeno languages (C++, Python, JS) me iska concept hai, bas syntax thoda alag ho sakta hai.

**C++ Syntax:**
```cpp
#include <iostream>
#include <string>

int main() {
    int time = 20;
    std::string result = (time < 18) ? "Good day." : "Good evening.";
    std::cout << result << std::endl; // Output: Good evening.
    return 0;
}
```
