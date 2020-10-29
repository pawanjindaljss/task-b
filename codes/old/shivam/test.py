import copy
def solution(mat, matcpy, n, m, maxx):
    df=0
    rh=0
    while(1) :
        for i in xrange(n):
            for j in xrange(m):
                if(mat[i][j]==maxx):
                    if(i==0 and j==0):
                        matcpy[i][j+1]=maxx; matcpy[i+1][j]=maxx; matcpy[i+1][j+1]=maxx; 
                    elif(i==0 and j==m-1):
                        matcpy[i][j-1]=maxx; matcpy[i+1][j]=maxx; matcpy[i+1][j-1]=maxx;
                    elif(i==0 and j<m-1 and j>0):
                        matcpy[i][j-1]=maxx;
                        matcpy[i+1][j]=maxx; matcpy[i+1][j-1]=maxx; matcpy[i+1][j+1]=maxx;
                        matcpy[i][j+1]=maxx;
                    elif(i>0 and i<n-1 and j==0):
                        matcpy[i+1][j]=maxx; matcpy[i+1][j+1]=maxx;
                        matcpy[i-1][j]=maxx; matcpy[i-1][j+1]=maxx;
                        matcpy[i][j+1]=maxx;
                    elif(i==n-1 and j==0):
                        matcpy[i-1][j]=maxx; matcpy[i-1][j+1]=maxx;
                        matcpy[i][j+1]=maxx;
                    elif(i==n-1 and j<m-1 and j>0):
                        matcpy[i-1][j-1]=maxx; matcpy[i-1][j]=maxx; matcpy[i-1][j+1]=maxx;
                        matcpy[i][j-1]=maxx; matcpy[i][j+1]=maxx;
                    elif(i==n-1 and j==m-1):
                        matcpy[i-1][j-1]=maxx; matcpy[i-1][j]=maxx; matcpy[i][j-1]=maxx; 
                    elif(i>0 and i<n-1 and j==m-1):
                        matcpy[i-1][j-1]=maxx; matcpy[i-1][j]=maxx;
                        matcpy[i+1][j]=maxx; matcpy[i+1][j-1]=maxx;
                        matcpy[i][j-1]=maxx;
                    else:
                        matcpy[i-1][j-1]=maxx; matcpy[i-1][j]=maxx; matcpy[i-1][j+1]=maxx;
                        matcpy[i+1][j]=maxx; matcpy[i+1][j-1]=maxx; matcpy[i+1][j+1]=maxx;
                        matcpy[i][j-1]=maxx; matcpy[i][j+1]=maxx;
                else:
                    df+=1;
        if(df==0):
            return rh;
        else:
            rh+=1;
            df=0;
        for i in xrange(n):
            for j in xrange(m):
                mat[i][j] = matcpy[i][j];


t = input()
while t:
    n,m = map(int, raw_input().split())
    mat = []
    maxx = 0
    for i in xrange(n):
        mat.append(map(int, raw_input().split()))
        maxx = max(maxx,max(may[i]))
    matcpy = copy.deepcopy(mat);
    print solution(mat, matcpy, n, m, maxx)
    t-=1