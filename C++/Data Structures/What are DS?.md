# Data Structures
### What are they and how do they work?

C++ is a great programming language to learn about Data Structures (DS).  However, it turns out <br>
that C++ is not the only language that uses them.  That is because DS are not a feature of a language, <br>
instead, they are a way to store and use data --such as variables-- and structure them in a manner in which <br>
computations can be performed. 

### Arrays
Take arrays for example. An array is usde to store multiple related values. This data is stored in adjacent<br>
and indexable bins. 

Say you wanted to store what fruits there are in a fruit basket. You can create separate variables such as:<br>
```
string apples;
string mangos;
string melons;
```
<br>
How ever, there might be too many to type each and every one of them individually. Instead we can create<br>
an array fruit_basket and store all the fruits in that array.
<br>

```
string fruit_basket[5] = {"apples", "mangos", "melons", "bananas", "watermelons"};
```
<br>
In the computer's memory, an array is essentially a row of variabls, meaning it's a continious block of bins<br>
which occupy a piece of memory. Each bin can store a value of the specified type. In this case it would be type: string. <br>

| apples |   
|--------|   
| mangos |
| melons |
|bananas |
|watermelons|

<br>
In this example, the index of apples is 0, since all indexing starts from 0 to 1 and so on.<br>
Meaning that at index 2, we find melons. 
