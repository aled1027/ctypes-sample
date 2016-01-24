# Ctypes Sample
An example of using ctypes taken from [Python Cookbook](http://chimera.labs.oreilly.com/books/1230000000393/ch15.html). The code is compatible with python3. 

## Setup
1. Compile `sample.c` into a shard library:
```
gcc -c -Wall -Werror -fpic sample.c 
gcc -shared -o libsample.so sample.o
```

2. Use `sample.so`:
```
>>> import sample
>>> sample.gcd(35,42)
7
>>> sample.in_mandel(0,0,500)
1
>>> sample.in_mandel(2.0,1.0,500)
0
>>> sample.divide(42,8)
(5, 2)
>>> sample.avg([1,2,3])
2.0
>>> p1 = sample.Point(1,2)
>>> p2 = sample.Point(4,5)
>>> sample.distance(p1,p2)
4.242640687119285
>>>
```
