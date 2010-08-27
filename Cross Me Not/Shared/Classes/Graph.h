#import <Foundation/Foundation.h>
#define MAX_VERTEX_COUNT 25
#define MAX_EDGE_COUNT 100
typedef struct {
	int vert1;
	int vert2;
} Edge;


@interface Graph : NSObject {
	@public CGPoint vertices[MAX_VERTEX_COUNT];
	@public Edge edges[MAX_EDGE_COUNT];
	@public int vertexCount;
	@public int edgeCount;
	@public int selectedVertex;
	@public int connectedVertices[MAX_VERTEX_COUNT];
}

-(int)checkGraphForIntersections;
@end