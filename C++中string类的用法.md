## C++中string类的用法

用于代替字符数组！这里string被理解成一个类；即字符串类，用法与类一致

### 引入头文件<string>

```c++
#include <string>
```

### 创建和初始化字符串

1. string str1; //创建一个对象空字符串
2. string str2("Hello, World!"); // 使用已知字符串初始化
3. string str3(str2); // 直接==拷贝==已有字符串

### 字符串连接

使用 + 操作符连接字符串

```cpp
string str1 = "Hello";
string str2 = "World";
string str3 = str1 + ", " + str2 + "!";
cout << str3 <<endl; //此时输出了 Hello, World!
```

### 获取字符串长度

利用**str.length()**，也就是length函数

### 访问和修改字符串中的字符

用string定义的字符串也是字符串数组，用str[]的方式来访问

### 字符串比较

直接比较，如下：

```cpp
if (str1 == str2) {
    cout << "Strings are equal" << endl;
} else {
    cout << "Strings are not equal" << endl; // 输出: Strings are not equal
}
```

### string相比char[]的优越性

1. 自动管理内存，避免了手动管理内存带来的风险
2. 便地进行字符串操作，如拼接、查找、替换、比较
3. string 类是 C++ 标准库的一部分，可以与标准模板库（STL）中的算法和容器无缝结合使用

### string与STL的结合使用

#### 与STL算法结合使用

sort算法,利用迭代器直接排序字符串

```cpp
string str = "dcba";
    sort(str.begin(), str.end()); // 对字符串中的字符进行排序

    cout << "Sorted string: " << str << endl; // 输出: abcd

    return 0;
```

#### 与 STL 容器结合使用

使用vector来存储字符串

```cpp
vector<string> words = {"Hello", "World", "C++", "STL"};

for (const auto& word : words) {
    std::cout << word << " ";
}
std::cout << std::endl; // 输出: Hello World C++ STL
```

