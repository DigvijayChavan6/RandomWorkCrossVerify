class jaq{
    int demo(int a[],int s){
        int sum=0;
        for(int i=0;i<s;i++){
            int n=a[i],t=0;
            while(n!=0){
                int r=n%10;
                if(t==i)sum+=(r*r);
                t++;
                n/=10;
            }
        }
        return sum;
    }

    public static void main(String[] args) {
        jaq ob=new jaq();
        int []arr=new int[]{1,5,423,310,61540};
        System.out.println(ob.demo(arr,arr.length));
    }
}