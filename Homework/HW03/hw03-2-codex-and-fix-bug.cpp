//TODO: #9 Fix bug and arrange code in CODEX pattern.

#include <stdio.h>
#include <stdbool.h> // เพิ่มเพื่อใช้งาน bool ใน C

int main() {
    float a ;
    float b = 3 ; // กำหนดค่าเริ่มต้นให้ b
    bool _1 = false ; // แก้ไขเป็น false
    printf( "%d", _1 ) ;
    int i = 0;

    if ( _1 != false ) {
        printf( "ok " ) ;
    } else {
        while ( i <= 5 ) {
            printf( "not-okey- %d ", ++i ) ; // แก้ไขเป็น not-okay
        }
        
        for ( i = 3; i < 10; i += 1 ) {
            if (i % 2 == ( !_1 ? 1 : 2 ) ) {
                printf( "see see" ) ;
            } else {
                printf( "haha" ) ;
            }//if else
        }//end for
    }//end if else

    return 0 ;
}//end function

