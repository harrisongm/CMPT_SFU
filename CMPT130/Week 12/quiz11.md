# Quiz11
This code contains a recursive function foo.
It is getting called start with foo(3)
then recursively called foo(3-1)
then foo(2-1)
then foo(1-1)
now n=0, it finally returned to the previous function call foo(1-1)
it continue executes cout << n << endl; at this time n = 1
1
then move onto foo(1-1), it returned and return back to foo(2-1)
continue executes
2
then continue with foo(2-1), 
recursively call foo(1-1), it returned and cout 
1
now it is returned back to the statement foo(3-1) and continue cout
3
continue with foo(2-1)
recursively call foo(1-1)
then return at foo(0) and continue to cout 
1
return to foo(2-1) and continue to cout 
2
continue to execute f(1-1) and cout 
1



Thus,
The output is
1
2
1
3
1
2
1