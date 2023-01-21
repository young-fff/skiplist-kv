
# 项目中文件

* main.cpp 包含skiplist.h使用跳表进行数据操作
* skiplist.h 跳表核心实现
* README.md 中文介绍    
* README-en.md 英文介绍       
* bin 生成可执行文件目录 
* makefile 编译脚本
* store 数据落盘的文件存放在这个文件夹 
* stress_test_start.sh 压力测试脚本

# 提供接口

* insertElement（插入数据）
* deleteElement（删除数据）
* searchElement（查询数据）
* changeElement（修改数据）
* displayList（展示已存数据）
* dumpFile（数据落盘）
* loadFile（加载数据）
* size（返回数据规模）


# 存储引擎数据表现

## 插入操作

跳表树高：18 

采用随机插入数据测试：


|插入数据规模（万条） |耗时（秒） | 
|---|---|
|10 |0.316763 |
|50 |1.86778 |
|100 |4.10648 |


每秒可处理写请求数（QPS）: 24.39w

## 取数据操作

|取数据规模（万条） |耗时（秒） | 
|---|---|
|10|0.47148 |10|
|50|2.56373 |50|
|100|5.43204 |100|

每秒可处理读请求数（QPS）: 18.41w


可以运行如下脚本测试kv存储引擎的性能

```
sh stress_test_start.sh 
```

# 待优化 

* delete的时候没有释放内存
* 压力测试并不是全自动的
* 跳表的key用int型，如果使用其他类型需要自定义比较函数，当然把这块抽象出来更好
* 如果再加上一致性协议，例如raft就构成了分布式存储，再启动一个http server就可以对外提供分布式存储服务了

