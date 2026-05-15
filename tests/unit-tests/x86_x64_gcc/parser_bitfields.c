/* Cake 0.13.31 x86_x64_gcc */

struct Flags {
    unsigned char active : 1;
    unsigned char visible : 1;
    unsigned char locked : 1;
};

struct Padding {
    unsigned short x : 5;
    unsigned short : 3;
    unsigned short y : 8;
};

struct MixedTypes {
    unsigned char a : 3;
    unsigned int b : 9;
};

struct NormalThenBitfield {
    int x;
    unsigned int flags : 3;
};

struct ExactFit {
    unsigned int a : 8;
    unsigned int b : 8;
    unsigned int c : 8;
    unsigned int d : 8;
};

union BitUnion {
    unsigned int lo : 16;
    unsigned int hi : 16;
};

struct ZeroWidth {
    unsigned int a : 10;
    unsigned int : 0;
    unsigned int b : 10;
};

struct Spill {
    unsigned int a : 15;
    unsigned int b : 15;
    unsigned int c : 10;
};

struct Basic {
    unsigned int a : 5;
    unsigned int b : 4;
    unsigned int c : 4;
};

struct Overflow_int {
    unsigned char a : 3;
    unsigned int b : 30;
};

struct CharInt_5_5 {
    unsigned char a : 5;
    unsigned int b : 5;
};

struct CharShort {
    unsigned char a : 3;
    unsigned short b : 5;
};

struct TailPad {
    unsigned char a : 3;
    short b;
};

union BitUnion_mixed {
    unsigned int a : 16;
    unsigned int b;
};

struct FlushOnNormal {
    unsigned char flags : 4;
    int value;
};

struct CC_I {
    unsigned char a : 4;
    unsigned char b : 4;
    unsigned int c : 8;
};
struct Basic basic = {31,15,7};
struct Spill spill = {0,0,1023};
struct ZeroWidth zw = {511,0,1};
struct Padding pad = {31,0,255};
struct MixedTypes mt = {7,511};
struct CharInt_5_5 ci = {31,31};
struct Overflow_int ov = {0,1073741823};
struct CharShort cs = {7,31};
struct CC_I cci = {15,15,255};
struct FlushOnNormal fn = {15,-1};
struct NormalThenBitfield ntb = {42,7};
struct ExactFit ef = {170,187,204,221};
union BitUnion bu = {43981};
union BitUnion_mixed bum = {0};
struct TailPad tp = {5,1000};
struct Flags flags2 = {0,0,1};
struct Flags flags = {1,1,0};

int main()
{
}
