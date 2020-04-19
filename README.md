# gtest-example

World's simplest example of using cmake with google-test

## Build

1. Clone this repo
2. Clone the googletest repo into the "lib" folder
3. Create the build folder and configure
4. build

```bash
$ git clone https://github.com/mmanyen/gtest-example.git
$ cd gtest-example/lib
$ git clone https://github.com/google/googletest.git
$ cd ..
$ mkdir build && cd build
$ cmake ..
$ cmake --build .

```

The main exe will be in build/src  
The googletest exe will be in build/test
