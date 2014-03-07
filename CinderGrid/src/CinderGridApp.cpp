#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"
#include "cinder/Perlin.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class CinderGridApp : public AppNative {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
    int frameCount = 0;
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
	gl::clear( Color( 0, 0, 0 ));
    
    Perlin perlin;
    for(int y = 0; y < 100; y++) {
        for(int x = 0; x < 100; x++) {
            float noiseVal = perlin.noise(x * 0.05, y * 0.15, frameCount / 50.0f);
            float r = ((0.3 + noiseVal) * (0.3 + noiseVal)) * 8.;
            float gridSpace = 10;
            gl::color(noiseVal + 0.3, 1.0 - (noiseVal * 0.5), (noiseVal + 0.8) / 2.);
            gl::drawSolidCircle( Vec2f((gridSpace * x), (gridSpace * y)) , r);
        }
    }
    
    frameCount++;
}

CINDER_APP_NATIVE( CinderGridApp, RendererGl )
