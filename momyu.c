/** @file  momyu.c
 *  @brief Simulator of momularimi
 *
 *  This software is a simulator of momularimi
 *  and outputs momularimi's tweets according to specified options.
 *
 *  @author    0x2fff
 *  @version   1.0
 *  @par       History
 *             2018-05-03 | 0x2fff | Create new.
 *  @bug
 *  @attention
 *  @warning
 *  @remarks
 *  @note
 *  @todo
 */

#include <stdio.h>
#if defined(__GNUC__)
#include <unistd.h>
#elif defined(_MSC_VER)
#include "getopt.h"
#include <stdlib.h>
#else
errorimi
#endif

/** Translation table that converts options to momularimi's tweets. */
const char *moption2momutput[] = {
    "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "",
    "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "",
    "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "",
    "", "", "", "", "", "", "", "", "", "",
    /* : */ "もみゅ", "", "", "", "", "", "",
    /* A */ "いにしえの図書館",
    /* B */ "", "", "", "",
    /* F */ "森を汚さないでね", "", "", "", "", "",
    /* L */ "伝説のきりかぶ",
    /* M */ "きのこマスター",
    "", "", "", "", "", "", "", "", "", "", "", "",
    /* Z */ "",
    /* [ */ "", "", "", "", "", /* ` */ "",
    /* a */ "もみゅ部隊",
    /* b */ "",
    /* c */ "きゃべつウィーク",
    /* d */ "闇のお茶会",
    /* e */ "",
    /* f */ "森のシャワー",
    /* g */ "",
    /* h */ "こんにちは！",
    /* i */ "",
    /* j */ "",
    /* k */ "",
    /* l */ "光るどんぐり",
    /* m */ "もみゅ",
    /* n */ "",
    /* o */ "",
    /* p */ "",
    /* q */ "",
    /* r */ "",
    /* s */ "",
    /* t */ "",
    /* u */ "究極のまつぼっくり",
    /* v */ "",
    /* w */ "もみゅだけの世界",
    /* x */ "",
    /* y */ "",
    /* z */ ""};

/**
 * @brief  Main function
 * @param  argc An integer argument count of the command line arguments
 * @param  argv An argument vector of the command line arguments
 * @return An integer 0 upon exit success
 * @pre 
 * @post
 */
int main(int argc, char *argv[])
{
    int c, i, m;
    extern char *optarg;
    extern int optind;

    while ((c = getopt(argc, argv, ":AFLMacdfhlmuw:")) != -1)
    {
        printf("%s\n", moption2momutput[c]);
        if (c != (int)'m')
        {
            continue;
        }
        for (m = atoi(optarg) - 1; m > 0; m--)
        {
            printf("もみゅ\n");
        }
    }
    argc -= optind;
    argv += optind;
    for (i = 0; i < argc; i++)
    {
        printf("%sもみゅ\n", argv[i]);
    }
    return 0;
}
