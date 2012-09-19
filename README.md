dieroller
=========

A simple dice roller

I needed some dice the other day, but all I had was my computer.
Hurray!

Just pull it down and
```bash
g++ die_roll.cpp -o dieroll
```

Then, run it:
```bash
./dieroll <sides on die> <number of rolls>
```

The default is rolling 1d20. 
```bash
$ ./dieroll
1: 20
$
```

So, for example, to roll 3d6
```bash
$ ./dieroll 6 3
3: 1
2: 6
1: 4
```

Enjoy!