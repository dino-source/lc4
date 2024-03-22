/usr/bin/cmake --no-warn-unused-cli \
    -DCMAKE_BUILD_TYPE:STRING=Debug \
    -DCMAKE_EXPORT_COMPILE_COMMANDS:BOOL=TRUE \
    -DCMAKE_C_COMPILER:FILEPATH=/usr/local/gcc-14.0.1/bin/gcc-14.0 \
    -DCMAKE_CXX_COMPILER:FILEPATH=/usr/local/gcc-14.0.1/bin/g++-14.0 \
    -S/home/dino/dev/cpp/leetcode/lc4 \
    -B/home/dino/dev/cpp/leetcode/lc4/build \
    -G Ninja
