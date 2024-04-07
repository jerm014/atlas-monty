#include "../_main.c"
#include "../addNode.c"
#include "../addNodeAtEnd.c"
#include "../deleteNodeAtIndex.c"
#include "../free_double_pointer.c"
#include "../free_stack.c"
#include "../isNumeric.c"
#include "../monty_function.c"
#include "../montyAdd.c"
#include "../montyError.c"
#include "../montyNop.c"
#include "../montyPall.c"
#include "../montyPint.c"
#include "../montyPop.c"
#include "../montyPush.c"
#include "../montySwap.c"
#include "../tokenize.c"
#include "../montySub.c"
#include "../montyDiv.c"
#include "../montyPstr.c"
#include "../montyMod.c"
#include "../montyPchar.c"
#include "../montyMul.c"
#include "../montyRotl.c"
#include "../montyRotr.c"
#include "../montyQueue.c"
#include "../montyStack.c"
#include "../getStackLen.c"


int main(void)
{
	int argc;
	char **argv;

	argc = 2;
	argv = malloc(sizeof(char *));
	argv[0] = malloc(2);
	argv[0] = ".\0";
	argv[1] = malloc(26);
	argv[1] = "/atlas-monty/bytecode/1.m\0";
	return(_main(argc, argv));
}
