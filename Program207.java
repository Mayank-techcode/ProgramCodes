import java.util.*;

class Program206
{
    public static int Difference(int iNo)
    {
        int iCnt = 0; 
        int iSumF = 0, iSumN = 0;

        for(iCnt = 1; iCnt<iNo ; iCnt++)
        {
            if((iNo % iCnt) == 0)       // Factor
            {
                iSumF = iSumF + iCnt;
            }
            else                        // Non Factor
            {
                iSumN = iSumN + iCnt;
            }
        }
        return iSumN - iSumF;
    }

    public static void main(String Args[])
    {
        int iValue = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number: ");
        iValue = sobj.nextInt();

        iRet = Difference(iValue);

        System.out.println("Difference of factos is: "+iRet);
    }
}