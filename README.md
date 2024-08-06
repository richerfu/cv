## C++-Validator

This is my side project to learn c++ and c++ toolchains.

### Goals
- Use vcpkg to manage all packages
- Based with C++17
- Full test
- Api align with zod

### Init

1. install vcpkg
2. For clion, add cmake options
    ```shell
    -DCMAKE_TOOLCHAIN_FILE=VCPKG_ROOT/scripts/buildsystems/vcpkg.cmake
    ```