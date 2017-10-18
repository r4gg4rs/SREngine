#ifndef SR_GRAPHICS_MESH_H
#define SR_GRAPHICS_MESH_H

namespacde SR
{
	namespace Graphics
	{
		class Mesh
		{
			private:
				typedef std::vector<Vector3> Vertices;
				typedef usigned int Index;
				typedef std::vector<Index> Indices;
				
			private:
				Vertices	m_vertices;
			public:
				Mesh() { }
				~Mesh() { }
				
				void SetVertices( const Vertices& vertices)
				{
					m_vertices = vertices;
				}
				
				const Vertices& GetVertices() const
				{
					return m_vertices;
				}
		};
	}
}
#endif
