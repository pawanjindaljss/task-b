
#Complete this function

def kaden(a, n):
    if n ==1:
         return a[0]
    max_sum = 0
    sum_til_now = 0
    for i in range(n):
        sum_til_now = sum_til_now + a[i]
        if sum_til_now <= 0:
            sum_til_now = 0
        else:
            max_sum = max(max_sum, sum_til_now)
    if max_sum == 0:
        max_sum = max(a)
    return max_sum
    

def circularSubarraySum(arr,n):
    ##Your code here
    max_ele = max(arr)
    if n ==1:
         return arr[0]
    max_sum = kaden(arr, n)
    total_sum = sum(arr)
    for i in range(n):
        arr[i] = -arr[i]
    max_sum = max(max_sum, total_sum  + kaden(arr, n))
    if max_sum == 0:
        max_sum = max_ele
    return max_sum


#{ 
#  Driver Code Starts
#Initial Template for Python 3


import math


    
    
def main():
        T=int(input())
        while(T>0):
            
            n=int(input())
            
            arr=[int(x) for x in input().strip().split()]
            
            print(circularSubarraySum(arr,n))
            
            T-=1


if __name__ == "__main__":
    main()
# } Driver Code Ends
