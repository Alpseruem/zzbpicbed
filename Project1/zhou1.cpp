/*#include<iostream>
#include<cmath>
using namespace std;
class triangle
{
private:
	double a, b, c;
public:
	void set(double ia, double ib, double ic);
	double area();
};
int main()
{
	triangle m;
	double ia, ib, ic;
	cin >> ia >> ib >> ic;
	m.set(ia, ib, ic);
	cout << m.area();
}
void triangle::set(double ia, double ib, double ic)
{
	a = ia; b = ib; c = ic;
}
double triangle::area()
{
	double s = (a + b + c) / 2;
	return sqrt(s * (s - a) * (s - b) * (s - c));
}*/
/*#include<iostream>
using namespace std;
class student
{private:
	char name[10];
	char ID[10];
	int score;
public:
	void input();
	void output() const;
	int compare(student b)const;
};
void sort(student* A, int n);
int main()
{
	cout << "请输入学生个数:" << endl;
	int n, i, k;
	cin >> n;
	student A[20];
	for (i = 0; i < n; i++)
	{
		A[i].input();
	}
	sort(A, n);
	for (i = 0; i < n; i++)
	{
		A[i].output();
	}
	return 0;
}
void student::input()
{
	cin >> name >> ID >> score;
}
void student::output()const
{
	cout << name << "\t" << ID << "\t" << score << endl;
}
int student::compare(student b)const
{
	return score - b.score;
}
void sort(student* A, int n)
{
	int i, k;
	for (i = 0; i < n; i++)
	{
		for (k = i; k < n; k++)
		{
			if (A[i].compare(A[k]) > 0)
			{
				swap(A[i], A[k]);
			}
		}
	}
*/
//囚犯问题的解答
/*#include<iostream>
using namespace std;
struct node
{
	char name[10];
	node* next;
};
node* add(node* head,node*tool1);
int main()
{
	int m, n;
	cin >> m >> n;
	int i;
	node* tool1, * head=nullptr;
	for (i = 1; i <= m; i++)
	{
		tool1 = new node;
		cin >> tool1->name;
		tool1->next = nullptr;
		head = add(head, tool1);
	}
	node* tool2=head;
	for (tool2 = head; tool2->next != nullptr; tool2 = tool2->next);
	tool2->next = head;
	tool1 = head;
	for (;tool1!=tool2;)
	{
		for (i = 1; i < n; i++)
		{
			tool1= tool1->next;
			tool2 = tool2->next;
		}
		node* tool3;
		tool3 = tool1->next;
		tool1 = tool3;
		tool2->next=tool1;
	}
	cout << tool2->name;
}
node* add(node* head, node* tool1)
{
	if (head == nullptr)
	{
		head = tool1;
		return head;
	}
	else
	{
		node* tool2;
		for (tool2 = head; tool2->next != nullptr; tool2 = tool2->next);
		tool2->next = tool1;
		return head;
	}
}*/
/*#include<iostream>
using namespace std;
struct node
{
	int card;
	int A;
	int B;
	int C;
	int all;
	int pai;
	int flag;
};
void sort(node stu[], int n)
{
	int i, k;
	for (i = 0; i < n; i++)
	{
		for (k = i + 1; k < n; k++)
		{
			if (stu[i].all < stu[k].all)
			{
				swap(stu[i], stu[k]);
			}
		}
	}
}
int main()
{
	node stu[100];
	int n;
	cin >> n;
	int i,k;
	for (i = 0; i < n; i++)
	{
		cin >> stu[i].card;
		cin >> stu[i].A >> stu[i].B >> stu[i].C;
		stu[i].all = stu[i].A + stu[i].B + stu[i].C;
	}
	sort(stu, n); k = 1;
	stu[0].pai = 1;
	stu[0].flag = 0;
	for (i = 1; i < n; i++)
	{
		if (stu[i].all == stu[i - 1].all)
		{
			stu[i].pai = k;
			stu[i].flag = 1;
			stu[i - 1].flag = 1;
			k++;
		}
		else
		{
			k++;
			stu[i].pai = k;
			stu[i].flag = 0;
		}
	}
	int aim;
	cin >> aim;
	for (i = 0; i < n; i++)
	{
		if (stu[i].card==aim)
		{
			if (stu[i].flag == 0)
			{
				cout << stu[i].pai;
				break;
			}
			else
			{
				cout << "shared" << " " << stu[i].pai;
				break;
			}
		}
	}
}*/
/*#include<iostream>
using namespace std;
int ads(int as[], int n);
int main()
{
	int as[20],i,k;
	for (i = 0; i < 20; i++)
	{
		cin >> as[i];
	}
	if (ads(as, 20) <= 10)
	{
		cout << ads(as, 20);
	}
	else
	{
		cout << 10;
	}
}
int ads(int as[], int n)
{
	int bh[20],i,k,m=1;
	for (i = 0; i < n; i++)
	{
		bh[i] = as[0];
	}
	for (i = 1; i < n; i++)
	{
		for (k = 0; k < n; k++)
		{
			if (bh[k] == as[i])break;
		}
		if (k == n)
		{
			bh[m] = as[i];
			m++;
		}
	}
	for (i = 1; bh[i] != as[0]; i++);
	return i;
}*/
/*#include<iostream>
using namespace std;
int main()
{
	char fangyan[50], english[50];
	int n, i, k,m;
	cin >> n;
	cin >> english;
	cin >> fangyan;
	char ads[10][500];
	char what[10][500];
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	for (i = 0; i < n; i++)
	{
		cin.getline(what[i], 500);
	}
	for (i = 0; i < n; i++)
	{
		for (k = 0; what[i][k]; k++)
		{
			if (what[i][k] == ' ')
			{
				ads[i][k] = ' ';
			}
			else
			{
				for (m = 0; fangyan[m]; m++)
				{
					if (what[i][k] == fangyan[m])break;
				}
				ads[i][k] = english[m];
			}
		}
		ads[i][k] = '\0';
	}
	for (i = 0; i < n; i++)
	{
		for (k = 0; ads[i][k]; k++)
		{
			cout << ads[i][k];
		}
		cout << endl;
	}
}
/*#include<bits/stdc++.h>
using namespace std;
struct node
{
	int fz, fm;
}fenshu[30000];
int yuefen(int a, int b)
{
	if (a == 0)
	{
		if (b == 1) return 1; else return 0;
	}
	return yuefen(b % a, a);
}
bool cmp(node a, node b)
{
	a.fz = a.fz * b.fm;
	b.fz = b.fz * a.fm;
	return a.fz < b.fz;
}
void insertsort(int l)
{
	node temp;
	int j;
	for (int i = 1; i < l; i++)
	{
		if (cmp(fenshu[i], fenshu[i - 1]))
		{
			temp = fenshu[i];
			for (j = i - 1; j >= 0 && cmp(temp, fenshu[j]); j--)
			{
				fenshu[j + 1] = fenshu[j];
			}
			fenshu[j + 1] = temp;
		}
	}
}
int main()
{
	int n;
	cin >> n;
	int step = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
			if (yuefen(i, j))
			{
				fenshu[step].fz = j;
				fenshu[step].fm = i;
				step++;
			}
	}
	insertsort(step);
	printf("0/1\n");
	for (int i = 0; i < step; i++)
		printf("%d/%d\n", fenshu[i].fz, fenshu[i].fm);
	return 0;
}*/
/*#include<iostream>
using namespace std;
struct node
{
	int fenzi;
	int fenmu;
	double xiaoshu;
};
void sort(node A[],int sum);
int main()
{
	node A[100];
	int N, i, k,sum;
	cin >> N;
	A[0].fenzi = 0; A[0].fenmu = 1;
	sum = 1;
	for (k = 2; k <= N; k++)
	{
		for (i = 1; i < k; i++)
		{
			if (i == 1)
			{
				A[sum].fenzi = i;
				A[sum].fenmu = k;
				sum++;
			}
			else
			{
				if (k % i != 0)
				{
					A[sum].fenzi = i;
					A[sum].fenmu = k;
					sum++;
				}
			}
		}
	}
	for (i = 0; i < sum; i++)
	{
		A[i].xiaoshu = ((double)A[i].fenzi) / A[i].fenmu;
	}
	sort(A, sum);
	for (i = 0; i < sum; i++)
	{
		cout << A[i].fenzi << "/" << A[i].fenmu;
		cout << endl;
	}
}
void sort(node A[],int sum)
{
	int i, k, m;
	for (i = 1; i < sum; i++)
	{
		for (k = i + 1; k < sum; k++)
		{
			if (A[k].xiaoshu < A[i].xiaoshu)
			{
				swap(A[k], A[i]);
			}
		}
	}
}*/
/*#include<iostream>
using namespace std;
int main()
{
	cout << 1 % 3;
	cout << endl;
	cout << 3 % 1 << endl;
	cout << 2 % 3 << endl;
	cout << 3 % 2 << endl;
}*/

