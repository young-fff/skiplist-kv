
# 项目中文件

* main.cpp 包含skiplist.h使用跳表进行数据操作
* skiplist.h 跳表核心实现
* README.md 中文介绍     
* bin 生成可执行文件目录 
* makefile 编译脚本
* store 数据文件 
* stress_test_start.sh 压力测试脚本

# 提供接口

* insertElement（插入数据）
* deleteElement（删除数据）
* searchElement（查询数据）
* changeElement（修改数据）
* displayList（展示已存数据）
* dumpFile（数据存盘）
* loadFile（加载数据）
* size（返回大小）


# 存储引擎数据表现

## 插入操作

跳表树高：20 

采用随机插入数据测试：


10万条插入0.70秒


每秒可处理写请求数（QPS）: 12w左右

## 取数据操作

10万条读取 1.32秒

每秒可处理读请求数（QPS）: 8w左右
