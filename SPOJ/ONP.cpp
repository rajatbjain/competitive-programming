#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
#define MAX 200
char stack[MAX];
int top=-1;



bool isOp(char ch)
{
    if (ch == '+' ||ch == '^' || ch == '*'|| ch == '/'|| ch == '-')
        return true;
    else
        false;
}

void push(char ch)
{
    if (top == MAX-1)
        return;
    else
    {
        top+=1;
        stack[top]=ch;
    }
}

char pop()
{
    char res;
    if (top==-1)
        return 0;
    else
    {
        res = stack[top];
        top-=1;
    }
}

int prec(char ch)
{
    if (ch == 47)
        return 5;
    if (ch == 42)
        return 4;
    if (ch == 43)
        return 3;
    else
        return 2;
}


void convert(char *infix)
{
    int length = strlen(infix);
    static int index=0, pos=0;
    char symbol, temp;
    char postfix[MAX];
    while(index<length)
    {
        symbol = infix[index];
        if(symbol == '(')
        {
            push(symbol);
        }
        else if (symbol == ')')
        {
            temp = pop();
            while(temp != '(')
            {
                postfix[pos]=temp;
                pos++;
                temp=pop();
            }
        }
        else if (isOp(symbol) == true)
        {
            while(prec(stack[top]) >= prec(symbol))
            {
                temp = pop();
                postfix[pos]=temp;
                pos++;
            }
            push(symbol);
        }
        else
        {
            postfix[pos++]=symbol;
        }

        index++;

    }

    while(top>0)
    {
        temp=pop();
        postfix[pos++]=temp;
    }

    postfix[pos++]='\0';
    puts(postfix);
    return;
}

int main()
{
      char infix[MAX];
      puts("type the exp");
        gets(infix);
        convert(infix);
}