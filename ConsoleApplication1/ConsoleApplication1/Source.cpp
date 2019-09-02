#include <iostream>
struct DataInfo;

DataInfo DirectedEdgeId(int nVal);
struct DataInfo {
	int			tileId;
	int     	index;
	int     	dir;
};
using namespace std;
int main()
{
	int     	index;
	cout << "tileId:" << DirectedEdgeId(159325453).tileId << endl;
	cout << "index:" <<  DirectedEdgeId(159325453).index << endl;
	cout << "dir:" <<    DirectedEdgeId(159325453).dir << endl;
	return 0;
}

#define eShift_TileId 16
#define eShift_Index 2
#define eMask_Dir 0x3
#define eMask_Index 0x3FFF
DataInfo DirectedEdgeId(int nVal)
{
	DataInfo out;
	out.tileId = nVal >> eShift_TileId;
	out.index = (nVal >> eShift_Index) & eMask_Index;
	out.dir = nVal & eMask_Dir;
	return out;
};