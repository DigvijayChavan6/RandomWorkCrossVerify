public class encode {
    String getString(String input1,int input2){
        String str="",s=input1;
        String temp="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int cnt=0;
        for(int i=0;i<input2;i++){
            if(s.charAt(i)=='0')cnt++;
            else{
                str=str+temp.charAt(26-cnt);
                cnt=0;
            }
        }
        if(cnt!=0)str=str+temp.charAt(26-cnt);
        return str;
    }
    public static void main(String[] args) {
        encode ob=new encode();
        String str="010000100100000000001000100000010000101000010000001";
        System.out.println(ob.getString(str,str.length()));
    }
}
