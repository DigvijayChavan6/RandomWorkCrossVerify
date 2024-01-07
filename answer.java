class answer{
    int duplicate(int []input1,int input2){
        int d=input1[input2-1];
        int f=0;
        for(int i=input2-1;i>=0;i--){
            if(input1[i]<1)continue;
            for(int j=i+1;j<input2;j++){
                if(input1[i]==input1[j]){
                    return input1[i];
                }
            }
            f=1;
        }
        if(f==0)return 0;
        return d;
    }
    public static void main(String[] args) {
        answer ob=new answer();
        int[] ar=new int[]{1,2,3,0,5,0,3,0,7};
        System.out.println(ob.duplicate(ar,ar.length));
    }
}