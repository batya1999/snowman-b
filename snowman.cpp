#include <string>
#include <iostream>
#include <array>

namespace ariel
{
    std::string snowman(int num){
        const auto A=10;
        const auto B=100;
        const auto C=1000;
        const auto D=10000;
        const auto E=100000;
        const auto F=1000000;
        const auto G=10000000;
        const auto J=0;
        const auto H=1;
        const auto I=4;
        const auto K=8;
        int a=num;
        int b=0;
        int count =0;
        while(a!=0){
            b=a%A;
            if(b>4){
                throw("bigger then 4!");
            }//base case for invalid input
            if(b<1){
                throw("smaller then 1!");
            }//base case for invalid input
            a=a/A;
            count++;
        }
        if(count<K){
            throw("less then 8 digits!");
        }
         if(count>K){
            throw("more then 8 digits!");
        }
        std::string n;
        b=num/G;
        int x=b%A;
        //hat
        std::array<std::string, I> arrH={" \n_===_\n", "  ___\n .....\n", "   _ \n  /_\\\n", "  ___\n (_*_)\n"};
        if(x==1 || x==2){
            n=n+arrH.at(x-1);
        }
        if(x==3||x==4){
            n=arrH.at(x-1)+n;
        }
        b=num/C;
        x=b%A;
        //left arm 
        if(x==2){
            n=n+"\\";
        }
        b=num/E;
        x=b%A;
        //left eye
        std::array<std::string, I> arrLE = {"(.", "(o", "(O", "(-"};
        n=n+arrLE.at(x-1);
        b=num/F;
        x=b%A;
        //nose
        std::array<std::string, I> arrN = {",", ".", "_", " "};
        n=n+arrN.at(x-1);
        b=num/D;
        x=b%A;
        //right eye
        std::array<std::string, I> arrRE= {".)", "o)", "O)", "-)"};
        n=n+arrRE.at(x-1);
        b=num/B;
        x=b%A;
        //right arm 
        if(x==2){
            n=n+"/";
        }
        b=num/C;
        x=b%A;
        //left arm
        std::array<std::string, I> arrLA = {("\n<"), "\n ", "\n/",  "\n "};
        n=n+arrLA.at(x-1);
        b=num/A;
        x=b%A;
        //torso
        std::array<std::string, I> arrT = {"( : )", "(] [)", "(> <)", "(   )"};
        n=n+arrT.at(x-1);
        b=num/B;
        x=b%A;
        //right arm
        std::array<std::string, I> arrRA = {(">\n"), " \n", "\\\n", " \n"};
        n=n+arrRA.at(x-1);
        x = num%A;
        //base
        std::array<std::string, I> arrB = {" ( : )", " (\" \")", " (___)", " (   )"};
        n=n+arrB.at(x-1);
        return n;
    }
}