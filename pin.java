public class pin {
    int mypin(int input1,int input2, int input3){
        int a=input1,b=input2,c=input3;
        int[] fr=new int[10];
        while(a!=0){
            fr[a%10]++;
            a/=10;  }
        while(b!=0){
            fr[b%10]++;
            b/=10;  }
        while(c!=0){
            fr[c%10]++;
            c/=10;  }
        int th=-1,h=-1,t=-1,u=-1,mx=0,mn=20;
        for(int i=0;i<10;i++){
           if(fr[i]!=0){
                if(h==-1)h=i;
                if(fr[i]<mn){
                    u=i;
                    mn=fr[i];
                }
                if(fr[i]>=mx){
                    t=i;
                    mx=fr[i];
                }
                th=i;
           }
        }
        int p=th;
        p=p*10+h;
        p=p*10+t;
        p=p*10+u;
        return p;
    }
    public static void main(String[] args) {
        pin ob=new pin();
        System.out.println(ob.mypin(8530,5620,7532));
    }
}
