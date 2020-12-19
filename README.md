### cslib library
```shell
$ cd cslib/simplified/ #or cslib/standard/
$ make #generated cslib.a
```

### The Art and Science of C / CS1
```shell
$ gcc hello.c -Icslib/simplified cslib/simplified/cslib.a
$ ./a.out 
```
### Programming Absctractions in C / CS2
$ gcc powertab.c -Icslib/standard cslib/standard/cslib.a
$ ./a.out
