//
// Created by AlexLam on 2021/9/12.
//

#ifndef UNTITLED_MATH_H
#define UNTITLED_MATH_H
#include <iostream>
using namespace std;

/*
const sum = function(array) {
    // 先设置一个变量 s 用来存数组的和
    四个语法，函数命名方式，算法求和，数字变量定义，while循环定义
    var s = 0
    var i = 0
    while (i < array.length()) {
        var n = array[i]
        s = s + n
        i = i + 1
    }
    return s
}
*/

class math {

public:
    int test1 ()
    {
        // 局部变量声明
        int s = 0;
        int i = 0;
        int array[5] = {1,2,3,4,5};

        // while 循环执行
        //无api检车数组长度
        while( i < 5)
        {
            s = s + array[i];
            i++;
        }

        return s;
    }

    int test2 ()
    {
        // 局部变量声明
        int s = 1;
        int i = 0;
        int array[5] = {1,2,3,4,5};

        // while 循环执行
        //无api检车数组长度
        while( i < 5)
        {
            s = s * array[i];
            i++;
        }

        return s;
    }

    int test3 ()
    {
        // 局部变量声明
        int s = 0;
        int i = 0;
        int array[5] = {1,2,3,4,5};

        // while 循环执行
        //无api检车数组长度
        while( i < 5)
        {
            s = s + array[i];
            i++;
        }
        s = s / 5;
        return s;
    }

    int test4 ()
    {
        // 局部变量声明
        int i = 0;
        int array[5] = {5,4,3,2,1};
        int s = array[0];


        // while 循环执行
        //无api检车数组长度
        while( i < 5)
        {
            if ( s > array[i])
            {
                s = array[i + 1];
            }
            i++;
        }
        return s;
    }

    int test5 ()
    {
        // 局部变量声明
        int i = 0;
        int array[5] = {5,4,3,2,1};
        int s = 0;


        // while 循环执行
        //无api检车数组长度
        while( i < 5)
        {
            if (array[i] % 2 != 0)
            {
                s = s + array[i];
            }
            else
            {
                s = s - array[i];
            }
            i++;
        }
        return s;
    }

    int test6 ( int array[5] )
    {
        // 局部变量声明
        int i = 0;
        int s = 1;


        // while 循环执行
        //无api检车数组长度
        while( i < 5)
        {
            s = array[i] * s;
            i++;
        }
        return s;
    }

};

int main(){
    cout << "test1 的值：" << math().test1() << endl;
    cout << "test2 的值：" << math().test2() << endl;
    cout << "test3 的值：" << math().test3() << endl;
    cout << "test4 的值：" << math().test4() << endl;
    cout << "test5 的值：" << math().test5() << endl;
    int array[5] = {5,4,3,2,1};
    cout << "test6 的值：" << math().test6(array) << endl;
}

#endif //UNTITLED_MATH_H
