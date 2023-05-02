#include <bits/stdc++.h>
#include <sys/stat.h>

enum vm
{
    INC = 1,
    DEC,
    MOV,
    MOVC,
    LSL,
    LSR,
    JMP,
    JZ,
    JNZ,
    JFE,
    RET,
    ADD,
    SUB,
    XOR,
    OR,
    IN,
    OUT
};

typedef char byte_t;
typedef bool flag_t;



int main()
{
    byte_t reg[16];
    byte_t mem[256];
    flag_t zero_flag(false);
    flag_t eof_flag(false);
    FILE* function(fopen("decryptor.bin", "rb")),
        * cipher(fopen("q1_encr.txt", "r")),
        * answer(fopen("output.txt", "w"));
    auto fd(fileno(function));
    struct stat buf;
    fstat(fd, &buf);
    if (buf.st_size > 256)
    {
        std::cerr << ".bin too large.\n";
    }
    else
    {
        while (!feof(function))
        {
            fread(mem, sizeof(mem), 1, function);
        }
        fclose(function);
        int a(0);
        const int& size(buf.st_size);
        while (1)
        {
            byte_t& comd(mem[a % size]);
            byte_t& byte(mem[(a + 1) % size]);
            if (comd == vm::INC)
            {
                zero_flag = false;
                byte_t index(byte & 0x0F);
                reg[index]++;
                zero_flag = !reg[index];
            }
            else if (comd == vm::DEC)
            {
                zero_flag = false;
                byte_t index(byte & 0x0F);
                reg[index]--;
                zero_flag = !reg[index];
            }
            else if (comd == vm::MOV)
            {
                zero_flag = false;
                byte_t rx(byte & 0x0F);
                byte_t ry((byte & 0xF0) >> 4);
                reg[rx] = reg[ry];
            }
            else if (comd == vm::MOVC)
            {
                reg[0] = byte;
            }
            else if (comd == vm::LSL)
            {
                zero_flag = false;
                byte_t index(byte & 0x0F);
                reg[index] <<= 1;
                zero_flag = !reg[index];
            }
            else if (comd == vm::LSR)
            {
                zero_flag = false;
                byte_t index(byte & 0x0F);
                reg[index] >>= 1;
                zero_flag = !reg[index];
            }
            else if (comd == vm::JMP)
            {
                a += (byte % size) - 2;
            }
            else if (comd == vm::JZ)
            {
                if (zero_flag)
                {
                    a += (byte % size) - 2;
                }
            }
            else if (comd == vm::JNZ)
            {
                if (!zero_flag)
                {
                    a += (byte % size) - 2;
                }
            }
            else if (comd == vm::JFE)
            {
                if (eof_flag)
                {
                    a += (byte % size) - 2;
                }
            }
            else if (comd == vm::RET)
            {
                fclose(cipher);
                fclose(answer);
                eof_flag = false;
                zero_flag = false;
                break;
            }
            else if (comd == vm::ADD)
            {
                zero_flag = false;
                byte_t rx(byte & 0x0F);
                byte_t ry((byte & 0xF0) >> 4);
                reg[rx] += reg[ry];
                zero_flag = !reg[rx];
            }
            else if (comd == vm::SUB)
            {
                zero_flag = false;
                byte_t rx(byte & 0x0F);
                byte_t ry((byte & 0xF0) >> 4);
                reg[rx] -= reg[ry];
                zero_flag = !reg[rx];
            }
            else if (comd == vm::XOR)
            {
                zero_flag = false;
                byte_t rx(byte & 0x0F);
                byte_t ry((byte & 0xF0) >> 4);
                reg[rx] ^= reg[ry];
                zero_flag = !reg[rx];
            }
            else if (comd == vm::OR)
            {
                zero_flag = false;
                byte_t rx(byte & 0x0F);
                byte_t ry((byte & 0xF0) >> 4);
                reg[rx] |= reg[ry];
                zero_flag = !reg[rx];
            }
            else if (comd == vm::IN)
            {
                byte_t index(byte & 0x0F);
                byte_t sym(fgetc(cipher));
                reg[index] = sym;
                eof_flag = feof(cipher);
            }
            else if (comd == vm::OUT)
            {
                zero_flag = false;
                byte_t index(byte & 0x0F);
                byte_t& sym(reg[index]);
                fprintf(answer, "%c", sym);
            }
            a += 2;
        }
    }
 //Kad flag pakila 
}