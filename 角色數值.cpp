#include <iostream>

using namespace std;

struct Role{
	char *name;//�m�W
	int level; // ����
	int hp; // hit points ��q
	int ap; // attack power �����O
	int dp; // defence power ���m�O 
	int sp; //spirit power �믫��q 
};
void dump_role(Role&role){
	cout<<"�W��"<<role.name<<endl; 
	cout<<"����"<<role.level<<endl; 
	cout<<"��q"<<role.hp<<endl; 
	cout<<"�����O"<<role.ap<<endl; 
	cout<<"���m�O"<<role.dp<<endl; 
	cout<<"�믫��q"<<role.sp<<endl; 
}
void test_role() {
	char name[] = " ���H��";

	struct Role role;

	role.name = name;
	role.level = 100;
	role.hp = 10000;
	role.ap = 100;
	role.dp = 15;
	role.sp =105;

	dump_role(role);
}
int main(int argc, char *argv[]){
	test_role();
}
