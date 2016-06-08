// This provides the frozen (compiled bytecode) files that are included if
// any.
#include <Python.h>

// Blob from which modules are unstreamed.
#if defined(_WIN32) && defined(_NUITKA_EXE)
extern const unsigned char* constant_bin;
#else
extern "C" const unsigned char constant_bin[];
#endif

#define stream_data constant_bin

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

void copyFrozenModulesTo( void* destination )
{
    _frozen frozen_modules[] = {
        { (char *)"_bootlocale", (unsigned char *)&constant_bin[ 6012922 ], 1017 },
        { (char *)"_collections_abc", (unsigned char *)&constant_bin[ 6013939 ], 29610 },
        { (char *)"_compat_pickle", (unsigned char *)&constant_bin[ 6043549 ], 7577 },
        { (char *)"_compression", (unsigned char *)&constant_bin[ 6051126 ], 4422 },
        { (char *)"_weakrefset", (unsigned char *)&constant_bin[ 6055548 ], 8394 },
        { (char *)"abc", (unsigned char *)&constant_bin[ 6063942 ], 7838 },
        { (char *)"ast", (unsigned char *)&constant_bin[ 6071780 ], 12278 },
        { (char *)"base64", (unsigned char *)&constant_bin[ 6084058 ], 18142 },
        { (char *)"bz2", (unsigned char *)&constant_bin[ 6102200 ], 11757 },
        { (char *)"codecs", (unsigned char *)&constant_bin[ 6113957 ], 35276 },
        { (char *)"collections", (unsigned char *)&constant_bin[ 6149233 ], -47804 },
        { (char *)"collections.abc", (unsigned char *)&constant_bin[ 6013939 ], 29610 },
        { (char *)"copyreg", (unsigned char *)&constant_bin[ 6197037 ], 4538 },
        { (char *)"dis", (unsigned char *)&constant_bin[ 6201575 ], 14618 },
        { (char *)"encodings", (unsigned char *)&constant_bin[ 6216193 ], -3822 },
        { (char *)"encodings.aliases", (unsigned char *)&constant_bin[ 6220015 ], 7538 },
        { (char *)"encodings.ascii", (unsigned char *)&constant_bin[ 6227553 ], 1982 },
        { (char *)"encodings.base64_codec", (unsigned char *)&constant_bin[ 6229535 ], 2542 },
        { (char *)"encodings.big5", (unsigned char *)&constant_bin[ 6232077 ], 1540 },
        { (char *)"encodings.big5hkscs", (unsigned char *)&constant_bin[ 6233617 ], 1550 },
        { (char *)"encodings.bz2_codec", (unsigned char *)&constant_bin[ 6235167 ], 3452 },
        { (char *)"encodings.charmap", (unsigned char *)&constant_bin[ 6238619 ], 3064 },
        { (char *)"encodings.cp037", (unsigned char *)&constant_bin[ 6241683 ], 2519 },
        { (char *)"encodings.cp1006", (unsigned char *)&constant_bin[ 6244202 ], 2595 },
        { (char *)"encodings.cp1026", (unsigned char *)&constant_bin[ 6246797 ], 2523 },
        { (char *)"encodings.cp1125", (unsigned char *)&constant_bin[ 6249320 ], 7540 },
        { (char *)"encodings.cp1140", (unsigned char *)&constant_bin[ 6256860 ], 2509 },
        { (char *)"encodings.cp1250", (unsigned char *)&constant_bin[ 6259369 ], 2546 },
        { (char *)"encodings.cp1251", (unsigned char *)&constant_bin[ 6261915 ], 2543 },
        { (char *)"encodings.cp1252", (unsigned char *)&constant_bin[ 6264458 ], 2546 },
        { (char *)"encodings.cp1253", (unsigned char *)&constant_bin[ 6267004 ], 2559 },
        { (char *)"encodings.cp1254", (unsigned char *)&constant_bin[ 6269563 ], 2548 },
        { (char *)"encodings.cp1255", (unsigned char *)&constant_bin[ 6272111 ], 2567 },
        { (char *)"encodings.cp1256", (unsigned char *)&constant_bin[ 6274678 ], 2545 },
        { (char *)"encodings.cp1257", (unsigned char *)&constant_bin[ 6277223 ], 2553 },
        { (char *)"encodings.cp1258", (unsigned char *)&constant_bin[ 6279776 ], 2551 },
        { (char *)"encodings.cp273", (unsigned char *)&constant_bin[ 6282327 ], 2505 },
        { (char *)"encodings.cp424", (unsigned char *)&constant_bin[ 6284832 ], 2549 },
        { (char *)"encodings.cp437", (unsigned char *)&constant_bin[ 6287381 ], 7357 },
        { (char *)"encodings.cp500", (unsigned char *)&constant_bin[ 6294738 ], 2519 },
        { (char *)"encodings.cp720", (unsigned char *)&constant_bin[ 6297257 ], 2616 },
        { (char *)"encodings.cp737", (unsigned char *)&constant_bin[ 6299873 ], 7585 },
        { (char *)"encodings.cp775", (unsigned char *)&constant_bin[ 6307458 ], 7371 },
        { (char *)"encodings.cp850", (unsigned char *)&constant_bin[ 6314829 ], 7104 },
        { (char *)"encodings.cp852", (unsigned char *)&constant_bin[ 6321933 ], 7373 },
        { (char *)"encodings.cp855", (unsigned char *)&constant_bin[ 6329306 ], 7554 },
        { (char *)"encodings.cp856", (unsigned char *)&constant_bin[ 6336860 ], 2581 },
        { (char *)"encodings.cp857", (unsigned char *)&constant_bin[ 6339441 ], 7089 },
        { (char *)"encodings.cp858", (unsigned char *)&constant_bin[ 6346530 ], 7074 },
        { (char *)"encodings.cp860", (unsigned char *)&constant_bin[ 6353604 ], 7340 },
        { (char *)"encodings.cp861", (unsigned char *)&constant_bin[ 6360944 ], 7351 },
        { (char *)"encodings.cp862", (unsigned char *)&constant_bin[ 6368295 ], 7486 },
        { (char *)"encodings.cp863", (unsigned char *)&constant_bin[ 6375781 ], 7351 },
        { (char *)"encodings.cp864", (unsigned char *)&constant_bin[ 6383132 ], 7481 },
        { (char *)"encodings.cp865", (unsigned char *)&constant_bin[ 6390613 ], 7351 },
        { (char *)"encodings.cp866", (unsigned char *)&constant_bin[ 6397964 ], 7586 },
        { (char *)"encodings.cp869", (unsigned char *)&constant_bin[ 6405550 ], 7398 },
        { (char *)"encodings.cp874", (unsigned char *)&constant_bin[ 6412948 ], 2647 },
        { (char *)"encodings.cp875", (unsigned char *)&constant_bin[ 6415595 ], 2516 },
        { (char *)"encodings.cp932", (unsigned char *)&constant_bin[ 6418111 ], 1542 },
        { (char *)"encodings.cp949", (unsigned char *)&constant_bin[ 6419653 ], 1542 },
        { (char *)"encodings.cp950", (unsigned char *)&constant_bin[ 6421195 ], 1542 },
        { (char *)"encodings.euc_jis_2004", (unsigned char *)&constant_bin[ 6422737 ], 1556 },
        { (char *)"encodings.euc_jisx0213", (unsigned char *)&constant_bin[ 6424293 ], 1556 },
        { (char *)"encodings.euc_jp", (unsigned char *)&constant_bin[ 6425849 ], 1544 },
        { (char *)"encodings.euc_kr", (unsigned char *)&constant_bin[ 6427393 ], 1544 },
        { (char *)"encodings.gb18030", (unsigned char *)&constant_bin[ 6428937 ], 1546 },
        { (char *)"encodings.gb2312", (unsigned char *)&constant_bin[ 6430483 ], 1544 },
        { (char *)"encodings.gbk", (unsigned char *)&constant_bin[ 6432027 ], 1538 },
        { (char *)"encodings.hex_codec", (unsigned char *)&constant_bin[ 6433565 ], 2529 },
        { (char *)"encodings.hp_roman8", (unsigned char *)&constant_bin[ 6436094 ], 2692 },
        { (char *)"encodings.hz", (unsigned char *)&constant_bin[ 6438786 ], 1536 },
        { (char *)"encodings.idna", (unsigned char *)&constant_bin[ 6440322 ], 6432 },
        { (char *)"encodings.iso2022_jp", (unsigned char *)&constant_bin[ 6446754 ], 1557 },
        { (char *)"encodings.iso2022_jp_1", (unsigned char *)&constant_bin[ 6448311 ], 1561 },
        { (char *)"encodings.iso2022_jp_2", (unsigned char *)&constant_bin[ 6449872 ], 1561 },
        { (char *)"encodings.iso2022_jp_2004", (unsigned char *)&constant_bin[ 6451433 ], 1567 },
        { (char *)"encodings.iso2022_jp_3", (unsigned char *)&constant_bin[ 6453000 ], 1561 },
        { (char *)"encodings.iso2022_jp_ext", (unsigned char *)&constant_bin[ 6454561 ], 1565 },
        { (char *)"encodings.iso2022_kr", (unsigned char *)&constant_bin[ 6456126 ], 1557 },
        { (char *)"encodings.iso8859_1", (unsigned char *)&constant_bin[ 6457683 ], 2518 },
        { (char *)"encodings.iso8859_10", (unsigned char *)&constant_bin[ 6460201 ], 2523 },
        { (char *)"encodings.iso8859_11", (unsigned char *)&constant_bin[ 6462724 ], 2617 },
        { (char *)"encodings.iso8859_13", (unsigned char *)&constant_bin[ 6465341 ], 2526 },
        { (char *)"encodings.iso8859_14", (unsigned char *)&constant_bin[ 6467867 ], 2544 },
        { (char *)"encodings.iso8859_15", (unsigned char *)&constant_bin[ 6470411 ], 2523 },
        { (char *)"encodings.iso8859_16", (unsigned char *)&constant_bin[ 6472934 ], 2525 },
        { (char *)"encodings.iso8859_2", (unsigned char *)&constant_bin[ 6475459 ], 2518 },
        { (char *)"encodings.iso8859_3", (unsigned char *)&constant_bin[ 6477977 ], 2525 },
        { (char *)"encodings.iso8859_4", (unsigned char *)&constant_bin[ 6480502 ], 2518 },
        { (char *)"encodings.iso8859_5", (unsigned char *)&constant_bin[ 6483020 ], 2519 },
        { (char *)"encodings.iso8859_6", (unsigned char *)&constant_bin[ 6485539 ], 2563 },
        { (char *)"encodings.iso8859_7", (unsigned char *)&constant_bin[ 6488102 ], 2526 },
        { (char *)"encodings.iso8859_8", (unsigned char *)&constant_bin[ 6490628 ], 2557 },
        { (char *)"encodings.iso8859_9", (unsigned char *)&constant_bin[ 6493185 ], 2518 },
        { (char *)"encodings.johab", (unsigned char *)&constant_bin[ 6495703 ], 1542 },
        { (char *)"encodings.koi8_r", (unsigned char *)&constant_bin[ 6497245 ], 2570 },
        { (char *)"encodings.koi8_t", (unsigned char *)&constant_bin[ 6499815 ], 2481 },
        { (char *)"encodings.koi8_u", (unsigned char *)&constant_bin[ 6502296 ], 2556 },
        { (char *)"encodings.kz1048", (unsigned char *)&constant_bin[ 6504852 ], 2533 },
        { (char *)"encodings.latin_1", (unsigned char *)&constant_bin[ 6507385 ], 1994 },
        { (char *)"encodings.mac_arabic", (unsigned char *)&constant_bin[ 6509379 ], 7257 },
        { (char *)"encodings.mac_centeuro", (unsigned char *)&constant_bin[ 6516636 ], 2557 },
        { (char *)"encodings.mac_croatian", (unsigned char *)&constant_bin[ 6519193 ], 2565 },
        { (char *)"encodings.mac_cyrillic", (unsigned char *)&constant_bin[ 6521758 ], 2555 },
        { (char *)"encodings.mac_farsi", (unsigned char *)&constant_bin[ 6524313 ], 2499 },
        { (char *)"encodings.mac_greek", (unsigned char *)&constant_bin[ 6526812 ], 2539 },
        { (char *)"encodings.mac_iceland", (unsigned char *)&constant_bin[ 6529351 ], 2558 },
        { (char *)"encodings.mac_latin2", (unsigned char *)&constant_bin[ 6531909 ], 2699 },
        { (char *)"encodings.mac_roman", (unsigned char *)&constant_bin[ 6534608 ], 2556 },
        { (char *)"encodings.mac_romanian", (unsigned char *)&constant_bin[ 6537164 ], 2566 },
        { (char *)"encodings.mac_turkish", (unsigned char *)&constant_bin[ 6539730 ], 2559 },
        { (char *)"encodings.palmos", (unsigned char *)&constant_bin[ 6542289 ], 2546 },
        { (char *)"encodings.ptcp154", (unsigned char *)&constant_bin[ 6544835 ], 2640 },
        { (char *)"encodings.punycode", (unsigned char *)&constant_bin[ 6547475 ], 7067 },
        { (char *)"encodings.quopri_codec", (unsigned char *)&constant_bin[ 6554542 ], 2574 },
        { (char *)"encodings.raw_unicode_escape", (unsigned char *)&constant_bin[ 6557116 ], 1850 },
        { (char *)"encodings.rot_13", (unsigned char *)&constant_bin[ 6558966 ], 3066 },
        { (char *)"encodings.shift_jis", (unsigned char *)&constant_bin[ 6562032 ], 1550 },
        { (char *)"encodings.shift_jis_2004", (unsigned char *)&constant_bin[ 6563582 ], 1560 },
        { (char *)"encodings.shift_jisx0213", (unsigned char *)&constant_bin[ 6565142 ], 1560 },
        { (char *)"encodings.tis_620", (unsigned char *)&constant_bin[ 6566702 ], 2608 },
        { (char *)"encodings.undefined", (unsigned char *)&constant_bin[ 6569310 ], 2242 },
        { (char *)"encodings.unicode_escape", (unsigned char *)&constant_bin[ 6571552 ], 1830 },
        { (char *)"encodings.unicode_internal", (unsigned char *)&constant_bin[ 6573382 ], 1840 },
        { (char *)"encodings.utf_16", (unsigned char *)&constant_bin[ 6575222 ], 5214 },
        { (char *)"encodings.utf_16_be", (unsigned char *)&constant_bin[ 6580436 ], 1702 },
        { (char *)"encodings.utf_16_le", (unsigned char *)&constant_bin[ 6582138 ], 1702 },
        { (char *)"encodings.utf_32", (unsigned char *)&constant_bin[ 6583840 ], 5107 },
        { (char *)"encodings.utf_32_be", (unsigned char *)&constant_bin[ 6588947 ], 1595 },
        { (char *)"encodings.utf_32_le", (unsigned char *)&constant_bin[ 6590542 ], 1595 },
        { (char *)"encodings.utf_7", (unsigned char *)&constant_bin[ 6592137 ], 1623 },
        { (char *)"encodings.utf_8", (unsigned char *)&constant_bin[ 6593760 ], 1682 },
        { (char *)"encodings.utf_8_sig", (unsigned char *)&constant_bin[ 6595442 ], 4814 },
        { (char *)"encodings.uu_codec", (unsigned char *)&constant_bin[ 6600256 ], 3433 },
        { (char *)"encodings.zlib_codec", (unsigned char *)&constant_bin[ 6603689 ], 3294 },
        { (char *)"enum", (unsigned char *)&constant_bin[ 6606983 ], 16427 },
        { (char *)"functools", (unsigned char *)&constant_bin[ 6623410 ], 23595 },
        { (char *)"genericpath", (unsigned char *)&constant_bin[ 6647005 ], 3905 },
        { (char *)"heapq", (unsigned char *)&constant_bin[ 6650910 ], 15016 },
        { (char *)"importlib", (unsigned char *)&constant_bin[ 6665926 ], -3873 },
        { (char *)"importlib._bootstrap", (unsigned char *)&constant_bin[ 6669799 ], 31771 },
        { (char *)"importlib._bootstrap_external", (unsigned char *)&constant_bin[ 6701570 ], 41518 },
        { (char *)"importlib.machinery", (unsigned char *)&constant_bin[ 6743088 ], 996 },
        { (char *)"inspect", (unsigned char *)&constant_bin[ 6744084 ], 84266 },
        { (char *)"io", (unsigned char *)&constant_bin[ 6828350 ], 3431 },
        { (char *)"keyword", (unsigned char *)&constant_bin[ 6831781 ], 1913 },
        { (char *)"linecache", (unsigned char *)&constant_bin[ 6833694 ], 4050 },
        { (char *)"locale", (unsigned char *)&constant_bin[ 6837744 ], 36538 },
        { (char *)"opcode", (unsigned char *)&constant_bin[ 6874282 ], 5673 },
        { (char *)"operator", (unsigned char *)&constant_bin[ 6879955 ], 14780 },
        { (char *)"os", (unsigned char *)&constant_bin[ 6894735 ], 29835 },
        { (char *)"pickle", (unsigned char *)&constant_bin[ 6924570 ], 46781 },
        { (char *)"posixpath", (unsigned char *)&constant_bin[ 6971351 ], 11108 },
        { (char *)"quopri", (unsigned char *)&constant_bin[ 6982459 ], 6374 },
        { (char *)"re", (unsigned char *)&constant_bin[ 6988833 ], 14425 },
        { (char *)"reprlib", (unsigned char *)&constant_bin[ 7003258 ], 5902 },
        { (char *)"sre_compile", (unsigned char *)&constant_bin[ 7009160 ], 10893 },
        { (char *)"sre_constants", (unsigned char *)&constant_bin[ 7020053 ], 5914 },
        { (char *)"sre_parse", (unsigned char *)&constant_bin[ 7025967 ], 22308 },
        { (char *)"stat", (unsigned char *)&constant_bin[ 7048275 ], 4135 },
        { (char *)"stringprep", (unsigned char *)&constant_bin[ 7052410 ], 12956 },
        { (char *)"struct", (unsigned char *)&constant_bin[ 7065366 ], 320 },
        { (char *)"threading", (unsigned char *)&constant_bin[ 7065686 ], 38884 },
        { (char *)"token", (unsigned char *)&constant_bin[ 7104570 ], 3646 },
        { (char *)"tokenize", (unsigned char *)&constant_bin[ 7108216 ], 20439 },
        { (char *)"traceback", (unsigned char *)&constant_bin[ 7128655 ], 20142 },
        { (char *)"types", (unsigned char *)&constant_bin[ 7148797 ], 8713 },
        { (char *)"warnings", (unsigned char *)&constant_bin[ 7157510 ], 12910 },
        { (char *)"weakref", (unsigned char *)&constant_bin[ 7170420 ], 20222 },
        { NULL, NULL, 0 }
    };

    memcpy(
        destination,
        frozen_modules,
        ( _NUITKA_FROZEN + 1 ) * sizeof( struct _frozen )
    );
}
