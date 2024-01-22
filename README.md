# multithread_random
<h3>Description of the project. Testing task</h3>
<p>This project is an example of using multithread tools of C++.
There are 64 threads. On the each thread created an object of class. The class generates random number and add it to the end of a vector. Equality of zero-element of the vector and ID of class-object is a condition for adding. The application works on 64 threads. The vector is shared. When the random number is not equal with any object-id - process deletes this element, generates new number and adds it to the begin of the vector. When one of objects adds new number to the end, main process deletes zero-element of the vector. </p>

<h3>How to execute</h3>
<p>For build it on Windows you can use on of my scripts (MinGW64 or Ninja)</p>
