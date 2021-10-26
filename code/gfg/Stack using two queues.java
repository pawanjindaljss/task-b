import java.util.*;


class StackUsingQueues
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0)
		{
			Queues g = new Queues();
			
			int q = sc.nextInt();
			while(q>0)
			{
				int QueryType = sc.nextInt();
				if(QueryType == 1)
				{
					int a = sc.nextInt();
					g.push(a);
				}
				else if(QueryType == 2)
				System.out.print(g.pop()+" ");
			q--;
			}	
			System.out.println();
				
			
			
		t--;
		}
	}
}

// } Driver Code Ends


class Queues
{
    Queue<Integer> q1 = new LinkedList<Integer>();
    Queue<Integer> q2 = new LinkedList<Integer>();
    
    /*The method pop which return the element poped out of the stack*/
    int pop()
    {
        int n = q2.size();
        int i = 0, temp = 0;
	    if(n > 0) {
	        if(n == 1)
	            return q2.remove();
	        while(i < n - 1) {
	            q1.add(q2.remove());
	            i++;
	        }
	        temp = q2.remove();
	        i = 0;
	        Queue<Integer> j = q1;
	        q1 = q2;
	        q2 = j;
	        
	       // while(i < q1.size()) {
	       //     q2.add(q1.remove());
	       //     i++;
	       // }
	        return temp;
	    }
	    
	    else {
	        return -1;
	    }
    }
	
    /* The method push to push element into the stack */
    void push(int a)
    {
	   q2.add(a);	
    }
}

