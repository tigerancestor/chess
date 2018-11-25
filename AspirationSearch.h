

#if !defined(AFX_ASPIRATIONSEARCH_H__C033F4E0_E335_11D5_AEC7_5254AB2E22C7__INCLUDED_)
#define AFX_ASPIRATIONSEARCH_H__C033F4E0_E335_11D5_AEC7_5254AB2E22C7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "FAlphaBetaEngine.h"

class CAspirationSearch : public CFAlphaBetaEngine  
{
public:
	CAspirationSearch();
	virtual ~CAspirationSearch();

void 	virtual SearchAGoodMove(BYTE position[10][9]);
};

#endif // !defined(AFX_ASPIRATIONSEARCH_H__C033F4E0_E335_11D5_AEC7_5254AB2E22C7__INCLUDED_)
