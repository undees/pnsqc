Halt-o-Meter
============
Welcome to the Halt-o-Meter! This software reads the source code of
your program and tells you whether or not it will run to
completion (and they said it was impossible!).

Save the following code in ``example.c``::

  int main() {
    for (;;);
    return 0;
  }

Now, run Halt-o-Meter::

  C:\> haltometer example.c
  Checking... example.c does NOT halt.
