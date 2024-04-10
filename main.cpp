// uncommenting line 3 gets rid of compile error:
// error C3688: invalid literal suffix 'sv'; literal operator or literal operator template 'operator ""sv' not found
//#include <print>
import module_that_prints;

int main()
{
    printer prnt;
    prnt.print(10);

	return 0;
}
