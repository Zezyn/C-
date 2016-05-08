#include <wx/wx.h>
#include <wx/event.h>
#include<iostream>

using namespace std;
const int SQUARES = 25;

class HitTest : public wxFrame
{
	public:
	    HitTest(const wxString& title);

		 void OnPaint(wxPaintEvent& event);
		 void printBoard();

   private:
       void OnLeftDown(wxMouseEvent &event);
	    wxCoord mouse_x,mouse_y;
		 wxCoord width,height;
		 int xRes,yRes;
		 char board[SQUARES][SQUARES];

   DECLARE_EVENT_TABLE()
};

BEGIN_EVENT_TABLE(HitTest, wxFrame)
  EVT_LEFT_DOWN(HitTest::OnLeftDown)
END_EVENT_TABLE()


HitTest::HitTest(const wxString& title)
       : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(280, 180))
		 {
			   this->Connect(wxEVT_PAINT, wxPaintEventHandler(HitTest::OnPaint));
				this->Centre();
		 }

void HitTest::OnPaint(wxPaintEvent& event)
{
	wxPaintDC dc(this);
	wxCoord w, h;
	dc.GetSize(&w, &h);
	width = w;
	height = h;
	xRes = w / SQUARES;
	yRes = h / SQUARES;
	/*
	w and h are now the width and the height of the window
	*/
   wxCoord x1 = xRes, y1 = 0;
	wxCoord x2 = xRes, y2 = h;
	// Draw the vertical lines
	dc.SetPen(wxPen(*wxBLACK, 1, wxSOLID));
	dc.SetBrush(wxBrush(*wxBLACK, wxSOLID));
   for (int i = 0;i<SQUARES;i++)
	{
	   dc.DrawLine(x1, y1, x2, y2);
		x1 = x1 + xRes;
		x2 = x2 + xRes;
	}
   x1 = 0, y1 = yRes;
	x2 = w, y2 = yRes;
	// Draw the horizontal lines
   for (int i = 0;i<SQUARES;i++)
	{
	   dc.DrawLine(x1, y1, x2, y2);
		y1 = y1 + yRes;
		y2 = y2 + yRes;
	}
	dc.SetPen(wxPen(*wxGREEN, 1, wxSOLID));
	dc.SetBrush(wxBrush(*wxGREEN, wxSOLID));
	for(int row = 0;row < SQUARES;row++)
		for(int col=0;col < SQUARES;col++)
		{
			if(board[row][col] == 'x')
				//dc.DrawRectangle(col*xRes, row*yRes, xRes * (col+1), yRes *(row+1));
				dc.DrawRectangle(col*xRes, row*yRes, xRes, yRes);
		}

	cout << "Painting" << endl;
}


void HitTest::OnLeftDown(wxMouseEvent& event)
{
//	cout << "Clicked the Left Mouse Button" << endl;
   wxPoint pos = event.GetPosition();
   int row = pos.y/yRes;
   int col = pos.x/xRes;
	board[row][col] = 'x';
	Refresh();
	
}

void HitTest::printBoard()
{
	for(int row=0;row<SQUARES;row++)
	{
		for(int col=0;col < SQUARES;col++)
			cout << board[row][col] << " ";
      cout << endl;
	}
}


class MyApp : public wxApp
{
	  public:
	      virtual bool OnInit();
};


IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{

	    HitTest *line = new HitTest(wxT("HitTest"));
		     line->Show(true);

			      return true;
}

