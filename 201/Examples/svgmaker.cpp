#include<iostream>
#include<string>
#include<fstream>

using namespace std;

void printSVGHeader(ostream&,int,int,string);
void printSVGFooter(ostream&);
void printXMLHeader(ostream&);
void printRect(ostream&,int,int,int,int,string);
void printLine(ostream&,int,int,int,int,string);
void printCircle(ostream&,int,int,int,string);
void printEllipse(ostream&,int,int,int,int,string);
void printPolyLine(ostream&,string,string);

int main()
{

    ofstream ofs("artwork.svg");
    printXMLHeader(ofs);
    printSVGHeader(ofs,500,500,"http://www.w3.org/2000/svg");
    printRect(ofs,20,20,250,250,"fill:green;");
    printRect(ofs,10,10,125,125,"fill:blue;");
    printCircle(ofs,100,50,30,"stroke:green;stroke-width:3;fill:gold;");
    /*
    printRect(ofs,75,100,150,50,"fill:rgb(0,255,0);");
    printLine(ofs,0,0,300,300,"stroke:purple;stroke-width:2");
    printEllipse(ofs,200,200,50,100,"stroke:black;stroke-width:2;fill:purple;");
    printPolyLine(ofs,"10,10 40,40 20,100 120,140 10,10","fill-opacity:0;stroke:red;stroke-width:2");
    */
    printSVGFooter(ofs);
    return 0;
}

void printXMLHeader(ostream& ofs)
{
    ofs << "<?xml version=\"1.0\" standalone=\"no\" ?>\n";
    ofs << "<!DOCTYPE svg PUBLIC \"-//W3C//DTD SVG 1.1/EN\"\n";
    ofs << "\"http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd\" >\n";
}

void printSVGHeader(ostream& ofs,int width,int height,string ns)
{
    ofs << "<svg width=\"" << width <<"\" height=\"" << height << "\"\n";
    ofs << " xmlns=\""<< ns <<"\" >\n";
}

void printSVGFooter(ostream& ofs)
{
    ofs << "</svg>";
}

void printRect(ostream& ofs,int x,int y,int width,int height,string style)
{
    ofs << "<rect x=\"" << x << "\" y=\"" << y << "\" width=\"" << width; 
    ofs << "\" height=\""<< height<< "\" style=\"" << style << "\" />\n";
}

void printLine(ostream& ofs,int x1,int y1,int x2,int y2,string style)
{
    ofs << "<line x1=\"" << x1 << "\" y1=\"" << y1 << "\" x2=\"" << x2; 
    ofs << "\" y2=\""<< y2 << "\" style=\"" << style << "\" />\n";
}

void printCircle(ostream& ofs,int cx,int cy, int r, string style)
{
    ofs << "<circle cx=\"" << cx << "\" cy=\"" << cy << "\" r=\"" << r << "\"\n";
    ofs << "style=\"" << style << "\"/>\n";
}

void printEllipse(ostream& ofs,int cx,int cy, int rx,int ry, string style)
{
    ofs << "<ellipse cx=\"" << cx << "\" cy=\"" << cy << "\"\n";
    ofs << "  rx=\"" << rx << "\"\n";
    ofs << "  ry=\"" << ry << "\"\n";
    ofs << "style=\"" << style << "\"/>\n";
}

void printPolyLine(ostream& ofs,string points,string style)
{
    ofs << "<polyline points=\"" << points << "\"\n";
    ofs << "style=\"" << style << "\"/>\n";
}
