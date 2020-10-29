x      PPPPPPPPPPPPPPP  
x      PPPPPPPPPPPPPPP
x      PP           PP
x      PP           PP
x      PP           PP
x      PP           PP
x      PPPPPPPPPPPPPPP
x      PPPPPPPPPPPPPPP
x      PP  
x      PP  
x      PP  
x      PP  
x      PP
x      PP
x      PP
x      PP 

t =int(input())
for i in range(t):
    a = input()
    b = input()
    ade = count(a);
    bd = count(b);
    cnt = 0;
    while(bd > 0):
        u = ade ^ bd;
        v = ade & bd;
        ade = u;
        bd = v*2;
        cnt=cnt+1;
    print(cnt)
x      PPPPPPPPPPPPPPP  
x      PPPPPPPPPPPPPPP
x      PP           PP
x      PP           PP
x      PP           PP
x      PP           PP
x      PPPPPPPPPPPPPPP
x      PPPPPPPPPPPPPPP
x      PP  
x      PP  
x      PP  
x      PP  
x      PP
x      PP
x      PP
x      PP 

def count(a):
    de=0
    for digit in a:
        de = de*2+int(digit)
    return de  