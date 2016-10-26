#include "gmock/gmock.h"
#include "ipaddressstring.h"


TEST(TestValidIpAddressString, EmptyString) {
	IpAddressString ip{""};
	ASSERT_THAT(ip.isValidIpAddressString(), testing::Eq(false));
	
}

TEST(TestValidIpAddressString, InValidString) {
	{
		IpAddressString ip{"1.2.3"};
		ASSERT_THAT(ip.isValidIpAddressString(), testing::Eq(false));
	}
	
	{	
		IpAddressString ip{"1.g.j.k"};
		ASSERT_THAT(ip.isValidIpAddressString(), testing::Eq(false));
	}

}

TEST(TestValidIpAddressString, ValidString) {
	{
		IpAddressString ip{"1.2.3.4"};
		ASSERT_THAT(ip.isValidIpAddressString(), testing::Eq(true));
	}
	
	{	
		IpAddressString ip{"21.22.35.47"};
		ASSERT_THAT(ip.isValidIpAddressString(), testing::Eq(true));
	}

	{	
		IpAddressString ip{"111.111.222.222"};
		ASSERT_THAT(ip.isValidIpAddressString(), testing::Eq(true));
	}
}


TEST(TestValidIpAddressString, ValidStringAndOutOfRange) {
	{
		IpAddressString ip{"111.222.333.444"};
		ASSERT_THAT(ip.isValidIpAddressString(), testing::Eq(false));
	}
}
