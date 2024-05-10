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

- Formated printing:
```
print(f"username {user_var}") # NEed to check this. May be wrong.
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

## Lists

- Making a list
```
output = []
```

- Lenght of a list
```
len(array)
```

- Getting some elements of list:
```
print(myList[0:2]) # Prints from 0 to 2 elements of list.
```

- Adding new elements to a list:
```
myList.append("stuff") - Adds "stuff" string to a list.
```

- Inserting a new element into the list:
```
myList.insert(n, "object") # puts object into n index, and puts already existed objects on left and right sides without replacement
```

- Deleteting of element by index:
```
myList.pop(index)
```

- Expands myList with List2: (never actually used, idk wtf is that)
```
myList.extend(list2)
```

- Removing element by name:
```
myList.remove("Text") # Deletes "text". If there are few such elements, only the left one will be removed.
```

- Copying a list
```
list2 = list1.copy()
```

- Counting elements in a list:
```
number = list.count() # Uhh? Wtf is this. Is this the same to len(list)? Why am I writing stuff here without testing it...

number2 = list.count("word") # Counts all "word" in array.
```

- Finding index of "word":
```
list.index("word") # If few elements, only left one will be found
```

- Min and max methods can be used for founding min and max value of array.

- Clear method can clear list.

## Tuples
Similar to lists, but elements of it cant be removed, changed or edited. It's possible to change types of some elements. (maybe?) Useful for security thing, also it need less resources compared to lists. If you have a lot of data, it's good idea to use tuples then. To add something into tuple it's possible to convert it to a list, and then convert it back again.

- Making a tuple:
```
my_Tuple = (1, 2, 3) # First way

my_Tuple = typle((1, 2, 3)) # Another way

my_Tuple = 1, # Another anothey way. "," is important.
```
It's possible to change stuff of some types inside of a tuple. For example if you have a list on [3] in a tuple, you can easily append stuff to that list. 

## Dictionaries
Possible to change, type of data that has pairs of key-value inside, that are used for combining connected information, for example key "name" with value "Lain Iwakura" Keys in python are inique and impossible to change. It's impossbile to have a list as a key, since list is a changeble type of data. It's possible to use tuple, numbers, strings and etc as keys. Values can be objects of any type.

- Making a dictionary:
```
my_dict = {} # First way
my_dict2 = dict() # another way
```

- Sytax of dictionary:
```
my_dict1 = {
"name" : "Lain"
"team" : "Knights"
}
```
- Printing value of "name". if to compare to list, we use key instead of index to get a value:
```
print(my_dict1["name"])
```

- Syntax of dictionary in a single line:
```
person = {"name":"victor", "age":25)
```

- Adding new pair to dictionary:
```
person["weight"] = 60
```

- Deleting a pair in dictionary:
```
del person["weight"] # This looks weird. I'll check it later. 
```

- Using loop for printing pairs:
```
for key, value in person.items():
```

- Using loop for keys:
```
for key in person.keys()
```

- Checking if key is already used:
```
if "height" in person.keys(): print "Key already used" # This looks awesome. I need to learn more basics of using "IF".
```

- Geting stuff under "word" value.
```
for values in person["favorite food"] 
```

### Methods for dictionaries: (None of them tested. Im not sure if anything of this even works)

- Getting information, without having error by having default data with "," thing (wtf does this all even mean)
```
print(person.get("name", "lain")) # very confusing... gotta test this.
```

- Returns value of key. If there's nothing, creates a key with value after ",". Creates new pair.
```
person.setdefault("5", "five")
```

- Adds new pairs. If key exists then value will be rewritten.
```
person.update{"job":"Discord Mod"}
```

- Deleting key and returns value. If no key, returns default value (wtf does that even mean)
```
person.pup("weight", "no key") # Looks weird. Probably wrong.
```

- Gettings stuff of a dictionary:
```
person.keys() # Keys.
person.values() # Values?
person.items() # Tuples of pairs key-value.
```

## Functions. Default values.
When setting a function it's possible to set default values to avoid getting erros and stuff when calling them.
```
# If you call this function without stuff inside, like this ban(), or like this ban("user"), it will pick default values from function itself.
def ban(user="Chisa Yomoda", time=500000000)
```
Default values must be at the end of function. 
Optional value - thing with default value, but with checking by if default then this otherwise this. (was I drunk when I was typing this)

## Files yay.
- List of file stuff uh.
```
r - read only
w - write only. will create new file if there's no file
rb - read only (binary file)
wb - write only (binary file)
r+ - read and write
rb+ - read and write (binary)
w+ - read and write. Will create new file if there's no file.
wb+ - Read and write binary. Will create file.
a - open for adding new stuff. Will create new file if no file.
a+ - Open for adding new stuff. Will create file for read and write if no file exist.
ab+ - same but binary.
ab - same but binary.
```

### Doing stuff.
- Default file operations.
```
f = open(file_name, acess_mode) # Makes object f with file.
f.close() # Closes the file.
```

- Reading file:
```
file.read(size)     # Size is ammount of chars to read. If nothing - whole file will be readed.
                    # If you readed 7 chars, and will read again, it will start with 8th char.
file.readline()     # Used for reading lines in big files.
file.readlines()    # Returns list of all lines in a file (never tested)
file.tell()         # Returns current line in file. (maybe)

```
- Writing stuff:
```
f.write(string)
```

- Using pickle for saving objects (idk, I use this too much):
```
import pickle()
def save(): 
    with open(filename, "wb") as f:
        pickle.dump(array_of_objects, f)
```
- Using pickle for loading saved objects:
```
def load():
    with open(filename, "rb") as f:
        objects_array = pickle.load(f)
    return objects_array # return array
```

