/*#include <assert.h>
#include<iostream>
using namespace std;
struct node
{
	int val;
	int flag;
	node* pre;
	node* next;
};
node* fuweifirst(node* head, int a);
void fuweisec(node* tool2,node*head);
void moveonto(int a, int b, node* head);
void moveover(int a, int b, node* head);
void pileonto(int a, int b, node* head);
void pileover(int a, int b, node* head);
void printStruct(node* head) {
	node* tool1;
	node* tool2;
	int i = 0;
	tool1 = head;
	for (i = 0; tool1 != nullptr; i++, tool1 = tool1->next)
	{
		cout << i << ":" << " ";
		for (tool2 = tool1->pre; tool2 != nullptr; tool2 = tool2->pre)
		{
			cout << tool2->val << " ";
		}
		cout << endl;
	}
}

int main()
{
	int n, i;
	node* head, * tool1, * tool2,*p;
	cin >> n;
	head = nullptr;
	// init slots
	for (i = 0; i < n; i++)
	{
		p = new node;
		p->val = i;
		p->flag = i;
		p->pre = nullptr;
		p->next = nullptr;
		if (head == nullptr)
		{
			head = p;
		}
		else
		{
			tool1 = head;
			for (tool1; tool1->next != nullptr; tool1 = tool1->next);
			tool1->next = p;
		}
	}
	tool1 = head;
	// init box
	for (i = 0; tool1!=nullptr&&i < n; i++, tool1 = tool1->next)
	{
		p = new node;
		p->val = i;
		p->flag = i;
		p->pre = nullptr;
		p->next = tool1;
		tool1->pre = p;
	}
    // command
	string s1, s2, s3, s4, s5,s6,s7;
	int a, b;
	s1 = "move"; s2 = "onto"; s3 = "pile"; s4 = "over";
	s5 = "quit";
	while (1)
	{
		//printStruct(head);
		cin >> s6;
		if (s6.compare(s5))
		{
			cin >> a >> s7 >> b;
			if (s6.compare(s1))
			{
				if (s7.compare(s2))
				{
					pileover(a, b, head);
				}
				else
				{
					pileonto(a, b, head);
				}
			}
			else
			{
				if (s7.compare(s2))
				{
					moveover(a, b, head);
				}
				else
				{
					moveonto(a, b, head);
				}
			}
		}
		else
		{
			break;
		}
	}

	printStruct(head);
}
node* fuweifirst(node* head, int a)
{
	node* tool1,*tool2;
	tool1 = head;
	tool2 = head;
	for (tool1; tool1 != nullptr; tool1 = tool1->next)
	{
		for (tool2 = tool1->pre; tool2 != nullptr; tool2 = tool2->pre)
		{
			if (tool2->val == a)
				return tool2;
		}
	}
	return nullptr;
}

void fuweisec(node* tool2,node*head)
{
	node* tool1, * tool3, * tool4; int i;
	tool1 = tool2;
	if (tool2 == nullptr) { ; }
	else
	{
		for (tool1; tool1->pre != nullptr; tool1 = tool1->pre);
		for (tool1; tool1 != tool2;)
		{
			tool3 = head;
			tool1->pre = nullptr;
			for (i = 0; i < tool1->val; i++)
			{
				tool3 = tool3->next;
			}
			tool4 = tool1->next;
			tool1->next = tool3;
			tool3->pre = tool1;
			tool1->flag = tool1->val;
			tool1 = tool4;
		}
	}
}
void moveonto(int a, int b, node* head)
{
	node* tool1, * tool2;
	tool1 = fuweifirst(head, a);
	tool2 = fuweifirst(head, b);
	assert(tool1->val == a);
	assert(tool2->val == b);
	if ((tool1==nullptr&&tool2==nullptr)||tool1->flag == tool2->flag||a==b) { ; }
	else
	{
		fuweisec(tool1, head);
		fuweisec(tool2, head);
		node* tool3;
		tool3 = tool1->next;
		// assert(tool3 != nullptr);
		tool3->pre = nullptr;
		tool1->next = tool2;
		tool1->pre = nullptr;
		tool2->pre = tool1;
		tool1->flag = tool2->flag;
	}
}
void moveover(int a, int b, node* head)
{
	node* tool1, *tool2;
	tool1=fuweifirst(head, a);
	tool2 = fuweifirst(head, b);
	if ((tool1 == nullptr && tool2 == nullptr) || tool1->flag == tool2->flag || a == b) { ; }
	else
	{
		fuweisec(tool1, head);
		for (tool2; tool2->pre != nullptr; tool2 = tool2->pre);
		node* tool3;
		tool3 = tool1->next;
		tool3->pre = nullptr;
		tool1->next = tool2;
		tool1->pre = nullptr;
		tool2->pre = tool1;
		tool1->flag = tool2->flag;
	}
}
void pileonto(int a, int b, node* head)
{
	node* tool1, * tool2;
	tool1 = fuweifirst(head, a);
	tool2 = fuweifirst(head, b);
	if ((tool1 == nullptr && tool2 == nullptr) || tool1->flag == tool2->flag || a == b) { ; }
	else
	{
		fuweisec(tool2, head);
		node* tool3;
		tool3 = tool1->next;
		tool3->pre = nullptr;
		tool1->next = tool2;
		tool2->pre = tool1;
		for (tool1; tool1 != nullptr; tool1 = tool1->pre)
		{
			tool1->flag = tool2->flag;
		}
	}
}
void pileover(int a, int b, node* head)
{
	node* tool1, * tool2, * tool3;
	tool1 = fuweifirst(head, a);
	tool2 = fuweifirst(head, b);
	if ((tool1 == nullptr && tool2 == nullptr) || tool1->flag == tool2->flag || a == b) { ; }
	else
	{
		for (tool2; tool2->pre != nullptr; tool2 = tool2->pre);
		tool3 = tool1->next;
		tool3->pre = nullptr;
		tool1->next = tool2;
		tool2->pre = tool1;
		for (tool1; tool1 != nullptr; tool1 = tool1->pre)
		{
			tool1->flag = tool2->flag;
		}
	}
}*/
/*#include<iostream>
using namespace std;
int main()
{
	string s1,s3;
	s3 = "quit";
	while (1)
	{
		cin >> s1;
		if (s1.compare(s3))
		{
			cout << 1;
		}
		else
		{
			cout << 0;
			break;
		}
	}
}*/
/*#include<iostream>
using namespace std;
struct node
{
	int val;
	node* next;
	node* pre;
	int flag;
};
int main()
{
	int n, i;
	node* head, * tool1, * tool2, * p;
	cin >> n;
	head = nullptr;
	for (i = 0; i < n; i++)
	{
		p = new node;
		p->val = i;
		p->flag = i;
		p->pre = nullptr;
		p->next = nullptr;
		if (head == nullptr)
		{
			head = p;
		}
		else
		{
			tool1 = head;
			for (tool1; tool1->next != nullptr; tool1 = tool1->next);
			tool1 ->next= p;
		}
	}
	tool1 = head;
	for (i = 0; tool1 != nullptr && i < n; i++, tool1 = tool1->next)
	{
		p = new node;
		p->val = i;
		p->flag = i;
		p->pre = nullptr;
		p->next = tool1;
		tool1->pre = p;
	}
	tool1 = head;
	for (i = 0; tool1 != nullptr && i < n; i++, tool1 = tool1->next)
	{
		cout << i << ":" << " ";
		for (tool2 = tool1->pre; tool2 != nullptr; tool2 = tool2->pre)
		{
			cout << tool2->val << " ";
		}
		cout << endl;
	}
}*/
#include<iostream>
using namespace std;
struct node
{
	int val;
	int flag;
};
int panduan1(int m[], int n[]);
int panduan2(int m1[], int n1[], int y);
void sort(int m[]);
int main()
{
	int tree[200][2], i = 0, sum = 0, k;
	while (1)
	{
		int a, b;
		cin >> a >> b;
		if (a == -1)
		{
			tree[i][0] = a;
			tree[i][1] = b;
			i++;
			break;
		}
		else
		{
			if (a == 0 && b == 0)
			{
				sum++;
				tree[i][0] = a;
				tree[i][1] = b;
				i++;
			}
			else
			{
				tree[i][0] = a;
				tree[i][1] = b;
				i++;
			}
		}
	}
	/*cout << tree[i - 1][0] << endl;
	cout << sum << endl;
	for (i = 0; tree[i][0] != -1; i++)
	{
		cout << tree[i][0] << " " << tree[i][1];
		cout << endl;
	}*/
	int h = 0;
	for (k = 0; k < sum; k++)
	{
		int m[100], n[100],m1[100],n1[100], t = 0, p;
		for (h; tree[h][0] != 0||tree[h][1]!=0; h++, t++)
		{
			//cout << -1 << endl;
			m[t] = tree[h][0];
			n[t] = tree[h][1];
		}
		h++;
		m[t] = -1; n[t] = -1; t++;
		for (p = 0; m[p] != -1; p++)
		{
			m1[p] = m[p];
			n1[p] = n[p];
		}
		m1[p] = -1; n1[p] = -1;
		/*for (p = 0; p < t; p++)
		{
			cout << m[p] << " " << n[p] << endl;
		}*/
		int w = panduan1(m, n);
		if (w)
		{
			for (i = 0; m[i] != -1; i++);
			int y = m[i - 1];
			if (panduan2(m1, n1, y))
			{
				cout << "Case " << k + 1 << " is a tree.";
				cout << endl;
			}
			else
			{
				cout << "Case " << k + 1 << " is not a tree.";
				cout << endl;
			}
		}
		else
		{
			cout << "Case "<< k + 1 << " is not a tree.";
			cout << endl;
		}
	}


}
void sort(int m[])
{
	int i = 0, k, n;
	for (i = 0; m[i] != -1; i++)
	{
		for (k = i+1; m[k] != -1; k++)
		{
			if (m[k] < m[i])
			{
				swap(m[k], m[i]);
			}
		}
	}
	/*for (i = 0; m[i] != -1; i++)
	{
		cout << m[i] << " ";
	}
	cout << endl;*/
}
int panduan1(int m[], int n[])
{
	int i, k;
	for (i = 0; n[i] != -1; i++)
	{
		for (k = i + 1; n[k] != -1; k++)
		{
			if (n[k] == n[i])
			{
				return 0;
			}
			else
			{
				;
			}
		}
	}
	sort(m);
	for (i = 0; m[i] != -1; i++)
	{
		for (k = 0; n[k] != -1; k++)
		{
			if (n[k] == m[i])
			{
				m[i] = -2;
				break;
			}
		}
	}
	sort(m);
	for (i = 0,k=1; m[k] != -1; )
	{
		if (m[i] == m[k])
		{
			m[k] = -2;
			k++;
		}
		else
		{
			if ((k - i) == 1)
			{
				k++;
				i++;
			}
			else
			{
				i = k;
				k++;
			}
		}
	}
	sort(m);
	k = 0;
	for (i = 0; m[i] != -1; i++)
	{
		if (m[i] != -2)k++;
	}
	if (k == 1) { return 1; }
	else { return 0; }
}
int panduan2(int m1[], int n1[], int y)
{
	int i, k;
	for (i = 0; m1[i] != -1; i++)
	{
		if (m1[i] == y)
		{
			int a, b;
			a = n1[i];
			if (a == -2)
			{
				;
			}
			else
			{
				n1[i] = -2;
				panduan2(m1, n1, a);
			}
		}
	}
	int v = 0;
	for (i = 0; n1[i] != -1; i++)
	{
		if (n1[i] != -2)
		{
			v++;
		}
	}
	if (v == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
