// SulGeomArrow2D.cpp

#include "stdafx.h"
#include "SulGeomArrow2D.h"
#include "SulGeomQuad.h"
#include "SulGeomTriangle.h"

CSulGeomArrow2D::CSulGeomArrow2D( float len, float width, float headSize ) :
CSulGeomBase()
{
	m_len = len;
	m_width = width;
	m_headSize = headSize;
}

void CSulGeomArrow2D::createDrawable()
{
	CSulGeomQuad* pQuad = new CSulGeomQuad( osg::Vec3( m_len/2.0f, 0, 0 ), m_len, m_width );
	setDrawable( pQuad->getDrawable() );
}
