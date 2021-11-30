# Genewars engine re-implementation

This is re-implementation of the game binary for Genewars produced by Bullfrog
and released in 1996.

At the moment it is incomplete, and it's hard to tell if it will ever be.
But it's a good start if you want to work on the game, by either continuing
the re-implementation, or understanding how the game mechanics work, or
maybe write tools or patches for the game.

## What it does, if you run it?

Nothing. It's not implemented to the point where it would display anything.

If you're just a player, and not a programmer / researcher, then this is not
a project for you.

## What is there, and what is not?

All the interfaces from the game are defined. But most functions are not
implemented. So this contains little code, mostly interfaces and organization
for the code - classes, structs, enumerations, declarations of functions and
methods.

All the files can be compiled and linked using a modern version of GCC/G++.

## Building.

Just run `make`.
