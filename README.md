![mkpj_core_logo](mkpj-core_768.png)

# mkpj-core

This repository contains the core components of [mkpj](https://github.com/BaptisteP31/mkpj), wich mostly consist of code downloadable from `mkpj` (pairs).

## What are mkpj pairs?

Mkpj pairs are a set of one to three files, which are meant to be downloaded from `mkpj`.
They consit of simple, useful, and reusable code, which is used in many projects.  

They contain the following files:
```
mkpj-pair-name/
├── include/
│   └── mkpj-pair.hpp
├── src/
│   └── mkpj-pair.cpp
└── example/
    └── mkpj-pair-example.cpp
```

<br>

## How to use mkpj pairs?

To use a pair, you need to download it from `mkpj` and add it to your project.
Then, you can include the header file in your code, and use the functions defined in it.

<br>

## How to contribute to mkpj pairs?

If you want to contribute to `mkpj`, you can add new pairs, or improve existing ones.
To do so, you need to fork this repository, and create a pull request.


<br>

## How to create a new pair?

To create a new pair, you need to create a new folder in the `pairs` folder, and add the following files:
```
pairs/mkpj-pair-name/
├── include/
│   └── mkpj-pair.hpp
├── src/
│   └── mkpj-pair.cpp
└── example/
    └── mkpj-pair-example.cpp
```
We will now explain what each file is for.

### mkpj-pair.hpp

This file contains the header of the pair.
It should contain the following use an `#ifndef` and `#define` to prevent multiple inclusions:
```cpp
#ifndef MKPJ_PAIR_HPP
#define MKPJ_PAIR_HPP

// ...

#endif
```
Additionnaly, you can add a `#pragma once` at the start of the file to make compilation faster:
```cpp
#pragma once
```

### mkpj-pair.cpp

This file contains the source code of the pair.
It should contain the following use an `#include` to include the header file:
```cpp
#include "../include/mkpj-pair.hpp"
```

### mkpj-pair-example.cpp

This file contains an example of how to use the pair.
It should contain the following use an `#include` to include the header file:
```cpp
#include "../include/mkpj-pair.hpp"
```
And provide a commented example of how to use the pair.
Altrough it is not mandatory, we highly recommend to add an example of how to use the pair in the `example` folder as it makes it easier for other people to use your pair as well as for us to review it.

<br>

## FAQ


### What is the difference between a pair and a library?

A pair is a set of one to three files, which are meant to be downloaded from `mkpj`.
They consit of simple, useful, and reusable code, which is used in many projects.

A library is a set of files, which are meant to be compiled and linked to your project.
They consit of complex, useful, and reusable code, which is used in many projects.


### Will my pair be added to `mkpj`?

If your pair is useful, and is not already available in `mkpj`, it will be added to `mkpj`.
If your pair is not useful, or is already available in `mkpj`, it will not be added to `mkpj`.
The content of your pair will be reviewed by the `mkpj` team, and will be added to `mkpj` if it is accepted.