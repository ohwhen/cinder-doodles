#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class CinderGridApp : public AppNative {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void CinderGridApp::setup()
{
}

void CinderGridApp::mouseDown( MouseEvent event )
{
}

void CinderGridApp::update()
{
}

void CinderGridApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_NATIVE( CinderGridApp, RendererGl )
