#include <sw/redis++/redis++.h>
#include <iostream>

using namespace sw::redis;
using namespace std;
int main()
{
try {
	auto redis = Redis("tcp://localhost:6379");
	redis.set("key", "val");
	auto val = redis.get("key");
	if (val) {
		std::cout << *val << std::endl;
	}
} catch (const Error &e) {

}
return 0;
}
