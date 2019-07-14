* **剑指Offer题解**
   * 面试题3：[数组中重复的数字](#数组中重复的数字)
   * 面试题4：[二维数组的查找](#二维数组的查找)
   * 面试题5：[替换空格](#替换空格)
   * 面试题6：[从尾到头打印链表](#从尾到头打印链表)
   * 面试题7：[重建二叉树](#重建二叉树)
   * 面试题8：[二叉树的下一个节点](#二叉树的下一个节点)
   * 面试题9：[用两个栈实现队列](#用两个栈实现队列)
   * 面试题10：[裴波那契数列](#裴波那契数列)
   * 面试题11：[旋转数组的最小数字](#旋转数组的最小数字)
   * 面试题12：[矩阵中的路径](#矩阵中的路径)
   * 面试题13：[机器人的运动范围](#机器人的运动范围)
   * 面试题14：[剪绳子](#剪绳子)
   * 面试题15：[二进制中1的个数](#二进制中1的个数)
   * 面试题16：[数值的整数次方](#数值的整数次方)
   * 面试题17：[打印从1到最大的n位数](#打印从1到最大的n位数)
   * 面试题18：[删除链表的节点](#删除链表的节点)
   * 面试题19：[正则表达式匹配](#正则表达式匹配)
   * 面试题20：[表示数值的字符串](#表示数值的字符串)
   * 面试题21：[调整数组顺序使奇数位于偶数前面](#调整数组顺序使奇数位于偶数前面)
   * 面试题22：[链表中倒数第k个节点](#链表中倒数第k个节点)
   * 面试题23：[链表中环的入口节点](#链表中环的入口节点)
   * 面试题24：[反转链表](#反转链表)
   * 面试题25：[合并两个排序的链表](#合并两个排序的链表)
   * 面试题26：[树的子结构](#树的子结构)
   * 面试题27：[二叉树的镜像](#二叉树的镜像)
   * 面试题28：[对称的二叉树](#对称的二叉树)
   * 面试题29：[顺时针打印矩阵](#顺时针打印矩阵)
   * 面试题30：[包含min函数的栈](#包含min函数的栈)
   * 面试题31：[栈的压入弹出序列](#栈的压入弹出序列)
   * 面试题32：[从上到下打印二叉树](#从上到下打印二叉树)
   * 面试题33：[二叉搜索树的后序遍历序列](#二叉搜索树的后序遍历序列)
   * 面试题34：[二叉树中和为某一值的路径](#二叉树中和为某一值的路径)
   * 面试题35：[复杂链表的复制](#复杂链表的复制)
   * 面试题36：[二叉搜索树与双向链表](#二叉搜索树与双向链表)
   * 面试题37：[序列化二叉树](#序列化二叉树)
   * 面试题38：[字符串的排列](#字符串的排列)
   * 面试题39：[数组中出现次数超过一半的数字](#数组中出现次数超过一半的数字)
   * 面试题40：[最小的k个数](#最小的k个数)
   * 面试题41：[数据流中的中位数](#数据流中的中位数)
   * 面试题42：[连续子数组的最大和](#连续子数组的最大和)
   * 面试题43：[1~n整数中1出现的次数](#1n整数中1出现的次数)
   * 面试题44：[数字序列中某一位的数字](#数字序列中某一位的数字)
   * 面试题45：[把数组排成最小的数](#把数组排成最小的数)
   * 面试题46：[把数字翻译成字符串](#把数字翻译成字符串)
   * 面试题47：[礼物的最大价值](#礼物的最大价值)
   * 面试题48：[最长不含重复字符的子字符串](#最长不含重复字符的子字符串)
   * 面试题49：[丑数](#丑数)
   * 面试题50：[第一个只出现一次的字符](#第一个只出现一次的字符)
   * 面试题51：[数组中的逆序对](#数组中的逆序对)
   * 面试题52：[两个链表的第一个公共节点](#两个链表的第一个公共节点)
   * 面试题53：[在排序数组中查找数字](#在排序数组中查找数字)
   * 面试题54：[二叉搜索树的第k大节点](#二叉搜索树的第k大节点)
   * 面试题55：[二叉树的深度](#二叉树的深度)
   * 面试题56：[数组中数字出现的次数](#数组中数字出现的次数)
   * 面试题57：[和为s的数字](#和为s的数字)
   * 面试题58：[翻转字符串](#翻转字符串)
   * 面试题59：[队列的最大值](#队列的最大值)
   * 面试题60：[n个骰子的点数](#n个骰子的点数)
   * 面试题61：[扑克牌中的顺子](#扑克牌中的顺子)
   * 面试题62：[圆圈中最后剩下的数字](#圆圈中最后剩下的数字)
   * 面试题63：[股票的最大利润](#股票的最大利润)
   * 面试题64：[求1~n的和](#求1n的和)
   * 面试题65：[不用加减乘除做加法](#不用加减乘除做加法)
   * 面试题66：[构建乘积数组](#构建乘积数组)
   
# 剑指Offer题解
## 数组中重复的数字

[Nowcoder](https://www.nowcoder.com/practice/623a5ac0ea5b4e5f95552655361ae0a8?tpId=13&tqId=11203&tPage=3&rp=3&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking)

### 题目描述

在一个长度为n的数组里的所有数字都在0到n-1的范围内。 数组中某些数字是重复的，但不知道有几个数字是重复的。也不知道每个数字重复几次。请找出数组中任意一个重复的数字。 例如，如果输入长度为7的数组{2,3,1,0,2,5,3}，那么对应的输出是第一个重复的数字2。

### 解答

遍历数组，判断当前元素`numbers[i]`是否和位置`i`相等：

1. 如果`numbers[i] == i`，则`numbers[i]`位于它自己的位置，`++i`遍历下一个元素；
2. 否则，找到位置是`numbers[i]`位置的元素`numbers[numbers[i]]`：
   - 如果`numbers[numbers[i]] == numbers[i]`,则找到重复元素`numbers[i]`
   - 否则，交换`numbers[numbers[i]]`和`numbers[i]` 
     重复`情况2`的过程，直到`numbers[i] == i`时，执行`情况1`。

**C++代码**

- 时间复杂度：O(*n*)
- 空间复杂度：O(1)

```c++
class Solution {
public:
    // Parameters:
    //        numbers:     an array of integers
    //        length:      the length of array numbers
    //        duplication: (Output) the duplicated number in the array number
    // Return value:       true if the input is valid, and there are some duplications in the array number
    //                     otherwise false
    bool duplicate(int numbers[], int length, int* duplication) {
        if(length == 0)
            return false;
        
        for(int i=0;i<length;i++)
        {
            while(i != numbers[i])
            {
                int m = numbers[i];
                if(m != numbers[m])
                {
                    swap(numbers[i],numbers[m]);
                }
                else{
                    *duplication = m;
                    return true;
                }
            }
        }
        return false;
    }
};
```

**Python代码**

```python
# -*- coding:utf-8 -*-
class Solution:
    # 这里要特别注意~找到任意重复的一个值并赋值到duplication[0]
    # 函数返回True/False
    def duplicate(self, numbers, duplication):
        # write code here
        if len(numbers) <= 0:
            return False
        
        for i in range(len(numbers)):
            while i != numbers[i]:
                m = numbers[i]
                if m == numbers[m]:
                    duplication[0] = m
                    return True
                else:
                    a = m
                    numbers[i] = numbers[m]
                    numbers[m] = a
            
        return False
```



## 二维数组的查找

[NowCoder](<https://www.nowcoder.com/practice/abc3fe2ce8e146608e868a70efebf62e?tpId=13&tqId=11154&tPage=1&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking>)

### 题目描述

在一个二维数组中（每个一维数组的长度相同），每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。

### 解答

参考[搜索二维矩阵II](https://github.com/Making-It/Code/blob/master/LeetCode/数组.md#搜索二维矩阵II)



## 替换空格

[NowCoder](<https://www.nowcoder.com/practice/4060ac7e3e404ad1a894ef3e17650423?tpId=13&tqId=11155&tPage=1&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking>)

### 题目描述

请实现一个函数，将一个字符串中的每个空格替换成“%20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。

### 解答

两个首先统计字符串中的空格数`cnt`，设原字符串的长度为`len`，那么替换之后字符串长度为`len + cnt * 2`，然后定义两个指针`index1`和`index2`，刚开始`index1`和`index2`指向原字符串和新字符串末尾，然后向前反向移动指针，逐个将`index1`位置的字符赋值给`index2`位置，如果`index1`位置遇到空格，则在`index2`位置开始之前的三个位置赋值为"%20"，同时`index2`向前移动3个位置，重复以上过程，直到`index1`到达字符串第一个字符或者`index2 == index1`为止。

**注意**：字符串反向复制，避免内存重叠！

**C++代码**

* 时间复杂度：O(*n*)
* 空间复杂度：O(1)

```c++
class Solution {
public:
	void replaceSpace(char *str,int length) {
        if(length <= 0 || !str)
            return;
        
        int cnt=0;
       for(int i=0;i<length;i++)
       {
           if(str[i] == ' ')
               cnt++;
       }
        
        if(cnt == 0)
            return;
        int newLength = length + 2*cnt;
        int index1 = length - 1;
        int index2 = newLength-1;
        while(index1 >= 0 && index2 > index1)
        {
            if(str[index1] != ' ')
            {
                str[index2--] = str[index1--];
            }
            else{
                str[index2--] = '0';
                str[index2--] = '2';
                str[index2--] = '%';
                index1--;
            }
        }
        
	}
};
```



**Python代码**

```python
# -*- coding:utf-8 -*-
class Solution:
    # s 源字符串
    def replaceSpace(self, s):
        # write code here
        res = ''
        for ch in s:
            if ch != ' ':
                res += ch
            else:
                res += '%20'
        
        return res
```



## 从尾到头打印链表

[NowCoder](<https://www.nowcoder.com/practice/d0267f7f55b3412ba93bd35cfa8e8035?tpId=13&tqId=11156&tPage=1&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking>)

### 题目描述

输入一个链表，按链表值从尾到头的顺序返回一个ArrayList。

### 解答

#### 方法1

如果允许原地修改链表，转换为**反转链表**问题，详见[反转链表](https://github.com/Making-It/Code/blob/master/LeetCode/链表.md#反转链表)

* 时间复杂度：O(*n*)
* 空间复杂度：O(1)

#### 方法2

如果不允许原地修改链表，那么可以利用栈后进先出的特点，遍历链表，逐个将链表元素放入栈中，然后依次弹出栈顶元素并打印。

**C++代码**

* 时间复杂度：O(*n*)
* 空间复杂度：O(*n*)

```c++
/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> res;
        if(!head)
            return res;
        
        stack<int> sta;
        ListNode* p = head;
        while(p)
        {
            sta.push(p->val);
            p = p->next;
        }
        while(!sta.empty())
        {
            int a = sta.top();
            sta.pop();
            res.push_back(a);
        }
        
        return res;
    }
};
```



**Python代码**

```python
# -*- coding:utf-8 -*-
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # 返回从尾部到头部的列表值序列，例如[1,2,3]
    def printListFromTailToHead(self, listNode):
        # write code here
        sta = []
        p = listNode
        while p:
            sta.append(p.val)
            p = p.next
        
        res = []
        while len(sta) > 0:
            res.append(sta[-1])
            sta.pop()
            
        return res
```



## 重建二叉树

[NowCoder](https://www.nowcoder.com/practice/8a19cbe657394eeaac2f6ea9b0f6fcf6?tpId=13&tqId=11157&tPage=1&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking)

### 题目描述

输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。假设输入的前序遍历和中序遍历的结果中都不含重复的数字。例如输入前序遍历序列{1,2,4,7,3,5,6,8}和中序遍历序列{4,7,2,1,5,3,8,6}，则重建二叉树并返回。

### 解答

详见LeetCode题解 [从前序与中序遍历序列构造二叉树](https://github.com/Making-It/Code/blob/master/LeetCode/二叉树.md#从前序与中序遍历序列构造二叉树)



## 二叉树的下一个节点

[NowCoder]()

### 题目描述

给定一个二叉树和其中的一个结点，请找出中序遍历顺序的下一个结点并且返回。注意，树中的结点不仅包含左右子结点，同时包含指向父结点的指针。

### 解答

分几种情况考虑：

* 如果节点`pNode`有右子树，那么找到`pNode`右子树的最左节点就是下一个节点
* 如果节点`pNode`没有右子树，分两种情况：
  * 如果`pNode`的父节点为空，返回空值`None`
  * 如果`pNode`是它的父节点的左子节点，那么下一个节点是它的父节点
  * 如果`pNode`是它的父节点的右子节点，那么从它的父节点一直往上找，直到当前节点的父节点为空或者它是父节点的左子节点为止，此时的父节点就是下一个节点

**C++代码**

```c++
/*
struct TreeLinkNode {
    int val;
    struct TreeLinkNode *left;
    struct TreeLinkNode *right;
    struct TreeLinkNode *next;
    TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {
        
    }
};
*/
class Solution {
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode)
    {
        TreeLinkNode* res = nullptr;
        if(pNode->right)
        {
            res = pNode->right;
            while(res->left)
            {
                res = res->left;
            }
        }
        else{
            if(!pNode->next) return nullptr;
            if(pNode == pNode->next->left)
                res = pNode->next;
            else{
                res = pNode->next;
                while(res->next && res == res->next->right)
                {
                    res = res->next;
                }
                res = res->next;
            }
        }
        
        return res;
    }
};
```

**Python代码**

```python
# -*- coding:utf-8 -*-
# class TreeLinkNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
#         self.next = None
class Solution:
    def GetNext(self, pNode):
        # write code here
        res = None
        if pNode.right is not None:
            res = pNode.right
            while res.left is not None:
                res = res.left
        else:
            if not pNode.next:
                return None
            if pNode.next and pNode == pNode.next.left:
                res = pNode.next
            else:
                res = pNode.next
                while res.next and res == res.next.right:
                    res = res.next
                res = res.next
        
        return res
```



## 用两个栈实现队列

[NowCoder](https://www.nowcoder.com/practice/54275ddae22f475981afa2244dd448c6?tpId=13&tqId=11158&tPage=1&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking)

### 题目描述

用两个栈来实现一个队列，完成队列的Push和Pop操作。 队列中的元素为int类型。

### 解答

结合栈结构先进后出以及队列结构先进先出的特点：

* 当`push`操作时，直接将元素加到栈1中
* 而当`pop`时，首先检查栈2：
  * 如果栈2有元素，直接弹出栈2的栈顶元素
  * 如果栈2为空，则逐个将栈1的元素弹出并加入到栈2中，直到栈1为空，最后弹出栈2的栈顶元素即可

**C++代码**

* 时间复杂度：`push`为O(1)，`pop`为O(*n*)
* 空间复杂度：O(*n*)

```c++
class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        if(stack2.empty())
        {
            if(!stack1.empty())
            {
                while(!stack1.empty())
                {
                    int a=stack1.top();
                    stack1.pop();
                    stack2.push(a);
                }
            }
            else
                return 0;
        }
        int res=stack2.top();
        stack2.pop();
        return res;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};
```

**Python代码**

```python
# -*- coding:utf-8 -*-
class Solution:
    def __init__(self):
        self.sta1 = []
        self.sta2 = []
    def push(self, node):
        # write code here
        self.sta1.append(node)
    def pop(self):
        # return xx
        if len(self.sta2) == 0:
            if len(self.sta1) == 0:
                return None
            else:
                while len(self.sta1) > 0:
                    self.sta2.append(self.sta1.pop())
        return self.sta2.pop()
```



## 裴波那契数列

[NowCoder](https://www.nowcoder.com/practice/c6c7742f5ba7442aada113136ddea0c3?tpId=13&tqId=11160&tPage=1&rp=1&ru=/ta/coding-interviews&qru=/ta/coding-interviews/question-ranking)

### 题目描述

大家都知道斐波那契数列，现在要求输入一个整数n，请你输出斐波那契数列的第n项（从0开始，第0项为0）。

n<=39

### 解答

#### 方法1：递归

会进行很多重复计算，需要优化

* 时间复杂度：O(*2<sup>n</sup>*)
* 空间复杂度：O(*n*)

#### 方法2：迭代

循环代替递归，优化到线性的时间复杂度

**C++代码**

- 时间复杂度：O(*n*)
- 空间复杂度：O(*1*)

```c++
class Solution {
public:
    int Fibonacci(int n) {
        if(n <= 0)
            return 0;
        if(n == 1 || n == 2)
            return 1;
         
        int pre = 1;
        int last = 1;
        int cur;
        for(int i = 2;i < n;i++)
        {
            cur = pre + last;
             
            pre = last;
            last = cur;
        }
        return cur;
    }
};
```

**Python代码**

```python
# -*- coding:utf-8 -*-
class Solution:
    def Fibonacci(self, n):
        # write code here
        if n == 0:
            return 0
        if n == 1:
            return 1
        pre,cur = 0,1
        for i in range(2,n+1):
            nex = pre + cur
            pre = cur
            cur = nex
        return nex
```



## 旋转数组的最小数字

[NowCoder]()

### 题目描述



### 解答



**C++代码**

- 时间复杂度：O()
- 空间复杂度：O()

```c++

```

**Python代码**

```python

```



## 矩阵中的路径

[NowCoder]()

### 题目描述



### 解答



**C++代码**

- 时间复杂度：O()
- 空间复杂度：O()

```c++

```

**Python代码**

```python

```



## 机器人的运动范围

[NowCoder]()

### 题目描述



### 解答



**C++代码**

- 时间复杂度：O()
- 空间复杂度：O()

```c++

```

**Python代码**

```python

```



## 剪绳子

[NowCoder]()

### 题目描述



### 解答



**C++代码**

- 时间复杂度：O()
- 空间复杂度：O()

```c++

```

**Python代码**

```python

```



## 二进制中1的个数

[NowCoder]()

### 题目描述



### 解答



**C++代码**

- 时间复杂度：O()
- 空间复杂度：O()

```c++

```

**Python代码**

```python

```



## 数值的整数次方

[NowCoder]()

### 题目描述



### 解答



**C++代码**

- 时间复杂度：O()
- 空间复杂度：O()

```c++

```

**Python代码**

```python

```



## 打印从1到最大的n位数
## 删除链表的节点
## 正则表达式匹配
## 表示数值的字符串
## 调整数组顺序使奇数位于偶数前面
## 链表中倒数第k个节点
## 链表中环的入口节点
## 反转链表
## 合并两个排序的链表
## 树的子结构
## 二叉树的镜像
## 对称的二叉树
## 顺时针打印矩阵
## 包含min函数的栈
## 栈的压入弹出序列
## 从上到下打印二叉树
## 二叉搜索树的后序遍历序列
## 二叉树中和为某一值的路径
## 复杂链表的复制
## 二叉搜索树与双向链表
## 序列化二叉树
## 字符串的排列
## 数组中出现次数超过一半的数字
## 最小的k个数
## 数据流中的中位数
## 连续子数组的最大和
## 1~n整数中1出现的次数
## 数字序列中某一位的数字
## 把数组排成最小的数
## 把数字翻译成字符串
## 礼物的最大价值
## 最长不含重复字符的子字符串
## 丑数
## 第一个只出现一次的字符
## 数组中的逆序对
## 两个链表的第一个公共节点
## 在排序数组中查找数字
## 二叉搜索树的第k大节点
## 二叉树的深度
## 数组中数字出现的次数
## 和为s的数字
## 翻转字符串
## 队列的最大值
## n个骰子的点数
## 扑克牌中的顺子
## 圆圈中最后剩下的数字
## 股票的最大利润
## 求1~n的和
## 不用加减乘除做加法
## 构建乘积数组
