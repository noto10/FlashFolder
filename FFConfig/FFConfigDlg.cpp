/* This file is part of FlashFolder. 
 * Copyright (C) 2007 zett42 ( zett42 at users.sourceforge.net ) 
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */
#include "stdafx.h"
#include "FFConfig.h"
#include "FFConfigDlg.h"
#include "ExcludesDlg.h"

using namespace std;
using namespace TreePropSheet;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//-----------------------------------------------------------------------------------------------

CFFConfigDlg::CFFConfigDlg(CWnd* pParent /*=NULL*/)
	: CTreePropSheet( _T("FlashFolder Options"), pParent)
{
	SetTreeWidth( 125 );
	
	SetTreeViewMode( TRUE, TRUE, FALSE );
	AddPage( &m_pageGeneric );
	AddPage( &m_pageCommonFileDlg );
	AddPage( &m_pageCommonDirDlg );
	AddPage( &m_pageCommonOpenWithDlg );
	AddPage( &m_pageMsoFileDlg );

	SetEmptyPageText( _T("Please select a sub-page.") );
}

//-----------------------------------------------------------------------------------------------

void CFFConfigDlg::DoDataExchange(CDataExchange* pDX)
{
	CTreePropSheet::DoDataExchange(pDX);
}

//-----------------------------------------------------------------------------------------------

BEGIN_MESSAGE_MAP(CFFConfigDlg, CTreePropSheet)
END_MESSAGE_MAP()

//-----------------------------------------------------------------------------------------------

BOOL CFFConfigDlg::OnInitDialog()
{
	CTreePropSheet::OnInitDialog();
	return TRUE;  // return TRUE  unless you set the focus to a control
}
