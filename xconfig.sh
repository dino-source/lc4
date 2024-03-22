# You have to define DEVELOP variable as a path to your development 
# directory in your .bashrc (or .zshrc if you use zsh) file

/usr/bin/cmake --no-warn-unused-cli \
    -DCMAKE_BUILD_TYPE:STRING=Debug \
    -DCMAKE_EXPORT_COMPILE_COMMANDS:BOOL=TRUE \
    -DCMAKE_C_COMPILER:FILEPATH=$C_COMPILER \
    -DCMAKE_CXX_COMPILER:FILEPATH=$CXX_COMPILER \
    -S$DEVELOP/lc4 \
    -B$DEVELOP/lc4/build \
    -G Ninja
