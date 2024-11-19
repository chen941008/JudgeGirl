#include <stdio.h>
#include <stdbool.h>
int main(){
    int palindrome[100000][2],input[100]={0},input_count=0,palindrome_count=0;//[0]for left [1]for right
    while (scanf("%d",&input[input_count++])!=EOF){} 
    input_count--;
    for(int i=0;i<input_count;i++){
        int left=i,right=i;
        while (left>=0&&right<input_count&&input[left]==input[right]){
            palindrome[palindrome_count][0]=left;
            palindrome[palindrome_count][1]=right;
            palindrome_count++;
            left--;
            right++;
        }
        left=i,right=i+1;
        while (left>=0&&right<input_count&&input[left]==input[right]){
            palindrome[palindrome_count][0]=left;
            palindrome[palindrome_count][1]=right;
            palindrome_count++;
            left--;
            right++;
        }
    }
    int min_left=100,max_right=0,max_len=0;
    for(int i=0;i<palindrome_count;i++){
        for(int j=i+1;j<palindrome_count;j++){
            int current_len = 0, left_bound, right_bound;

            if (palindrome[i][1] == palindrome[j][0] - 1) { // i 在 j 左邊
                left_bound = palindrome[i][0];
                right_bound = palindrome[j][1];
                current_len = right_bound - left_bound + 1;
            } else if (palindrome[j][1] == palindrome[i][0] - 1) { // j 在 i 左邊
                left_bound = palindrome[j][0];
                right_bound = palindrome[i][1];
                current_len = right_bound - left_bound + 1;
            }

            // 更新最長雙重迴文
            if (current_len > max_len || (current_len == max_len && left_bound >= min_left)) {
                min_left = left_bound;
                max_right = right_bound;
                max_len = current_len;
            }
            
        }
    }
    for(int i=min_left;i<=max_right;i++){
        if(i==max_right)printf("%d\n",input[i]);
        else printf("%d ",input[i]);
    }
}