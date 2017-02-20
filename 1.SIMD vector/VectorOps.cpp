

#include <DirectXMath.h>
#include <iostream>
using namespace std;
using namespace DirectX;


ostream& operator<<(ostream& os, DirectX::FXMVECTOR &oth) {
	DirectX::XMFLOAT4 dest;
	DirectX::XMStoreFloat4(&dest, oth);

	os << "(" << dest.x << ", " << dest.y << ", " << dest.z <<  ", " << dest.w << ")";
	return os;
}
int main() {
	if (!DirectX::XMVerifyCPUSupport()) {
		std::cout << "xna math not supported" << std::endl;
	}

	XMVECTOR n = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);
	XMVECTOR u = XMVectorSet(1.0f, 2.0f, 3.0f, 0.0f);
	XMVECTOR v = XMVectorSet(-2.0f, 1.0f, -3.0f, 0.0f);
	XMVECTOR w = XMVectorSet(0.707f, 0.707f, 0.0f, 0.0f);

	XMVECTOR a = u + v;

	XMVECTOR b = u - v;

	XMVECTOR c = 10.0f*u;

	// ||u||
	XMVECTOR L = XMVector3Length(u);

	// d = u / ||u||
	XMVECTOR d = XMVector3Normalize(u);

	// s = u dot v
	XMVECTOR s = XMVector3Dot(u, v);

	// e = u x v
	XMVECTOR e = XMVector3Cross(u, v);


	cout << "u                   = " << u << endl;
	cout << "v                   = " << v << endl;
	cout << "w                   = " << w << endl;
	cout << "n                   = " << n << endl;
	cout << "a = u + v           = " << a << endl;
	cout << "b = u - v           = " << b << endl;
	cout << "c = 10 * u          = " << c << endl;
	cout << "d = u / ||u||       = " << d << endl;
	cout << "e = u x v           = " << e << endl;
	cout << "L  = ||u||          = " << L << endl;
	cout << "s = u.v             = " << s << endl;


}

