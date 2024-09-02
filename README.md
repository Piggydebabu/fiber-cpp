# fiber-cpp

基于ucontext实现的协程库, 参考了libco(腾讯), libtask(Russ Cox), coroutine(云风)

- libco分析:[Piggydebabu/read-libco-code (github.com)](https://github.com/Piggydebabu/read-libco-code)
- libtask分析: [Piggydebabu/read-libtask-code: russ cox libtask源码分析 (github.com)](https://github.com/Piggydebabu/read-libtask-code)
- coroutine分析: [Piggydebabu/read-coroutine-code: 云风coroutine源码分析 (github.com)](https://github.com/Piggydebabu/read-coroutine-code)

## 主要工作

- 基于pthread封装了线程类, . 线程封装：封装了pthread，互斥量，信号量，读写锁，自旋锁；
- 协程实现：基于ucontext_t实现了非对称协程，设计三种协程状态，使子协程可以和线程主协程相互切换；
- 定时器：基于时间堆实现了定时器功能，支持定时事件的添加，删除，更新；
- 协程调度：实现了N-M协程调度器，支持main函数参与调度，在基本的协程调度器基础上结合epoll和定时器实现了IO
- 协程调度，支持IO事件和定时事件的注册和回调；
- Hook：基于IO协程调度器对sleep系列、socketIO系列、fd操作系列系统调用进行hook封装实现阻塞调用的异步；



