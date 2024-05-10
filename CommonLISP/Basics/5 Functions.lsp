;;;;  Functions: 
;;; Lisp is a functional programming language. 
;; Practice writing and using functions. Try writing a program that defines several 
;; functions and uses them to solve a problem.

(defun even-or-odd (n)
    (if(oddp n) "Odd" "Even"))

(format t "~s ~s ~s ~%" (even-or-odd 4) (even-or-odd 7) (even-or-odd 14))


