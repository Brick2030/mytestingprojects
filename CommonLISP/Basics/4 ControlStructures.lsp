;;;; Control Structures: 
;;; Lisp has standard control structures like if-else, loops (do, dolist, doto), and cond. 
;; Practice using these control structures by writing programs that use them.


(defvar *var* (read))
(defvar *num* 10)
(if (> *var* *num*) 
    (format t "~a is greather than ~a ~%" *var* *num*)
    (format t "~a is less than ~a ~%" *var* *num*))

(when (> *var* *num*)
    (print "Seems typed number is greater than var number congrats")
    (print "first")
    (print "second")
    (print "third")
    (print "I need to learn how to use loops in CLISP"))