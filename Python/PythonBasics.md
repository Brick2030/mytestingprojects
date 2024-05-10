# Basics of python.
Once again. Stuff for personal use. Im not coder and it's usuall stuff for me to forget something important. So I created this file. 

## General features

- How to get methods
```
my_String = "python"
for mth in dir(my_string):
    print(mth)
```

- Switch Case 
```
match input:
    case 1: return 2
```

- Getting index from enumerate:
```
for num, char in enumerate(string):
    indexList.append(num)
return indexList
```

- Random numbers
```
import random
number = random.randint(x,y)
```

- Clearing Terminal (wasnt checking on windows, just copied it from website lol. At least works on linux)
```
import os
os.system('cls' if os.name == 'nt' else 'clear')
```

- Sleep thing.
```
import time
time.sleep(5) # Pauses program to 5 seconds. It's possible to set number like 0.5, 0.25 and etc.
```

## Strings

- Separation of string to word list.
maxsplit - optional thing. Specifies how many splits to do. Default value is -1, which is "all occurrences".
```
string.split(separator, maxsplit) 
```

- Multiplying a string repeats it few times.

- Lenght of string, list or anything else
```
len(anything) # Starts with 1, not 0. If used in loops then do -1
```

- Every char in string has a index and can be accessed with string[index].

- Accessing last char possible by string[-1].

- Joining arrays to strings:
```
output = " ".join(words) # Combines "words" array to a "output" string with "" "" separator.
```

- Removing chars:
```
stringname.replace(' ', '')
```




