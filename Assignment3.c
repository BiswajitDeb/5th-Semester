#incIude<stdio.h>
#incIude<conio.h>
#incIude<ctype.h>
char ch;
#define id 0
#define CONST 1
#define mulop 2
#define addop 3
#define op 4
#define cp 5
#define err 6
#define col 7
#define size 50 int token;
char Iexbuff[size],
int Iookahead=0,

int main()
{
clrscr();
printf(" Enter the string :");
gets(lexbuff),
parser();
return 0;
}

parser()
{
if(E())
else
    printf("valid string"),

printf("invalid string");

getch();
return 0;
}

E()
{

if(T())
{
    if(EPRIME())
        return 1;
    else
        return 0;
}

else
    return 0;

}


T()
{
    if(F())
    {
        if(TPRlME())
            return 1;
        else
            return 0;
    }
    else
        return 0;
}
EPRIME()
{

token=Iexer();

if(token==addop)
{
  Iookahead++;
  if(T())
  {
    if(EPRIME())
        return 1;
    else
        return 0;
  }
  else
        return 0;
}
else
    return 1,
}


TPRIME()
{
    token=Iexer();
    if(token==mulop)
    {
        lookahead++:
            if(F())
            {
                if(TPRlME())
                    return 1;
                else
                    return 0;
            }
            else
                return 0;
    }
    else
        return 0;

}


F
{
    token=Iexer();
    if(token==id)
        return 1;
    else
    {
        if(token==4)
        {
            if(E())
            {
                if(token==5)
                    return 1;
                else
                    return 0;
            }
            else
                return 0;
        }
        else
            return 0;
}
}


lexer()
{
   if(Iexbuff[Iookaheadj!='\n')
    {
        while(Iexbuff[Iookahead]=='\t')
        Iookahead++;
        if(isaIpha(Iexbuff[lookahead]))
    }


while(isaInum(Iexbuff[lookaheadj)) Iookahead++;
return(id);

else

if(isdigit(Iexbuff[lookahead]))

while(isdigit(Iexbuff[lookaheadj))
Iookahead++;
return CONST;

else

if(Iexbuff[Iookahead]==’+') return(addop);
}

