//kmp算法
public static int kmp(char[] s1,char[] s2){
	//s1中当前比对的位置是x
	//s2中当前比对的位置是Y
	int n=s1.length,m=s2.length,x=0,y=0;
	int []next=nextArray(s2,m);
	while(x<n&&y<m){
		if(s1[x]==s2[y]){
			x++;
			y++;
		}
		//字串在第一个字符都没匹配上就让原串加加换一个开头
		else if(y==0){
			x++;
		}
		else{
			y=next[y];
		}
	}
	//如果是Y越界了就是找到了，
	//如果是x越界了就是没找到
	return y==m?x-y:-1;
}

//得到next数组
public static int[] nextArray(char [] s,int m){
	if(m==1){
		return new int[]{-1};
	}
	int[] next=new int[m];
	next[0]=-1;
	next[1]=0;
	//i表示当前要求的next值的位置
	//cn白哦是当前要和前一个字符比对的下标
	int i=2,cn=0;
	while(i<m)
	{
		if(s[i-1]==s[cn]){
			next[i++]=++cn;
		}
		else if(cn>0){
			cn=next[cn];
		}
		else{
			next[i++]=0;
		}
	}
}
	