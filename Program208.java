import java.util.*;

class Program206
{
    public static int CountDigits(int iNo)
    {
        int iCnt = 0;

        while(iNo > 0)
        {
            iCnt++;
            iNo = iNo / 10;
        }
        return iCnt;
    }

    public static void main(String Args[])
    {
        int iValue = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number: ");
        iValue = sobj.nextInt();

        iRet = CountDigits(iValue);

        System.out.println("Number of Digits are : "+iRet);
    }
}