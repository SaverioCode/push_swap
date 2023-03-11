#include <stdio.h>
#include <stdlib.h>
#include "libps/push_swap.h"

int main()
{
	int	stack[] = {109, 40, -128, 196, -151, -245, -166, 19, -97, -242, -60, 123, -162, -94, 78, -73, 8, -198, -111, 134, -79, -133, 82, 155, 242, 91, -197, -249, -152, 214, -219, 176, 174, -169, -216, 211, 31, -84, 139, -48, 37, 50, 145, 186, 187, -172, -59, -156, 42, 151, -193, 154, 131, -101, 153, 36, -207, 160, 110, 135, -210, -33, 16, -231, -28, 18, 162, -233, 104, -206, 164, -205, 149, -93, -171, -180, 77, 75, -148, 108, -203, 112, 26, -7, -226, 86, 0, 76, -155, 38, -76, -204, -159, 64, 152, 202, -31, 103, -86, 126, 172, 7, 23, -201, 114, -239, -186, -120, -22, 25, 49, 184, 190, 232, 130, 163, -224, 80, 5, 241, 122, -150, -124, 30, 235, -54, 208, -200, 15, 9, -24, 48, -238, -227, 147, -102, -122, -215, 115, 248, 168, -14, -34, -98, 182, -82, 213, -116, 58, -247, -218, 189, 175, 54, -57, 118, 105, 220, 150, -74, -109, -3, -100, -36, -213, -20, 129, -72, -103, 165, 158, 173, 209, -129, 73, 194, -178, 107, 183, -61, -221, -138, -119, 204, -241, -234, 10, -41, -147, 136, -13, 45, 137, 53, 102, 127, 61, -202, 67, 100, -168, -26, 161, -114, -32, 3, 217, -223, -209, -225, -135, 222, -127, -157, -11, -45, -39, -38, 239, 207, -196, -137, -212, 113, 195, 94, -23, -175, 29, 43, 71, -188, 21, -50, -131, -85, -4, -83, -118, 198, -35, -69, 233, 68, -184, -56, -55, 146, 52, 185, -229, 228, 12, 227, -66, 132, -5, -199, -144, 244, 140, 177, -70, 56, 203, 133, 1, 66, -170, -2, -173, 116, 90, 44, 4, 167, -8, 230, 34, -230, -30, -126, 83, -107, -174, -1, -123, 142, 210, -112, 171, -91, 143, -222, 237, -134, 218, 166, 65, 141, -110, -29, 51, -90, 14, -25, -81, -132, 6, 188, 234, -136, 205, 27, 238, -44, 148, -236, 215, 17, 35, -195, -235, -163, 13, 121, -99, -194, 106, 55, -43, 89, -63, 201, -58, -182, 24, 99, 2, -71, 138, -51, 97, 46, -140, 111, 197, 119, 41, 101, -130, -17, 28, -87, -52, -158, -105, -80, -190, -145, 120, -161, 245, 206, -141, 84, 117, -181, -125, -64, 157, 178, -9, -92, -179, -208, 20, 192, -214, -47, 125, -6, -189, -46, 79, -160, 81, -246, -18, 32, -117, 221, 226, -88, 96, -191, -21, -68, -220, -139, 236, 74, 87, 156, 169, -49, 179, -243, -153, 128, -250, 212, -142, -104, -154, 11, -165, 170, -40, 223, -183, -248, -113, -78, -167, -65, 247, -96, 92, -10, 225, -37, 33, 231, -228, -42, 22, 88, -244, 246, -192, -185, -187, 219, -67, -108, -211, 69, -16, -95, 250, -217, -149, -27, -240, 47, -146, 216, -237, 124, 39, 240, 70, 200, 193, 243, 93, 98, 59, -77, -62, -115, 191, 62, 85, 57, 224, -89, -176, 63, 144, 60, -232, -143, -15, 181, -53, -12, -106, -177, 95, 249, -164, -121, -75, 72, 229, -19, 199, 180};
	int len = 500;
	int	*arr;
	int	lis_len;

	lis_len = 0;
	arr = ft_lis(stack, len, &lis_len);
	int	i = 0;
	while (i < lis_len)
	{
		printf("%d ", arr[i]);
		i++;
	}
	free(arr);
	return (0);
}