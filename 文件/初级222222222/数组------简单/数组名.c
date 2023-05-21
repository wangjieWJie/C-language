#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>



//数组名到底是什么？

// 数组名是一个首元素地址

int main33()
{
	int shuzu[] = { 1,2,3,45,6,7,8,9,10 };
	printf("%p \n", shuzu);        //0000004EB73CFB48  两个一样的地址强力的说明了数组名就是首元素地址
	printf("%p \n", &shuzu[0]);    //0000004EB73CFB48  两个一样的地址强力的说明了数组名就是首元素地址
	printf("%d \n", *shuzu);       // 1   通过解数组名，得知这个地址下的元素就是1.即，首元素本身。



//但还有两个例外：
	//1、比如：
		sizeof(shuzu);
		// sizeof 里单独放一个数组名，数组名表示整个数组   sizeof(shuzu) 计算的是整个数组的大小，单位是字节

	//2、比如：
		&shuzu;
		// &数组名，此时的数组名代表的是整个数组，&数组名，去除的是整个数组的地址
	//但是
		printf("%p \n", &shuzu);    //0000004EB73CFB48  虽然他的地址和上面的首元素地址是一样的，但是这个地址代表的是从这开始，向后整个数组的地址。


		printf("%p \n", &shuzu[0]);    //0000004EB73CFB48    B48  
		printf("%p \n", &shuzu[0]+1);  //000000D3C35AF95C    95C   

		printf("%p \n", &shuzu);    //0000004EB73CFB48  
		printf("%p \n", &shuzu+1);  //000000D3C35AF97C











	return 0;
}
