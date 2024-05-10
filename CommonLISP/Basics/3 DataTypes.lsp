;;;; Data Types: 
;;; Lisp has several built-in data types like integers, floats, characters, strings, and lists. 
;; Write programs to practice using these data types. 

;; For example, write a program that performs arithmetic operations on integers and floats, or 
;; a program that manipulates strings and lists.

(defvar *first* (* 123 321))
(defvar *second* #2R101010)
(defvar *third* 5.257)
(defvar *fourth* #C(100 -100))
(defvar *char* '(#\a #\b #\c))

(format t 
"First number is ~a with integer type. 
Second number is ~a of binary system converted.
Third number is ~3f of float.
Fourth number is ~a of complex type
Chars are ~s ~%" 
*first* *second* *third* *fourth* *char*)
