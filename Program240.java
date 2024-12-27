import java.util.*;

class ArrayX
{
    public int Arr[];

    public ArrayX(int no)
    {
        Arr = new int[no];
    }
}

class Program240
{
    public static void main(String Arg[])
    {
        ArrayX aobj = new ArrayX(5);

        System.out.println("Array Size is :"+aobj.Arr.length);
    }
}