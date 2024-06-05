### Setup

```
0. rename project folder
0. rename project name in root CMakeLists.txt
1. mkdir build
2. cd build (when in build path, run `rm -rf *` to clear build folder and continue from 3.)
3. cmake ..
4. make
```

Note: vscode will highlight error for libs such as gtest, this is because it cannot find gtest which will be installed once we reach the `cmake ..` command, and the issue will be resolved.

ref: https://www.youtube.com/watch?v=5wI47v4kuxU