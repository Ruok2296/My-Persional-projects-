#include <stdio.h>
#include<conio.h>
#include<dos.h>
struct WORDREGS {
    unsigned int ax,cx,dx,si,cflag,flags;
};
struct BYTEREGS {
    unsigned int al,ah,bl,bh,cl,ch,dl,dh;
};
union REGS {
    struct WORDREGS x;
    struct BYTEREGS h;
};
int main()
{
    union REGS in,out;
    in.h.ah = 0x30;
    in.h.al = 0;

    intdos(&in,&out);
    printf("Running dos virsion is : %d.%d",out.h.al,out.h.ah);
    return 0;
    getch();
}
