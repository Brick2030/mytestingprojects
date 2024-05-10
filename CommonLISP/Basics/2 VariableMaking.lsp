;;;; Variable Declaration: 
;;; Practice declaring and using variables in Lisp. 
;; Try writing a program that declares several variables, assigns values to them, 
;; and then prints those values.

(defvar *num* (+ 123 456))
(defvar *name* (read))
(format t "Hello ~a! Number is ~a! ~%" *name* *num*) 
(setf *name* "fish")
(format t "Your name was changed to ~a... ~%" *name*)
(format t "All vars that were used in the programm are: ~a ~a ~%" *num* *name*)