# base64-cpp 使用示例

此仓库用于演示如何引入使用 CMake 作为构建工具的 C++ 库。

## 构建

在项目根目录：

```
git submodule add -- git@github.com:rhanqtl/base64-cpp.git lib/base64-cpp
```

配置 CMake 项目并编译：

```
$ mkdir build && cd build
$ cmake ..
$ cmake --build . --target all
```

成功后可以在 `build` 目录下找到 `base64_example` 可执行文件。

另见 [bae64-cpp by rhanqtl](https://github.com/rhanqtl/base64-cpp)