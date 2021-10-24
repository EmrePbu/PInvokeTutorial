using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1
{
    internal class Program
    {

        [DllImport("NativeLibrary.dll")]
        public static extern void Hello(string messag, int count, bool isNewLine);


        [DllImport("NativeLibrary.dll", EntryPoint = "Sum")]
        public static extern int SumFunc(int a, int b);


        [DllImport("NativeLibrary.dll")]
        public static extern int print_prime_factors(int val);

        static void Main(string[] args)
        {

            Console.Write("Enter your name : ");
            string msg = Console.ReadLine();

            Console.Write("Times : ");
            int count = Convert.ToInt32(Console.ReadLine());

            Console.Write("Is new Line (true or false) : ");
            bool isNewLine = Convert.ToBoolean(Console.ReadLine());

            Hello(msg, count, isNewLine);


            Console.Write("Please enter first number : ");
            int a = Convert.ToInt32(Console.ReadLine());
            Console.Write("Please enter second number : ");
            int b = Convert.ToInt32(Console.ReadLine());
            int result = SumFunc(a, b);
            Console.WriteLine("{0} + {1} = {2}", a, b, result);



            print_prime_factors(80);

            Console.ReadLine();
        }
    }
}
