/* ------------------------------------------------------------------|
�ַ���ѹ���������ַ��ظ����ֵĴ�������дһ�ַ�����ʵ�ֻ������ַ���ѹ�����ܡ����磬�ַ���aabcccccaaa���Ϊa2b1c5a3������ѹ��������ַ���û�б�̣��򷵻�ԭ�ȵ��ַ���������Լ����ַ�����ֻ������СдӢ����ĸ��a��z����

ʾ��1:

 ���룺"aabcccccaaa"
 �����"a2b1c5a3"
ʾ��2:

 ���룺"abbccd"
 �����"abbccd"
 ���ͣ�"abbccd"ѹ����Ϊ"a1b2c2d1"����ԭ�ַ������ȸ�����
��ʾ��

�ַ���������[0, 50000]��Χ�ڡ�

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/compress-string-lcci
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������|
-------------------------------------------------------------------*/

/*
*
*	ִ����ʱ��8 ms, ������ C++ �ύ�л�����90.41%���û�
*	�ڴ����ģ�7.2 MB, ������ C++ �ύ�л�����82.18%���û�
*/

#include <iostream>
#include <string> 
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <stack>
#include <queue>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}

};

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

string compressString(string S) {
    string res;
    int tmp = 0;
    char curr = S[0];
    for (int i = 0; i <= S.size(); ++i) {
        if (i == S.size() || S[i] != curr) {
            res += curr + to_string(tmp);
            tmp = 1;
            curr = S[i];
        }
        else {
            tmp++;
        }
    }
    return res.size() >= S.size() ? S : res;
}