#include "print.h"

void kernel_main(){
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    //formatting asterisks in order to spell NUST 
   /* print_str("*        *      *       *      ********     **********");
    print_str("* *      *      *       *      *                 *");
    print_str("*  *     *      *       *      *                 *");
    print_str("*    *   *      *       *      ********          *");
    print_str("*      * *      *       *             *          *");
    print_str("*        *      *       *             *          *");
    print_str("*        *      ********       ********          *");
    */

    //putting a new line between the code formatted above since print_str does not consider it 

    print_str("*        *      *       *      ********     **********");
    print_newline();
    print_str("* *      *      *       *      *                 *");
    print_newline();
    print_str("*  *     *      *       *      *                 *");
    print_newline();
    print_str("*    *   *      *       *      ********          *");
    print_newline();
    print_str("*      * *      *       *             *          *");
    print_newline();
    print_str("*        *      *       *             *          *");
    print_newline();
    print_str("*        *      ********       ********          *");

}
