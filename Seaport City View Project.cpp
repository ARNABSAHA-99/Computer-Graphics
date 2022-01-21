#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <math.h>
#include<cstring>
using namespace std;
char text1[] = "MAERSK LINE";
char text2[] = "COSCO";
char text3[] = "UNIFEEDER";
char text4[] = "AMERICAN PRESIDENT LINES";
float move_ship_container =0.0f;
float move_airplane =0.0f;
float move_left_car =0.0f;
float move_left_car_1 =0.0f;


float move_right_car =0.0f;
float move_right_car_1 =0.0f;
float move_cloud =0.0f;

float move_wave =0.0f;
float move_boat =0.0f;
float move_boat_1 =0.0f;
float move_speed_boat =0.0f;
float angle_1 = 0.0f;
float angle_2 = 0.0f;
float right_angle_1 = 0.0f;
float right_angle_2 = 0.0f;


//DAY START

void water() //id1
{
    //water
    glColor3ub(0,191,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(0.0f,-200.0f);
glVertex2f(200.0f,-200.0f);
glVertex2f(200.0f,-35.0f);
glVertex2f(0.0f,-35.0f);
glEnd();

//beach
 glColor3ub(245,222,179); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(0.0f,-35.0f);
glVertex2f(200.0f,-35.0f);
glVertex2f(200.0f,25.0f);
glVertex2f(0.0f,25.0f);
glEnd();

}

void beach_bench() //id2
{
    //Bench_1
    //back rest
   glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(15.0f,6.0f);
glVertex2f(20.0f,6.0f);
glVertex2f(20.0f,20.0f);
glVertex2f(15.0f,20.0f);
glEnd();

//seat
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(15.0f,6.0f);
glVertex2f(13.0f,-8.0f);
glVertex2f(18.0f,-8.0f);
glVertex2f(20.0f,6.0f);
glEnd();

//left leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(14.0f,-8.0f);
glVertex2f(14.0f,-15.0f);
glEnd();

//Right leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(17.5f,-8.0f);
glVertex2f(17.5f,-15.0f);
glEnd();

//back Right leg
glColor3ub	(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(19.5f,6.0f);
glVertex2f(19.5f,-2.0f);
glEnd();


//Bench_2
  //back rest
   glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(25.0f,6.0f);
glVertex2f(30.0f,6.0f);
glVertex2f(30.0f,20.0f);
glVertex2f(25.0f,20.0f);
glEnd();

//seat
glColor3ub	(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(25.0f,6.0f);
glVertex2f(23.0f,-8.0f);
glVertex2f(28.0f,-8.0f);
glVertex2f(30.0f,6.0f);
glEnd();

//left leg
glColor3ub	(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(24.0f,-8.0f);
glVertex2f(24.0f,-15.0f);
glEnd();

//Right leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(27.5f,-8.0f);
glVertex2f(27.5f,-15.0f);
glEnd();

//back Right leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(29.5f,6.0f);
glVertex2f(29.5f,-2.0f);
glEnd();

//Bench_3
//back rest
   glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(65.0f,6.0f);
glVertex2f(70.0f,6.0f);
glVertex2f(70.0f,20.0f);
glVertex2f(65.0f,20.0f);
glEnd();

//seat
glColor3ub	(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(65.0f,6.0f);
glVertex2f(63.0f,-8.0f);
glVertex2f(68.0f,-8.0f);
glVertex2f(70.0f,6.0f);
glEnd();

//left leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(64.0f,-8.0f);
glVertex2f(64.0f,-15.0f);
glEnd();

//Right leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(67.5f,-8.0f);
glVertex2f(67.5f,-15.0f);
glEnd();

//back Right leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(69.5f,6.0f);
glVertex2f(69.5f,-2.0f);
glEnd();

//Bench_4
//back rest
   glColor3ub	(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(75.0f,6.0f);
glVertex2f(80.0f,6.0f);
glVertex2f(80.0f,20.0f);
glVertex2f(75.0f,20.0f);
glEnd();

//seat
glColor3ub	(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(75.0f,6.0f);
glVertex2f(73.0f,-8.0f);
glVertex2f(78.0f,-8.0f);
glVertex2f(80.0f,6.0f);
glEnd();

//left leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(74.0f,-8.0f);
glVertex2f(74.0f,-15.0f);
glEnd();

//Right leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(77.5f,-8.0f);
glVertex2f(77.5f,-15.0f);
glEnd();

//back Right leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(79.5f,6.0f);
glVertex2f(79.5f,-2.0f);
glEnd();

//Bench_5
//back rest
   glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(115.0f,6.0f);
glVertex2f(120.0f,6.0f);
glVertex2f(120.0f,20.0f);
glVertex2f(115.0f,20.0f);
glEnd();

//seat
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(115.0f,6.0f);
glVertex2f(113.0f,-8.0f);
glVertex2f(118.0f,-8.0f);
glVertex2f(120.0f,6.0f);
glEnd();

//left leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(114.0f,-8.0f);
glVertex2f(114.0f,-15.0f);
glEnd();

//Right leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(117.5f,-8.0f);
glVertex2f(117.5f,-15.0f);
glEnd();

//back Right leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(119.5f,6.0f);
glVertex2f(119.5f,-2.0f);
glEnd();

//Bench_6
//back rest
   glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(125.0f,6.0f);
glVertex2f(130.0f,6.0f);
glVertex2f(130.0f,20.0f);
glVertex2f(125.0f,20.0f);
glEnd();

//seat
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(125.0f,6.0f);
glVertex2f(123.0f,-8.0f);
glVertex2f(128.0f,-8.0f);
glVertex2f(130.0f,6.0f);
glEnd();

//left leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(124.0f,-8.0f);
glVertex2f(124.0f,-15.0f);
glEnd();

//Right leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(127.5f,-8.0f);
glVertex2f(127.5f,-15.0f);
glEnd();

//back Right leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(129.5f,6.0f);
glVertex2f(129.5f,-2.0f);
glEnd();

//Bench_7
//back rest
   glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(165.0f,6.0f);
glVertex2f(170.0f,6.0f);
glVertex2f(170.0f,20.0f);
glVertex2f(165.0f,20.0f);
glEnd();

//seat
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(165.0f,6.0f);
glVertex2f(163.0f,-8.0f);
glVertex2f(168.0f,-8.0f);
glVertex2f(170.0f,6.0f);
glEnd();

//left leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(164.0f,-8.0f);
glVertex2f(164.0f,-15.0f);
glEnd();

//Right leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(167.5f,-8.0f);
glVertex2f(167.5f,-15.0f);
glEnd();

//back Right leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(169.5f,6.0f);
glVertex2f(169.5f,-2.0f);
glEnd();

//Bench_8
//back rest
   glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(175.0f,6.0f);
glVertex2f(180.0f,6.0f);
glVertex2f(180.0f,20.0f);
glVertex2f(175.0f,20.0f);
glEnd();

//seat
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(175.0f,6.0f);
glVertex2f(173.0f,-8.0f);
glVertex2f(178.0f,-8.0f);
glVertex2f(180.0f,6.0f);
glEnd();

//left leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(174.0f,-8.0f);
glVertex2f(174.0f,-15.0f);
glEnd();

//Right leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(177.5f,-8.0f);
glVertex2f(177.5f,-15.0f);
glEnd();

//back Right leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(179.5f,6.0f);
glVertex2f(179.5f,-2.0f);
glEnd();
}

void umbrella() //id3
{
    //from left first umbrella
       glColor3ub(0,0,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(22.0f,-15.0f);
glVertex2f(22.0f,35.0f);
glEnd();

//left
       glColor3ub(124,252,0); // Clear the color buffer (background)
glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
glVertex2f(12.0f,26.0f);
glVertex2f(22.0f,35.0f);
glVertex2f(22.0f,50.0f);
glEnd();

//right
       glColor3ub(124,252,0); // Clear the color buffer (background)
glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
glVertex2f(32.0f,26.0f);
glVertex2f(22.0f,35.0f);
glVertex2f(22.0f,50.0f);
glEnd();


//from left second umbrella
       glColor3ub(0,0,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(72.0f,-15.0f);
glVertex2f(72.0f,35.0f);
glEnd();

//left
       glColor3ub(124,252,0); // Clear the color buffer (background)
glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
glVertex2f(62.0f,26.0f);
glVertex2f(72.0f,35.0f);
glVertex2f(72.0f,50.0f);
glEnd();

//right
       glColor3ub(124,252,0); // Clear the color buffer (background)
glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
glVertex2f(82.0f,26.0f);
glVertex2f(72.0f,35.0f);
glVertex2f(72.0f,50.0f);
glEnd();

//from left third umbrella
       glColor3ub(0,0,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(122.0f,-15.0f);
glVertex2f(122.0f,35.0f);
glEnd();

//left
       glColor3ub(124,252,0); // Clear the color buffer (background)
glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
glVertex2f(112.0f,26.0f);
glVertex2f(122.0f,35.0f);
glVertex2f(122.0f,50.0f);
glEnd();

//right
       glColor3ub(124,252,0); // Clear the color buffer (background)
glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
glVertex2f(132.0f,26.0f);
glVertex2f(122.0f,35.0f);
glVertex2f(122.0f,50.0f);
glEnd();

//from left fourth umbrella
       glColor3ub(0,0,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(172.0f,-15.0f);
glVertex2f(172.0f,35.0f);
glEnd();

//left
       glColor3ub(124,252,0); // Clear the color buffer (background)
glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
glVertex2f(162.0f,26.0f);
glVertex2f(172.0f,35.0f);
glVertex2f(172.0f,50.0f);
glEnd();

//right
       glColor3ub(124,252,0); // Clear the color buffer (background)
glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
glVertex2f(182.0f,26.0f);
glVertex2f(172.0f,35.0f);
glVertex2f(172.0f,50.0f);
glEnd();

}

void wave()  //id4
{
     glColor3ub(190,230,250); // Clear the color buffer (background)
            glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f,move_wave, 0.0f);//for move
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(-200.0f,-195.0f);
glVertex2f(300.0f,-195.0f);
glVertex2f(20.0f,-190.0f);
glVertex2f(20.0f,-190.0f);
glEnd();

 glColor3ub(190,230,250); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(-160.0f,-195.0f);
glVertex2f(400.0f,-195.0f);
glVertex2f(20.0f,-190.0f);
glVertex2f(20.0f,-190.0f);
glEnd();


     glColor3ub(190,230,250); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(-100.0f,-170.0f);
glVertex2f(400.0f,-170.0f);
glVertex2f(200.0f,-165.0f);
glVertex2f(160.0f,-165.0f);
glEnd();

     glColor3ub(190,230,250); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(-160.0f,-150.0f);
glVertex2f(240.0f,-150.0f);
glVertex2f(100.0f,-145.0f);
glVertex2f(100.0f,-145.0f);
glEnd();

     glColor3ub(190,230,250); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(-120.0f,-130.0f);
glVertex2f(400.0f,-130.0f);
glVertex2f(100.0f,-125.0f);
glVertex2f(100.0f,-125.0f);
glEnd();


     glColor3ub(190,230,250); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(-180.0f,-120.0f);
glVertex2f(300.0f,-120.0f);
glVertex2f(144.0f,-115.0f);
glVertex2f(130.0f,-115.0f);
glEnd();

     glColor3ub(190,230,250); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(-50.0f,-100.0f);
glVertex2f(350.0f,-100.0f);
glVertex2f(183.0f,-95.0f);
glVertex2f(140.0f,-95.0f);
glEnd();

    glColor3ub(190,230,250); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(-150.0f,-100.0f);
glVertex2f(500.0f,-100.0f);
glVertex2f(60.0f,-95.0f);
glVertex2f(80.0f,-95.0f);
glEnd();

     glColor3ub(190,230,250); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(-166.0f,-80.0f);
glVertex2f(360.0f,-80.0f);
glVertex2f(50.0f,-75.0f);
glVertex2f(40.0f,-75.0f);
glEnd();

    glColor3ub(190,230,250); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(-178.0f,-60.0f);
glVertex2f(380.0f,-60.0f);
glVertex2f(50.0f,-55.0f);
glVertex2f(40.0f,-55.0f);
glEnd();

    glColor3ub(190,230,250); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(-190.0f,-50.0f);
glVertex2f(350.0f,-50.0f);
glVertex2f(48.0f,-45.0f);
glVertex2f(67.0f,-45.0f);
glEnd();
glPopMatrix();
}
void road()  //id5
{

//main structure
glColor3ub(128,128,128); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(0.0f,25.0f);
glVertex2f(200.0f,25.0f);
glVertex2f(200.0f,80.0f);
glVertex2f(0.0f,80.0f);
glEnd();

//road slide lines
glLineWidth(3.0f);
glColor3ub(255,255,255); // Clear the color buffer (background)

glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(0.0f,75.0f);
glVertex2f(200.0f,75.0f);
glVertex2f(200.0f,30.0f);
glVertex2f(0.0f,30.0f);
glEnd();

//middle dot lines
glLineWidth(3.0f);
glColor3ub(255,255,255); // Clear the color buffer (background)

glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(5.0f,52.5f);
glVertex2f(10.0f,52.5f);
glVertex2f(15.0f,52.5f);
glVertex2f(20.0f,52.5f);
glVertex2f(25.0f,52.5f);
glVertex2f(30.0f,52.5f);
glVertex2f(35.0f,52.5f);
glVertex2f(40.0f,52.5f);
glVertex2f(45.0f,52.5f);
glVertex2f(50.0f,52.5f);
glVertex2f(55.0f,52.5f);
glVertex2f(60.0f,52.5f);
glVertex2f(65.0f,52.5f);
glVertex2f(70.0f,52.5f);
glVertex2f(75.0f,52.5f);
glVertex2f(80.0f,52.5f);
glVertex2f(85.0f,52.5f);
glVertex2f(90.0f,52.5f);
glVertex2f(95.0f,52.5f);
glVertex2f(100.0f,52.5f);

glVertex2f(105.0f,52.5f);
glVertex2f(110.0f,52.5f);
glVertex2f(115.0f,52.5f);
glVertex2f(120.0f,52.5f);
glVertex2f(125.0f,52.5f);
glVertex2f(130.0f,52.5f);
glVertex2f(135.0f,52.5f);
glVertex2f(140.0f,52.5f);
glVertex2f(145.0f,52.5f);
glVertex2f(150.0f,52.5f);
glVertex2f(155.0f,52.5f);
glVertex2f(160.0f,52.5f);
glVertex2f(165.0f,52.5f);
glVertex2f(170.0f,52.5f);
glVertex2f(175.0f,52.5f);
glVertex2f(180.0f,52.5f);
glVertex2f(185.0f,52.5f);
glVertex2f(190.0f,52.5f);
glVertex2f(195.0f,52.5f);
glVertex2f(200.0f,52.5f);
glEnd();

}
void sky()  //id6
{
 //glColor3ub(34.0f,263.0f,223.0f); // Clear the color buffer (background)
 glColor3ub(135,240,250);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(0.0f,80.0f);
glVertex2f(200.0f,80.0f);
glVertex2f(200.0f,400.0f);
glVertex2f(0.0f,400.0f);
glEnd();

}

void bench()  //id7
{

    //left side 1st bench
    //upper part
    glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(6.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin

glVertex2f(40.0f,92.0f);
glVertex2f(48.0f,92.0f);
glEnd();

    //left leg
    glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(4.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin

glVertex2f(41.0f,80.0f);
glVertex2f(41.0f,92.0f);
glEnd();
    //right leg
    glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(4.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin

glVertex2f(47.0f,80.0f);
glVertex2f(47.0f,92.0f);
glEnd();


    //left side 2nd bench
    //upper part
    glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(6.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin

glVertex2f(50.0f,92.0f);
glVertex2f(58.0f,92.0f);
glEnd();

    //left leg
    glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(4.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin

glVertex2f(51.0f,80.0f);
glVertex2f(51.0f,92.0f);
glEnd();
    //right leg
    glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(4.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin

glVertex2f(57.0f,80.0f);
glVertex2f(57.0f,92.0f);
glEnd();


//right side 1st bench
    //upper part
    glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(6.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin

glVertex2f(172.0f,92.0f);
glVertex2f(180.0f,92.0f);
glEnd();

    //left leg
    glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(4.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin

glVertex2f(173.0f,80.0f);
glVertex2f(173.0f,92.0f);
glEnd();
    //right leg
    glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(4.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin

glVertex2f(179.0f,80.0f);
glVertex2f(179.0f,92.0f);
glEnd();
 //right side 2nd bench
    //upper part
    glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(6.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin

glVertex2f(182.0f,92.0f);
glVertex2f(190.0f,92.0f);
glEnd();

    //left leg
    glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(4.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin

glVertex2f(183.0f,80.0f);
glVertex2f(183.0f,92.0f);
glEnd();
    //right leg
    glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(4.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin

glVertex2f(189.0f,80.0f);
glVertex2f(189.0f,92.0f);
glEnd();
}
void lamppost()  //id8
{
    //left side lamppost
    //pillar
   glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(6.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(62.0f,80.0f);
glVertex2f(62.0f,162.5f);
glEnd();

    //light holder
   glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(6.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(62.0f,160.0f);
glVertex2f(54.0f,160.0f);
glEnd();

    //light
   glColor3ub(255,255,255); // Clear the color buffer (background)
    glLineWidth(7.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(54.0f,158.0f);
glVertex2f(57.0f,158.0f);
glEnd();

 //right side lamppost
    //pillar
   glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(6.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(168.0f,80.0f);
glVertex2f(168.0f,162.5f);
glEnd();

    //light holder
   glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(6.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(168.0f,160.0f);
glVertex2f(176.0f,160.0f);
glEnd();

    //light
   glColor3ub(255,255,255); // Clear the color buffer (background)
    glLineWidth(7.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(176.0f,158.0f);
glVertex2f(173.0f,158.0f);
glEnd();
}
void left_car()  //id9
{

    //left first car
    //middle body
 glColor3ub(137,1,255); // Clear the color buffer (background)
 glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_left_car, 0.0f, 0.0f);//for move
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(5.0f,62.0f);
glVertex2f(23.0f,62.0f);
glVertex2f(23.0f,79.0f);
glVertex2f(5.0f,79.0f);
glEnd();

   //upper body
 glColor3ub(245,245,245); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(6.0f,79.0f);
glVertex2f(20.0f,79.0f);
glVertex2f(17.0f,97.0f);
glVertex2f(8.0f,97.0f);
glEnd();

//RIGHT 2D view
glColor3ub(138,43,226); // Clear the color buffer (background)
glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
glVertex2f(20.0f,79.0f);
glVertex2f(23.0f,79.0f);
glVertex2f(19.0f,84.0f);
glEnd();

   //car glass left
 glColor3ub(0,0,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(7.0f,79.0f);
glVertex2f(12.5f,79.0f);
glVertex2f(12.5f,93.5f);
glVertex2f(8.5f,93.5f);
glEnd();

//car glass Right

glColor3ub(0,0,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(13.0f,79.0f);
glVertex2f(19.0f,79.0f);
glVertex2f(17.0f,93.5f);
glVertex2f(13.0f,93.5f);
glEnd();

//left back light
glColor3ub(255,0,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(5.0f,70.0f);
glVertex2f(6.0f,70.0f);
glVertex2f(6.0f,79.0f);
glVertex2f(5.0f,79.0f);
glEnd();

//rear wheel
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.7f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+9.3,y+62 );
        }

	glEnd();

	//front wheel
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.7f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+17,y+62 );
        }

	glEnd();
	glPopMatrix();

}

void left_car_1()  //id44
{

    //left first car
    //middle body
 glColor3ub(167,228,0); // Clear the color buffer (background)
 glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_left_car_1, 0.0f, 0.0f);//for move
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(105.0f,62.0f);
glVertex2f(123.0f,62.0f);
glVertex2f(123.0f,79.0f);
glVertex2f(105.0f,79.0f);
glEnd();

   //upper body
 glColor3ub(245,245,245); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(106.0f,79.0f);
glVertex2f(120.0f,79.0f);
glVertex2f(117.0f,97.0f);
glVertex2f(108.0f,97.0f);
glEnd();

//RIGHT 2D view
glColor3ub(167,228,0); // Clear the color buffer (background)
glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
glVertex2f(120.0f,79.0f);
glVertex2f(123.0f,79.0f);
glVertex2f(119.0f,84.0f);
glEnd();

   //car glass left
 glColor3ub(0,0,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(107.0f,79.0f);
glVertex2f(112.5f,79.0f);
glVertex2f(112.5f,93.5f);
glVertex2f(108.5f,93.5f);
glEnd();

//car glass Right

glColor3ub(0,0,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(113.0f,79.0f);
glVertex2f(119.0f,79.0f);
glVertex2f(117.0f,93.5f);
glVertex2f(113.0f,93.5f);
glEnd();

//left back light
glColor3ub(255,0,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(105.0f,70.0f);
glVertex2f(106.0f,70.0f);
glVertex2f(106.0f,79.0f);
glVertex2f(105.0f,79.0f);
glEnd();

//rear wheel
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.7f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+109.3,y+62 );
        }

	glEnd();

	//front wheel
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.7f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+117,y+62 );
        }

	glEnd();
	glPopMatrix();

}



void right_car()  //id10
{

    //right first car
    //middle body
 glColor3ub(6,47,255); // Clear the color buffer (background)
  glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_right_car, 0.0f, 0.0f);//for move
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(176.5f,39.0f);
glVertex2f(195.0f,39.0f);
glVertex2f(195.0f,58.0f);
glVertex2f(176.5f,58.0f);
glEnd();


//Left 2d View
glColor3ub(6,47,255); // Clear the color buffer (background)
glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
glVertex2f(176.5f,58.0f);
glVertex2f(180.0f,58.0f);
glVertex2f(183.0f,62.5f);
glEnd();

 //upper body
 glColor3ub(245,245,245); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(180.0f,58.0f);
glVertex2f(194.0f,58.0f);
glVertex2f(192.0f,78.0f);
glVertex2f(182.0f,78.0f);
glEnd();

   //car glass left
 glColor3ub(0,0,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(181.0f,57.0f);
glVertex2f(186.5f,57.0f);
glVertex2f(186.5f,74.0f);
glVertex2f(182.5f,74.0f);
glEnd();

 //car glass Right
 glColor3ub(0,0,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(187.0f,57.0f);
glVertex2f(193.0f,57.0f);
glVertex2f(191.5f,74.0f);
glVertex2f(187.0f,74.0f);
glEnd();

//Right back light
glColor3ub(255,0,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(194.0f,48.0f);
glVertex2f(195.0f,48.0f);
glVertex2f(195.0f,57.0f);
glVertex2f(194.0f,57.0f);
glEnd();

//front wheel
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.7f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+182.5,y+39 );
        }

	glEnd();

	//rear wheel
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.6f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+190.5,y+39 );
        }

	glEnd();
	glPopMatrix();

}

void right_car_1()  //id45
{

    //right first car
    //middle body
 glColor3ub(242,126,24); // Clear the color buffer (background)
  glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_right_car_1, 0.0f, 0.0f);//for move
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(76.5f,39.0f);
glVertex2f(95.0f,39.0f);
glVertex2f(95.0f,58.0f);
glVertex2f(76.5f,58.0f);
glEnd();


//Left 2d View
glColor3ub(242,126,24); // Clear the color buffer (background)
glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
glVertex2f(76.5f,58.0f);
glVertex2f(80.0f,58.0f);
glVertex2f(83.0f,62.5f);
glEnd();

 //upper body
 glColor3ub(245,245,245); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(80.0f,58.0f);
glVertex2f(94.0f,58.0f);
glVertex2f(92.0f,78.0f);
glVertex2f(82.0f,78.0f);
glEnd();

   //car glass left
 glColor3ub(0,0,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(81.0f,57.0f);
glVertex2f(86.5f,57.0f);
glVertex2f(86.5f,74.0f);
glVertex2f(82.5f,74.0f);
glEnd();

 //car glass Right
 glColor3ub(0,0,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(87.0f,57.0f);
glVertex2f(93.0f,57.0f);
glVertex2f(91.5f,74.0f);
glVertex2f(87.0f,74.0f);
glEnd();

//Right back light
glColor3ub(255,0,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(94.0f,48.0f);
glVertex2f(95.0f,48.0f);
glVertex2f(95.0f,57.0f);
glVertex2f(94.0f,57.0f);
glEnd();

//front wheel
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.7f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+82.5,y+39 );
        }

	glEnd();

	//rear wheel
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.6f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+90.5,y+39 );
        }

	glEnd();
	glPopMatrix();

}

void tree()  //id11
{
    //right side tree
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(154,205,50);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=10.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+160,y+85 );
        }

	glEnd();

		 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(154,205,50);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=13.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+182,y+103.5 );
        }

	glEnd();

		 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(154,205,50);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=15.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+170,y+85 );
        }

	glEnd();

	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(154,205,50);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=12.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+195,y+85 );
        }
	glEnd();

	//left side tree
	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(154,205,50);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=12.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+70,y+85 );
        }
	glEnd();

		 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(154,205,50);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=15.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+60,y+102 );
        }
	glEnd();


	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(154,205,50);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=15.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+46,y+122 );
        }
	glEnd();

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(154,205,50);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=15.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+40,y+95 );
        }
	glEnd();

	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(154,205,50);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=20.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+55,y+85 );
        }
	glEnd();

	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(154,205,50);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=15.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+45,y+85 );
        }
	glEnd();

		 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(154,205,50);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=15.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+35,y+85 );
        }
	glEnd();


		 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(154,205,50);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=15.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+25,y+85 );
        }
	glEnd();

		 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(154,205,50);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=18.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+25,y+100 );
        }
	glEnd();

			 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(154,205,50);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=15.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+15,y+85 );
        }
	glEnd();

				 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(154,205,50);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=15.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+5,y+85 );
        }
	glEnd();


}



void building_1()  //id12
{
   glColor3ub(0,102,102); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(80.0f,80.0f);
glVertex2f(115.0f,80.0f);
glVertex2f(115.0f,330.0f);
glVertex2f(80.0f,330.0f);
glEnd();

 glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,80.0f);
glVertex2f(115.0f,80.0f);
glVertex2f(115.0f,95.0f);
glVertex2f(78.0f,95.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,100.0f);
glVertex2f(115.0f,100.0f);
glVertex2f(115.0f,108.0f);
glVertex2f(78.0f,108.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,113.0f);
glVertex2f(115.0f,113.0f);
glVertex2f(115.0f,121.0f);
glVertex2f(78.0f,121.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,126.0f);
glVertex2f(115.0f,126.0f);
glVertex2f(115.0f,134.0f);
glVertex2f(78.0f,134.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,139.0f);
glVertex2f(115.0f,139.0f);
glVertex2f(115.0f,147.0f);
glVertex2f(78.0f,147.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,152.0f);
glVertex2f(115.0f,152.0f);
glVertex2f(115.0f,160.0f);
glVertex2f(78.0f,160.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,165.0f);
glVertex2f(115.0f,165.0f);
glVertex2f(115.0f,173.0f);
glVertex2f(78.0f,173.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,178.0f);
glVertex2f(115.0f,178.0f);
glVertex2f(115.0f,186.0f);
glVertex2f(78.0f,186.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,191.0f);
glVertex2f(115.0f,191.0f);
glVertex2f(115.0f,199.0f);
glVertex2f(78.0f,199.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,204.0f);
glVertex2f(115.0f,204.0f);
glVertex2f(115.0f,212.0f);
glVertex2f(78.0f,212.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,217.0f);
glVertex2f(115.0f,217.0f);
glVertex2f(115.0f,225.0f);
glVertex2f(78.0f,225.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,230.0f);
glVertex2f(115.0f,230.0f);
glVertex2f(115.0f,238.0f);
glVertex2f(78.0f,238.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,243.0f);
glVertex2f(115.0f,243.0f);
glVertex2f(115.0f,251.0f);
glVertex2f(78.0f,251.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,256.0f);
glVertex2f(115.0f,256.0f);
glVertex2f(115.0f,264.0f);
glVertex2f(78.0f,264.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,269.0f);
glVertex2f(115.0f,269.0f);
glVertex2f(115.0f,277.0f);
glVertex2f(78.0f,277.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,282.0f);
glVertex2f(115.0f,282.0f);
glVertex2f(115.0f,290.0f);
glVertex2f(78.0f,290.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,295.0f);
glVertex2f(115.0f,295.0f);
glVertex2f(115.0f,303.0f);
glVertex2f(78.0f,303.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,308.0f);
glVertex2f(115.0f,308.0f);
glVertex2f(115.0f,316.0f);
glVertex2f(78.0f,316.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,321.0f);
glVertex2f(115.0f,321.0f);
glVertex2f(115.0f,335.0f);
glVertex2f(78.0f,335.0f);
glEnd();

//shadow
glColor3ub(0,102,102); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(115.0f,80.0f);
glVertex2f(116.0f,80.0f);
glVertex2f(116.0f,330.0f);
glVertex2f(115.0f,335.0f);
glEnd();



}


void building_2()  //id13
{
    glColor3ub(244,164,96); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(91.0f,75.0f);
glVertex2f(100.0f,75.0f);
glVertex2f(100.0f,370.0f);
glVertex2f(91.0f,370.0f);
glEnd();

//1st window
  glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(91.5f,90.0f);
glVertex2f(93.5f,90.0f);
glVertex2f(93.5f,362.0f);
glVertex2f(91.5f,362.0f);
glEnd();

//2nd window
 glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(94.5f,90.0f);
glVertex2f(96.5f,90.0f);
glVertex2f(96.5f,362.0f);
glVertex2f(94.5f,362.0f);
glEnd();

//3rd window
 glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(97.5f,90.0f);
glVertex2f(99.5f,90.0f);
glVertex2f(99.5f,362.0f);
glVertex2f(97.5f,362.0f);
glEnd();

//left building
 glColor3ub(244,164,96); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(88.0f,75.0f);
glVertex2f(91.0f,75.0f);
glVertex2f(91.0f,340.0f);
glVertex2f(88.0f,340.0f);
glEnd();
//left  window
 glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,90.0f);
glVertex2f(90.5f,90.0f);
glVertex2f(90.5f,100.0f);
glVertex2f(89.0f,100.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,105.0f);
glVertex2f(90.5f,105.0f);
glVertex2f(90.5f,115.0f);
glVertex2f(89.0f,115.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,120.0f);
glVertex2f(90.5f,120.0f);
glVertex2f(90.5f,130.0f);
glVertex2f(89.0f,130.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,135.0f);
glVertex2f(90.5f,135.0f);
glVertex2f(90.5f,145.0f);
glVertex2f(89.0f,145.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,150.0f);
glVertex2f(90.5f,150.0f);
glVertex2f(90.5f,160.0f);
glVertex2f(89.0f,160.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,165.0f);
glVertex2f(90.5f,165.0f);
glVertex2f(90.5f,175.0f);
glVertex2f(89.0f,175.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,180.0f);
glVertex2f(90.5f,180.0f);
glVertex2f(90.5f,190.0f);
glVertex2f(89.0f,190.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,195.0f);
glVertex2f(90.5f,195.0f);
glVertex2f(90.5f,205.0f);
glVertex2f(89.0f,205.0f);
glEnd();


glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,210.0f);
glVertex2f(90.5f,210.0f);
glVertex2f(90.5f,220.0f);
glVertex2f(89.0f,220.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,225.0f);
glVertex2f(90.5f,225.0f);
glVertex2f(90.5f,235.0f);
glVertex2f(89.0f,235.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,240.0f);
glVertex2f(90.5f,240.0f);
glVertex2f(90.5f,250.0f);
glVertex2f(89.0f,250.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,255.0f);
glVertex2f(90.5f,255.0f);
glVertex2f(90.5f,265.0f);
glVertex2f(89.0f,265.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,270.0f);
glVertex2f(90.5f,270.0f);
glVertex2f(90.5f,280.0f);
glVertex2f(89.0f,280.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,285.0f);
glVertex2f(90.5f,285.0f);
glVertex2f(90.5f,295.0f);
glVertex2f(89.0f,295.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,300.0f);
glVertex2f(90.5f,300.0f);
glVertex2f(90.5f,310.0f);
glVertex2f(89.0f,310.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,315.0f);
glVertex2f(90.5f,315.0f);
glVertex2f(90.5f,325.0f);
glVertex2f(89.0f,325.0f);
glEnd();

///////Right Building/////////////

glColor3ub(244,164,96); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.0f,75.0f);
glVertex2f(103.0f,75.0f);
glVertex2f(103.0f,340.0f);
glVertex2f(100.0f,340.0f);
glEnd();

////Right window

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,90.0f);
glVertex2f(102.0f,90.0f);
glVertex2f(102.0f,100.0f);
glVertex2f(100.5f,100.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,105.0f);
glVertex2f(102.0f,105.0f);
glVertex2f(102.0f,115.0f);
glVertex2f(100.5f,115.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,120.0f);
glVertex2f(102.0f,120.0f);
glVertex2f(102.0f,130.0f);
glVertex2f(100.5f,130.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,135.0f);
glVertex2f(102.0f,135.0f);
glVertex2f(102.0f,145.0f);
glVertex2f(100.5f,145.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,150.0f);
glVertex2f(102.0f,150.0f);
glVertex2f(102.0f,160.0f);
glVertex2f(100.5f,160.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,165.0f);
glVertex2f(102.0f,165.0f);
glVertex2f(102.0f,175.0f);
glVertex2f(100.5f,175.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,180.0f);
glVertex2f(102.0f,180.0f);
glVertex2f(102.0f,190.0f);
glVertex2f(100.5f,190.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,195.0f);
glVertex2f(102.0f,195.0f);
glVertex2f(102.0f,205.0f);
glVertex2f(100.5f,205.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,210.0f);
glVertex2f(102.0f,210.0f);
glVertex2f(102.0f,220.0f);
glVertex2f(100.5f,220.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,225.0f);
glVertex2f(102.0f,225.0f);
glVertex2f(102.0f,235.0f);
glVertex2f(100.5f,235.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,240.0f);
glVertex2f(102.0f,240.0f);
glVertex2f(102.0f,250.0f);
glVertex2f(100.5f,250.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,255.0f);
glVertex2f(102.0f,255.0f);
glVertex2f(102.0f,265.0f);
glVertex2f(100.5f,265.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,270.0f);
glVertex2f(102.0f,270.0f);
glVertex2f(102.0f,280.0f);
glVertex2f(100.5f,280.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,285.0f);
glVertex2f(102.0f,285.0f);
glVertex2f(102.0f,295.0f);
glVertex2f(100.5f,295.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,300.0f);
glVertex2f(102.0f,300.0f);
glVertex2f(102.0f,310.0f);
glVertex2f(100.5f,310.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,315.0f);
glVertex2f(102.0f,315.0f);
glVertex2f(102.0f,325.0f);
glVertex2f(100.5f,325.0f);
glEnd();

////Right lower shadow
glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(103.0f,75.0f);
glVertex2f(104.0f,75.0f);
glVertex2f(104.0f,325.0f);
glVertex2f(103.0f,339.0f);
glEnd();

///// upper shadow
glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.0f,340.0f);
glVertex2f(101.0f,340.0f);
glVertex2f(101.0f,360.0f);
glVertex2f(100.0f,370.0f);
glEnd();


}

void building_3()  //id14
{
    glColor3ub(255,255,102); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(120.0f,80.0f);
glVertex2f(129.0f,80.0f);
glVertex2f(129.0f,230.0f);
glVertex2f(120.0f,230.0f);
glEnd();
//shadow
 glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(129.0f,80.0f);
glVertex2f(130.0f,80.0f);
glVertex2f(130.0f,225.0f);
glVertex2f(129.0f,230.0f);
glEnd();

//Middle black box
 glColor3ub(96,96,96); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(121.0f,230.0f);
glVertex2f(128.0f,230.0f);
glVertex2f(128.0f,240.0f);
glVertex2f(121.0f,240.0f);
glEnd();

//shadow
glColor3ub(64,64,64); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(121.0f,235.0f);
glVertex2f(128.0f,235.0f);
glVertex2f(128.0f,240.0f);
glVertex2f(121.0f,240.0f);
glEnd();

glColor3ub(64,64,64); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(128.0f,230.0f);
glVertex2f(129.0f,230.0f);
glVertex2f(129.0f,240.0f);
glVertex2f(128.0f,240.0f);
glEnd();


//upper bulding
glColor3ub(255,255,102); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(120.0f,240.0f);
glVertex2f(129.0f,240.0f);
glVertex2f(129.0f,300.0f);
glVertex2f(120.0f,300.0f);
glEnd();

//upper  shadow
glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(129.0f,240.0f);
glVertex2f(130.0f,240.0f);
glVertex2f(130.0f,295.0f);
glVertex2f(129.0f,300.0f);
glEnd();

//lower building left window
glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(121.0f,90.0f);
glVertex2f(124.0f,90.0f);
glVertex2f(124.0f,105.0f);
glVertex2f(121.0f,105.0f);
glEnd();

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(121.0f,110.0f);
glVertex2f(124.0f,110.0f);
glVertex2f(124.0f,125.0f);
glVertex2f(121.0f,125.0f);
glEnd();

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(121.0f,130.0f);
glVertex2f(124.0f,130.0f);
glVertex2f(124.0f,145.0f);
glVertex2f(121.0f,145.0f);
glEnd();

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(121.0f,150.0f);
glVertex2f(124.0f,150.0f);
glVertex2f(124.0f,165.0f);
glVertex2f(121.0f,165.0f);
glEnd();

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(121.0f,170.0f);
glVertex2f(124.0f,170.0f);
glVertex2f(124.0f,185.0f);
glVertex2f(121.0f,185.0f);
glEnd();

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(121.0f,190.0f);
glVertex2f(124.0f,190.0f);
glVertex2f(124.0f,205.0f);
glVertex2f(121.0f,205.0f);
glEnd();

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(121.0f,210.0f);
glVertex2f(124.0f,210.0f);
glVertex2f(124.0f,225.0f);
glVertex2f(121.0f,225.0f);
glEnd();

//Lower building right window

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(125.0f,90.0f);
glVertex2f(128.0f,90.0f);
glVertex2f(128.0f,105.0f);
glVertex2f(125.0f,105.0f);
glEnd();

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(125.0f,110.0f);
glVertex2f(128.0f,110.0f);
glVertex2f(128.0f,125.0f);
glVertex2f(125.0f,125.0f);
glEnd();

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(125.0f,130.0f);
glVertex2f(128.0f,130.0f);
glVertex2f(128.0f,145.0f);
glVertex2f(125.0f,145.0f);
glEnd();

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(125.0f,150.0f);
glVertex2f(128.0f,150.0f);
glVertex2f(128.0f,165.0f);
glVertex2f(125.0f,165.0f);
glEnd();

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(125.0f,170.0f);
glVertex2f(128.0f,170.0f);
glVertex2f(128.0f,185.0f);
glVertex2f(125.0f,185.0f);
glEnd();

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(125.0f,190.0f);
glVertex2f(128.0f,190.0f);
glVertex2f(128.0f,205.0f);
glVertex2f(125.0f,205.0f);
glEnd();

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(125.0f,210.0f);
glVertex2f(128.0f,210.0f);
glVertex2f(128.0f,225.0f);
glVertex2f(125.0f,225.0f);
glEnd();


//Upper building window
glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(121.0f,245.0f);
glVertex2f(128.0f,245.0f);
glVertex2f(128.0f,255.0f);
glVertex2f(121.0f,255.0f);
glEnd();

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(121.0f,260.0f);
glVertex2f(128.0f,260.0f);
glVertex2f(128.0f,270.0f);
glVertex2f(121.0f,270.0f);
glEnd();

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(121.0f,275.0f);
glVertex2f(128.0f,275.0f);
glVertex2f(128.0f,285.0f);
glVertex2f(121.0f,285.0f);
glEnd();

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(121.0f,290.0f);
glVertex2f(128.0f,290.0f);
glVertex2f(128.0f,298.0f);
glVertex2f(121.0f,298.0f);
glEnd();


}

void building_4()  //id15
{
glColor3ub(200,100,230); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(108.0f,75.0f);
glVertex2f(121.0f,75.0f);
glVertex2f(121.0f,215.0f);
glVertex2f(108.0f,215.0f);
glEnd();

//upper
glColor3ub(238,130,238); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(108.0f,215.0f);
glVertex2f(121.0f,215.0f);
glVertex2f(123.0f,226.0f);
glVertex2f(110.0f,226.0f);
glEnd();

//Right shadow
glColor3ub(221,160,221); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(121.0f,75.0f);
glVertex2f(123.0f,75.0f);
glVertex2f(123.0f,226.0f);
glVertex2f(121.0f,215.0f);
glEnd();

//1st window
glColor3ub(221,160,221); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(109.0f,90.0f);
glVertex2f(110.0f,90.0f);
glVertex2f(110.0f,215.0f);
glVertex2f(109.0f,215.0f);
glEnd();

//2nd window
glColor3ub(221,160,221); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(111.0f,90.0f);
glVertex2f(112.0f,90.0f);
glVertex2f(112.0f,215.0f);
glVertex2f(111.0f,215.0f);
glEnd();

//3rd window
glColor3ub(221,160,221); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(113.0f,90.0f);
glVertex2f(114.0f,90.0f);
glVertex2f(114.0f,215.0f);
glVertex2f(113.0f,215.0f);
glEnd();

//4th window
glColor3ub(221,160,221); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(115.0f,90.0f);
glVertex2f(116.0f,90.0f);
glVertex2f(116.0f,215.0f);
glVertex2f(115.0f,215.0f);
glEnd();

//5th window
glColor3ub(221,160,221); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(117.0f,90.0f);
glVertex2f(118.0f,90.0f);
glVertex2f(118.0f,215.0f);
glVertex2f(117.0f,215.0f);
glEnd();

//6th window
glColor3ub(221,160,221); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(119.0f,90.0f);
glVertex2f(120.0f,90.0f);
glVertex2f(120.0f,215.0f);
glVertex2f(119.0f,215.0f);
glEnd();


}

void building_5()  //id16
//Right side last building
{
    glColor3ub(0,102,102); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,80.0f);
glVertex2f(161.0f,80.0f);
glVertex2f(161.0f,250.0f);
glVertex2f(140.0f,250.0f);
glEnd();

//border
 glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,80.0f);
glVertex2f(161.0f,80.0f);
glVertex2f(161.0f,90.0f);
glVertex2f(140.0f,90.0f);
glEnd();

 glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,95.0f);
glVertex2f(161.0f,95.0f);
glVertex2f(161.0f,98.0f);
glVertex2f(140.0f,98.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,102.0f);
glVertex2f(161.0f,102.0f);
glVertex2f(161.0f,105.0f);
glVertex2f(140.0f,105.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,109.0f);
glVertex2f(161.0f,109.0f);
glVertex2f(161.0f,112.0f);
glVertex2f(140.0f,112.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,116.0f);
glVertex2f(161.0f,116.0f);
glVertex2f(161.0f,119.0f);
glVertex2f(140.0f,119.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,123.0f);
glVertex2f(161.0f,123.0f);
glVertex2f(161.0f,126.0f);
glVertex2f(140.0f,126.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,130.0f);
glVertex2f(161.0f,130.0f);
glVertex2f(161.0f,133.0f);
glVertex2f(140.0f,133.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,137.0f);
glVertex2f(161.0f,137.0f);
glVertex2f(161.0f,140.0f);
glVertex2f(140.0f,140.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,144.0f);
glVertex2f(161.0f,144.0f);
glVertex2f(161.0f,147.0f);
glVertex2f(140.0f,147.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,151.0f);
glVertex2f(161.0f,151.0f);
glVertex2f(161.0f,154.0f);
glVertex2f(140.0f,154.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,158.0f);
glVertex2f(161.0f,158.0f);
glVertex2f(161.0f,161.0f);
glVertex2f(140.0f,161.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,165.0f);
glVertex2f(161.0f,165.0f);
glVertex2f(161.0f,168.0f);
glVertex2f(140.0f,168.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,172.0f);
glVertex2f(161.0f,172.0f);
glVertex2f(161.0f,175.0f);
glVertex2f(140.0f,175.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,179.0f);
glVertex2f(161.0f,179.0f);
glVertex2f(161.0f,182.0f);
glVertex2f(140.0f,182.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,186.0f);
glVertex2f(161.0f,186.0f);
glVertex2f(161.0f,189.0f);
glVertex2f(140.0f,189.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,193.0f);
glVertex2f(161.0f,193.0f);
glVertex2f(161.0f,196.0f);
glVertex2f(140.0f,196.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,200.0f);
glVertex2f(161.0f,200.0f);
glVertex2f(161.0f,203.0f);
glVertex2f(140.0f,203.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,207.0f);
glVertex2f(161.0f,207.0f);
glVertex2f(161.0f,210.0f);
glVertex2f(140.0f,210.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,214.0f);
glVertex2f(161.0f,214.0f);
glVertex2f(161.0f,217.0f);
glVertex2f(140.0f,217.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,221.0f);
glVertex2f(161.0f,221.0f);
glVertex2f(161.0f,224.0f);
glVertex2f(140.0f,224.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,228.0f);
glVertex2f(161.0f,228.0f);
glVertex2f(161.0f,231.0f);
glVertex2f(140.0f,231.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,236.0f);
glVertex2f(161.0f,236.0f);
glVertex2f(161.0f,239.0f);
glVertex2f(140.0f,239.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,244.0f);
glVertex2f(161.0f,244.0f);
glVertex2f(161.0f,250.0f);
glVertex2f(140.0f,250.0f);
glEnd();

//Right shadow
glColor3ub(0,102,102); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(161.0f,80.0f);
glVertex2f(162.5f,80.0f);
glVertex2f(162.5f,245.0f);
glVertex2f(161.0f,250.0f);
glEnd();


}
//New portion finish_1 phase


//New portion start

void building_6()  //id17
{
glColor3ub(233,150,122); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(130.0f,75.0f);
glVertex2f(149.0f,75.0f);
glVertex2f(149.0f,200.0f);
glVertex2f(130.0f,200.0f);
glEnd();

//lower white border
glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(130.0f,75.0f);
glVertex2f(132.0f,75.0f);
glVertex2f(132.0f,200.0f);
glVertex2f(130.0f,200.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(133.0f,75.0f);
glVertex2f(134.0f,75.0f);
glVertex2f(134.0f,200.0f);
glVertex2f(133.0f,200.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(135.0f,75.0f);
glVertex2f(136.0f,75.0f);
glVertex2f(136.0f,200.0f);
glVertex2f(135.0f,200.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(137.0f,75.0f);
glVertex2f(138.0f,75.0f);
glVertex2f(138.0f,200.0f);
glVertex2f(137.0f,200.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(139.0f,75.0f);
glVertex2f(140.0f,75.0f);
glVertex2f(140.0f,200.0f);
glVertex2f(139.0f,200.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(141.0f,75.0f);
glVertex2f(142.0f,75.0f);
glVertex2f(142.0f,200.0f);
glVertex2f(141.0f,200.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(143.0f,75.0f);
glVertex2f(144.0f,75.0f);
glVertex2f(144.0f,200.0f);
glVertex2f(143.0f,200.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(145.0f,75.0f);
glVertex2f(146.0f,75.0f);
glVertex2f(146.0f,200.0f);
glVertex2f(145.0f,200.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(147.0f,75.0f);
glVertex2f(148.0f,75.0f);
glVertex2f(148.0f,200.0f);
glVertex2f(147.0f,200.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(149.0f,75.0f);
glVertex2f(150.5f,75.0f);
glVertex2f(150.5f,200.0f);
glVertex2f(149.0f,200.0f);
glEnd();

//Right shadow
glColor3ub(250,128,114); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(150.5f,75.0f);
glVertex2f(151.5f,75.0f);
glVertex2f(151.5f,195.0f);
glVertex2f(150.5f,200.0f);
glEnd();


//2nd building
glColor3ub(233,150,122); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(132.0f,200.0f);
glVertex2f(149.0f,200.0f);
glVertex2f(149.0f,300.0f);
glVertex2f(132.0f,300.0f);
glEnd();

//white border
glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(131.5f,200.0f);
glVertex2f(133.0f,200.0f);
glVertex2f(133.0f,300.0f);
glVertex2f(131.5f,300.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(134.0f,200.0f);
glVertex2f(135.0f,200.0f);
glVertex2f(135.0f,300.0f);
glVertex2f(134.0f,300.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(136.0f,200.0f);
glVertex2f(137.0f,200.0f);
glVertex2f(137.0f,300.0f);
glVertex2f(136.0f,300.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(138.0f,200.0f);
glVertex2f(139.0f,200.0f);
glVertex2f(139.0f,300.0f);
glVertex2f(138.0f,300.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,200.0f);
glVertex2f(141.0f,200.0f);
glVertex2f(141.0f,300.0f);
glVertex2f(140.0f,300.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(142.0f,200.0f);
glVertex2f(143.0f,200.0f);
glVertex2f(143.0f,300.0f);
glVertex2f(142.0f,300.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(144.0f,200.0f);
glVertex2f(145.0f,200.0f);
glVertex2f(145.0f,300.0f);
glVertex2f(144.0f,300.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(146.0f,200.0f);
glVertex2f(147.0f,200.0f);
glVertex2f(147.0f,300.0f);
glVertex2f(146.0f,300.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(148.0f,200.0f);
glVertex2f(149.5f,200.0f);
glVertex2f(149.5f,300.0f);
glVertex2f(148.0f,300.0f);
glEnd();

//Right shadow
glColor3ub(250,128,114); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(149.5f,200.0f);
glVertex2f(150.25f,200.0f);
glVertex2f(150.25f,295.0f);
glVertex2f(149.5f,300.0f);
glEnd();


//3rd building

glColor3ub(233,150,122); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(133.0f,300.0f);
glVertex2f(148.0f,300.0f);
glVertex2f(148.0f,380.0f);
glVertex2f(133.0f,380.0f);
glEnd();

//White border
glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(132.5f,300.0f);
glVertex2f(134.0f,300.0f);
glVertex2f(134.0f,380.0f);
glVertex2f(132.5f,380.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(135.0f,300.0f);
glVertex2f(136.0f,300.0f);
glVertex2f(136.0f,380.0f);
glVertex2f(135.0f,380.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(137.0f,300.0f);
glVertex2f(138.0f,300.0f);
glVertex2f(138.0f,380.0f);
glVertex2f(137.0f,380.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(139.0f,300.0f);
glVertex2f(140.0f,300.0f);
glVertex2f(140.0f,380.0f);
glVertex2f(139.0f,380.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(141.0f,300.0f);
glVertex2f(142.0f,300.0f);
glVertex2f(142.0f,380.0f);
glVertex2f(141.0f,380.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(143.0f,300.0f);
glVertex2f(144.0f,300.0f);
glVertex2f(144.0f,380.0f);
glVertex2f(143.0f,380.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(145.0f,300.0f);
glVertex2f(146.0f,300.0f);
glVertex2f(146.0f,380.0f);
glVertex2f(145.0f,380.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(147.0f,300.0f);
glVertex2f(148.5f,300.0f);
glVertex2f(148.5f,380.0f);
glVertex2f(147.0f,380.0f);
glEnd();

//Right shadow
glColor3ub(250,128,114); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(148.5f,300.0f);
glVertex2f(149.25f,300.0f);
glVertex2f(149.25f,375.0f);
glVertex2f(148.5f,380.0f);
glEnd();

}

void building_7()  //id18
{
    glColor3ub(255,255,102); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(70.0f,75.0f);
glVertex2f(83.0f,75.0f);
glVertex2f(83.0f,250.0f);
glVertex2f(70.0f,250.0f);
glEnd();

//left 1st line window
 glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(71.0f,90.0f);
glVertex2f(73.0f,90.0f);
glVertex2f(73.0f,100.0f);
glVertex2f(71.0f,100.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(71.0f,105.0f);
glVertex2f(73.0f,105.0f);
glVertex2f(73.0f,115.0f);
glVertex2f(71.0f,115.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(71.0f,120.0f);
glVertex2f(73.0f,120.0f);
glVertex2f(73.0f,130.0f);
glVertex2f(71.0f,130.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(71.0f,135.0f);
glVertex2f(73.0f,135.0f);
glVertex2f(73.0f,145.0f);
glVertex2f(71.0f,145.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(71.0f,150.0f);
glVertex2f(73.0f,150.0f);
glVertex2f(73.0f,160.0f);
glVertex2f(71.0f,160.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(71.0f,165.0f);
glVertex2f(73.0f,165.0f);
glVertex2f(73.0f,175.0f);
glVertex2f(71.0f,175.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(71.0f,180.0f);
glVertex2f(73.0f,180.0f);
glVertex2f(73.0f,190.0f);
glVertex2f(71.0f,190.0f);
glEnd();


glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(71.0f,195.0f);
glVertex2f(73.0f,195.0f);
glVertex2f(73.0f,205.0f);
glVertex2f(71.0f,205.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(71.0f,210.0f);
glVertex2f(73.0f,210.0f);
glVertex2f(73.0f,220.0f);
glVertex2f(71.0f,220.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(71.0f,225.0f);
glVertex2f(73.0f,225.0f);
glVertex2f(73.0f,235.0f);
glVertex2f(71.0f,235.0f);
glEnd();

//left 2nd line

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(74.0f,90.0f);
glVertex2f(76.0f,90.0f);
glVertex2f(76.0f,100.0f);
glVertex2f(74.0f,100.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(74.0f,105.0f);
glVertex2f(76.0f,105.0f);
glVertex2f(76.0f,115.0f);
glVertex2f(74.0f,115.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(74.0f,120.0f);
glVertex2f(76.0f,120.0f);
glVertex2f(76.0f,130.0f);
glVertex2f(74.0f,130.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(74.0f,135.0f);
glVertex2f(76.0f,135.0f);
glVertex2f(76.0f,145.0f);
glVertex2f(74.0f,145.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(74.0f,150.0f);
glVertex2f(76.0f,150.0f);
glVertex2f(76.0f,160.0f);
glVertex2f(74.0f,160.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(74.0f,165.0f);
glVertex2f(76.0f,165.0f);
glVertex2f(76.0f,175.0f);
glVertex2f(74.0f,175.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(74.0f,180.0f);
glVertex2f(76.0f,180.0f);
glVertex2f(76.0f,190.0f);
glVertex2f(74.0f,190.0f);
glEnd();


glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(74.0f,195.0f);
glVertex2f(76.0f,195.0f);
glVertex2f(76.0f,205.0f);
glVertex2f(74.0f,205.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(74.0f,210.0f);
glVertex2f(76.0f,210.0f);
glVertex2f(76.0f,220.0f);
glVertex2f(74.0f,220.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(74.0f,225.0f);
glVertex2f(76.0f,225.0f);
glVertex2f(76.0f,235.0f);
glVertex2f(74.0f,235.0f);
glEnd();

//3rd line window

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(77.0f,90.0f);
glVertex2f(79.0f,90.0f);
glVertex2f(79.0f,100.0f);
glVertex2f(77.0f,100.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(77.0f,105.0f);
glVertex2f(79.0f,105.0f);
glVertex2f(79.0f,115.0f);
glVertex2f(77.0f,115.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(77.0f,120.0f);
glVertex2f(79.0f,120.0f);
glVertex2f(79.0f,130.0f);
glVertex2f(77.0f,130.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(77.0f,135.0f);
glVertex2f(79.0f,135.0f);
glVertex2f(79.0f,145.0f);
glVertex2f(77.0f,145.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(77.0f,150.0f);
glVertex2f(79.0f,150.0f);
glVertex2f(79.0f,160.0f);
glVertex2f(77.0f,160.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(77.0f,165.0f);
glVertex2f(79.0f,165.0f);
glVertex2f(79.0f,175.0f);
glVertex2f(77.0f,175.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(77.0f,180.0f);
glVertex2f(79.0f,180.0f);
glVertex2f(79.0f,190.0f);
glVertex2f(77.0f,190.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(77.0f,195.0f);
glVertex2f(79.0f,195.0f);
glVertex2f(79.0f,205.0f);
glVertex2f(77.0f,205.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(77.0f,210.0f);
glVertex2f(79.0f,210.0f);
glVertex2f(79.0f,220.0f);
glVertex2f(77.0f,220.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(77.0f,225.0f);
glVertex2f(79.0f,225.0f);
glVertex2f(79.0f,235.0f);
glVertex2f(77.0f,235.0f);
glEnd();

//4th line window
glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(80.0f,90.0f);
glVertex2f(82.0f,90.0f);
glVertex2f(82.0f,100.0f);
glVertex2f(80.0f,100.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(80.0f,105.0f);
glVertex2f(82.0f,105.0f);
glVertex2f(82.0f,115.0f);
glVertex2f(80.0f,115.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(80.0f,120.0f);
glVertex2f(82.0f,120.0f);
glVertex2f(82.0f,130.0f);
glVertex2f(80.0f,130.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(80.0f,135.0f);
glVertex2f(82.0f,135.0f);
glVertex2f(82.0f,145.0f);
glVertex2f(80.0f,145.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(80.0f,150.0f);
glVertex2f(82.0f,150.0f);
glVertex2f(82.0f,160.0f);
glVertex2f(80.0f,160.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(80.0f,165.0f);
glVertex2f(82.0f,165.0f);
glVertex2f(82.0f,175.0f);
glVertex2f(80.0f,175.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(80.0f,180.0f);
glVertex2f(82.0f,180.0f);
glVertex2f(82.0f,190.0f);
glVertex2f(80.0f,190.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(80.0f,195.0f);
glVertex2f(82.0f,195.0f);
glVertex2f(82.0f,205.0f);
glVertex2f(80.0f,205.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(80.0f,210.0f);
glVertex2f(82.0f,210.0f);
glVertex2f(82.0f,220.0f);
glVertex2f(80.0f,220.0f);
glEnd();


glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(80.0f,225.0f);
glVertex2f(82.0f,225.0f);
glVertex2f(82.0f,235.0f);
glVertex2f(80.0f,235.0f);
glEnd();

//Right shadow

glColor3ub(230,200,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(83.0f,75.0f);
glVertex2f(84.0f,75.0f);
glVertex2f(84.0f,240.0f);
glVertex2f(83.0f,250.0f);
glEnd();

//upper white box
glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(72.0f,250.0f);
glVertex2f(76.0f,250.0f);
glVertex2f(76.0f,265.0f);
glVertex2f(72.0f,265.0f);
glEnd();

//upper white box right shadow
glColor3ub(128,128,128); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(76.0f,250.0f);
glVertex2f(76.5f,250.0f);
glVertex2f(76.5f,260.0f);
glVertex2f(76.0f,265.0f);
glEnd();


}


void cloud()  //id19
{
    //cloud start
     glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_cloud, 0.0f, 0.0f);//for move
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(255,255,255);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=9.0f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+22,y+302 );
        }

	glEnd();

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(255,255,255);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=11.0f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+30,y+290 );
        }
    glEnd();

    	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(255,255,255);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=9.0f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+40,y+302 );
        }
    glEnd();

     	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(255,255,255);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=10.0f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+35,y+312 );
        }
    glEnd();
    glPopMatrix();
//cloud end

}

void sun()  //id20
{
    	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(255,245,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=8.0f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+185,y+292 );
        }
    glEnd();
}

void boat()  //id21
{

    //body
       glColor3ub(139,69,19); // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_boat, 0.0f, 0.0f);//for move
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(60.0f,-70.0f);
glVertex2f(80.0f,-70.0f);
glVertex2f(90.0f,-30.0f);
glVertex2f(50.0f,-30.0f);
glEnd();


//boat pal holder
 glColor3ub(0,0,0);
 glLineWidth(7.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(60.0f,-30.0f);
glVertex2f(60.0f,50.0f);
glEnd();

//boat pal
 glColor3ub(138,43,226);
 glLineWidth(7.0f);
glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
glVertex2f(60.0f,-25.0f);
glVertex2f(80.0f,-25.0f);
glVertex2f(60.0f,45.0f);
glEnd();
glPopMatrix();
}


void boat_1()  //id51
{

    //body
       glColor3ub(193,40,60); // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_boat_1, 0.0f, 0.0f);//for move
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(120.0f,-85.0f);
glVertex2f(140.0f,-85.0f);
glVertex2f(150.0f,-45.0f);
glVertex2f(110.0f,-45.0f);
glEnd();


//boat pal holder
 glColor3ub(0,0,0);
 glLineWidth(7.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,-45.0f);
glVertex2f(140.0f,35.0f);
glEnd();

//boat pal
 glColor3ub(255,20,147);
 glLineWidth(7.0f);
glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,-40.0f);
glVertex2f(120.0f,-40.0f);
glVertex2f(140.0f,30.0f);
glEnd();
glPopMatrix();
}
void ship()  //id22
{
    //bottom red
    glColor3ub(255,0,0); // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_ship_container, 0.0f, 0.0f);//for move
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(10.0f,-170.0f);
glVertex2f(110.0f,-170.0f);
glVertex2f(110.0f,-140.0f);
glVertex2f(10.0f,-140.0f);
glEnd();

//middle white
  glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(10.0f,-140.0f);
glVertex2f(110.0f,-140.0f);
glVertex2f(110.0f,-120.0f);
glVertex2f(10.0f,-120.0f);
glEnd();

//deck room
glColor3ub(70,130,180); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(18.0f,-120.0f);
glVertex2f(40.0f,-120.0f);
glVertex2f(40.0f,-50.0f);
glVertex2f(18.0f,-50.0f);
glEnd();

//deck room 2D
glColor3ub(72,61,139); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(40.0f,-120.0f);
glVertex2f(41.0f,-120.0f);
glVertex2f(41.0f,-50.0f);
glVertex2f(40.0f,-50.0f);
glEnd();

//deck room first left window

glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(255,228,181);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.8f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+22,y-60 );
        }

	glEnd();

	//deck room second left window

glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(255,228,181);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.8f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+29,y-60 );
        }

	glEnd();
	//deck room third left window
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(255,228,181);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.8f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+36,y-60 );
        }

	glEnd();

//control room
glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(23.0f,-50.0f);
glVertex2f(40.0f,-50.0f);
glVertex2f(42.0f,10.0f);
glVertex2f(23.0f,10.0f);
glEnd();

//control room 2D
glColor3ub(128,128,128); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(40.0f,-50.0f);
glVertex2f(41.0f,-50.0f);
glVertex2f(42.0f,10.0f);
glVertex2f(41.0f,10.0f);
glEnd();

//control room left first window
glColor3ub(0,206,209); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(24.0f,-10.0f);
glVertex2f(27.0f,-10.0f);
glVertex2f(27.0f,8.0f);
glVertex2f(24.0f,8.0f);
glEnd();

//control room left second window
glColor3ub(0,206,209); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(28.0f,-10.0f);
glVertex2f(31.0f,-10.0f);
glVertex2f(31.0f,8.0f);
glVertex2f(28.0f,8.0f);
glEnd();

//control room left third window
glColor3ub(0,206,209); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(32.0f,-10.0f);
glVertex2f(35.0f,-10.0f);
glVertex2f(35.0f,8.0f);
glVertex2f(32.0f,8.0f);
glEnd();

//control room left fourth window
glColor3ub(0,206,209); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(36.0f,-10.0f);
glVertex2f(39.5f,-10.0f);
glVertex2f(40.0f,8.0f);
glVertex2f(36.0f,8.0f);
glEnd();

//control room roof top
glColor3ub(70,130,180); // Clear the color buffer (background)
glLineWidth(12.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(21.0f,10.0f);
glVertex2f(43.0f,10.0f);
glEnd();

//control room top light holder
glColor3ub(192,192,192); // Clear the color buffer (background)
glLineWidth(8.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(33.0f,13.0f);
glVertex2f(33.0f,55.0f);
glEnd();


//exhaustor white part
glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_QUADS);// Draw a Red 1x1 Square centered at origin
glVertex2f(25.0f,15.0f);
glVertex2f(30.0f,15.0f);
glVertex2f(30.0f,40.0f);
glVertex2f(25.0f,40.0f);
glEnd();


//exhaustor black part
glColor3ub(0,0,0); // Clear the color buffer (background)
glBegin(GL_QUADS);// Draw a Red 1x1 Square centered at origin
glVertex2f(25.0f,40.0f);
glVertex2f(30.0f,40.0f);
glVertex2f(30.0f,45.0f);
glVertex2f(25.0f,50.0f);
glEnd();

//control room front glass
glColor3ub(0,206,209); // Clear the color buffer (background)
glLineWidth(6.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(41.0f,-16.0f);
glVertex2f(41.5f,2.0f);

glEnd();


//deck roof top
glColor3ub(255,255,255); // Clear the color buffer (background)
glLineWidth(12.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin

glVertex2f(13.0f,-50.0f);
glVertex2f(43.0f,-50.0f);
glEnd();


//deck roof top 2D
glColor3ub(128,128,128); // Clear the color buffer (background)
glLineWidth(12.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin

glVertex2f(43.0f,-50.0f);
glVertex2f(44.0f,-50.0f);
glEnd();

//body to deck line1
glColor3ub(255,255,255); // Clear the color buffer (background)
glLineWidth(15.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(14.0f,-100.0f);
glVertex2f(14.0f,-50.0f);

glEnd();
//body to deck line2
glColor3ub(255,255,255); // Clear the color buffer (background)
glLineWidth(10.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(18.0f,-100.0f);
glVertex2f(18.0f,-50.0f);

glEnd();


//upper white tail part
glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin

glVertex2f(10.0f,-120.0f);
glVertex2f(40.0f,-120.0f);
glVertex2f(35.0f,-100.0f);
glVertex2f(10.0f,-100.0f);
glEnd();

//upper white front part
glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin

glVertex2f(85.0f,-120.0f);
glVertex2f(110.0f,-120.0f);
glVertex2f(120.0f,-90.0f);
glVertex2f(90.0f,-90.0f);
glEnd();

glPopMatrix();

}

void containers()  //id23
{
    //left first container
    glColor3ub(0,0,255); // Clear the color buffer (background)
     glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_ship_container, 0.0f, 0.0f);//for move
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin

glVertex2f(45.0f,-120.0f);
glVertex2f(62.0f,-120.0f);
glVertex2f(62.0f,-85.0f);
glVertex2f(45.0f,-85.0f);
glEnd();

  //left first container 2D
    glColor3ub(0,0,100); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin

glVertex2f(62.0f,-85.0f);
glVertex2f(63.0f,-85.0f);
glVertex2f(63.0f,-120.0f);
glVertex2f(62.0f,-120.0f);
glEnd();


//left second container
    glColor3ub(255,165,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin

glVertex2f(65.0f,-120.0f);
glVertex2f(82.0f,-120.0f);
glVertex2f(82.0f,-85.0f);
glVertex2f(65.0f,-85.0f);
glEnd();

  //left second container 2D
    glColor3ub(150,105,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin

glVertex2f(82.0f,-85.0f);
glVertex2f(83.0f,-85.0f);
glVertex2f(83.0f,-120.0f);
glVertex2f(82.0f,-120.0f);
glEnd();


//top container
    glColor3ub(255,127,80); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin

glVertex2f(56.5f,-85.0f);
glVertex2f(73.5f,-85.0f);
glVertex2f(73.5f,-50.0f);
glVertex2f(56.5f,-50.0f);
glEnd();

  //top container 2D
    glColor3ub(130,70,50); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin

glVertex2f(73.5f,-50.0f);
glVertex2f(74.5f,-50.0f);
glVertex2f(74.5f,-85.0f);
glVertex2f(73.5f,-85.0f);
glEnd();
glPopMatrix();

}


//first Windmill
//first blade

void first_blade()  //id24
{

glColor3ub(165,42,42);
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(16.0f,185.0f,0.0f);
glRotatef(angle_1, 0.0f, 0.0f,1.0f);
glTranslatef(-16.0f,-185.0f,0.0f);
glBegin(GL_QUADS);
glVertex2f(15.0f, 178.0f);
glVertex2f(17.0f, 178.0f);
glVertex2f(17.0f, 192.0f);
glVertex2f(15.0f, 192.0);

glEnd();
glPopMatrix();
}

//Windmill
//second blade

void second_blade()  //id25
{

glColor3ub(165,42,42);
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(16.0f,185.0f,0.0f);
glRotatef(angle_2, 0.0f, 0.0f,1.0f);
glTranslatef(-16.0f,-185.0f,0.0f);
glBegin(GL_QUADS);
glVertex2f(9.0f, 184.0f);
glVertex2f(23.0f, 184.0f);
glVertex2f(23.0f, 186.0f);
glVertex2f(9.0f, 186.0f);

glEnd();
glPopMatrix();
}


//windmill
void windmill_stand()  //id26
{
glColor3ub(165,42,42);
glBegin(GL_QUADS);
glVertex2f(15.5f, 80.0f);
glVertex2f(16.5f, 80.0f);
glVertex2f(16.5f, 185.0f);
glVertex2f(15.5f, 185.0f);
glEnd();
}


//second Windmill
//first blade

void right_first_blade()  //id46
{

glColor3ub(165,42,42);
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(33.0f,185.0f,0.0f);
glRotatef(angle_1, 0.0f, 0.0f,1.0f);
glTranslatef(-33.0f,-185.0f,0.0f);
glBegin(GL_QUADS);
glVertex2f(32.0f, 178.0f);
glVertex2f(34.0f, 178.0f);
glVertex2f(34.0f, 192.0f);
glVertex2f(32.0f, 192.0);

glEnd();
glPopMatrix();
}

//Windmill
//second blade

void right_second_blade()  //id47
{

glColor3ub(165,42,42);
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(33.0f,185.0f,0.0f);
glRotatef(angle_2, 0.0f, 0.0f,1.0f);
glTranslatef(-33.0f,-185.0f,0.0f);
glBegin(GL_QUADS);
glVertex2f(26.0f, 184.0f);
glVertex2f(40.0f, 184.0f);
glVertex2f(40.0f, 186.0f);
glVertex2f(26.0f, 186.0f);

glEnd();
glPopMatrix();
}


//windmill
void right_windmill_stand()  //id48
{
glColor3ub(165,42,42);
glBegin(GL_QUADS);
glVertex2f(32.5f, 80.0f);
glVertex2f(33.5f, 80.0f);
glVertex2f(33.5f, 185.0f);
glVertex2f(32.5f, 185.0f);
glEnd();
}

//Airplane
void air_plane()  //id27
{
    //main body
    glColor3ub(65,105,225);
       glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_airplane, 0.0f, 0.0f);//for move
glBegin(GL_QUADS);
glVertex2f(160.0f, 318.0f);
glVertex2f(183.0f, 318.0f);
glVertex2f(183.0f, 343.0f);
glVertex2f(160.0f, 343.0f);
glEnd();

//front part bottom
    glColor3ub(75,0,130);
glBegin(GL_QUADS);
glVertex2f(160.0f, 330.5f);
glVertex2f(155.0f, 330.5f);
glVertex2f(158.0f, 318.0f);
glVertex2f(160.0f, 318.0f);
glEnd();

//front part upper
    glColor3ub(75,0,130);
glBegin(GL_QUADS);
glVertex2f(155.0f, 330.5f);
glVertex2f(160.0f, 330.5f);
glVertex2f(160.0f, 343.0f);
glVertex2f(158.0f, 343.0f);
glEnd();

//left wings
    glColor3ub(255,165,0);
glBegin(GL_QUADS);
glVertex2f(163.0f, 330.5f);
glVertex2f(168.0f, 298.0f);
glVertex2f(173.0f, 295.0f);
glVertex2f(168.0f, 330.5f);
glEnd();
//right wings
    glColor3ub(255,165,0);
glBegin(GL_QUADS);
glVertex2f(165.0f, 343.0f);
glVertex2f(170.0f, 343.0f);
glVertex2f(173.0f, 363.0f);
glVertex2f(168.0f, 360.5f);
glEnd();

//tail
    glColor3ub(255,165,0);
glBegin(GL_QUADS);
glVertex2f(178.0f, 343.0f);
glVertex2f(183.0f, 343.0f);
glVertex2f(183.0f, 365.0f);
glVertex2f(181.0f, 365.5f);
glEnd();
glPopMatrix();
}
void upper_container_text( float x, float y, char *st) //id28
{
     glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_ship_container, 0.0f, 0.0f);//for move
    int l,i;
    l=strlen( st ); // see how many characters are in text string.

    glColor3f(0.0,0.0,0.0);

    glRasterPos2f( x, y); // location to start printing text
    for( i=0; i < l; i++) // loop until i is greater then l
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, st[i]);

    }
    glPopMatrix();


}
void left_container_text( float x, float y, char *st) //id29
{
     glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_ship_container, 0.0f, 0.0f);//for move
    int l,i;
    l=strlen( st ); // see how many characters are in text string.

    glColor3f(1.0,1.0,1.0);

    glRasterPos2f( x, y); // location to start printing text
    for( i=0; i < l; i++) // loop until i is greater then l
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, st[i]);

    }
    glPopMatrix();


}
void right_container_text( float x, float y, char *st) //id30
{
     glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_ship_container, 0.0f, 0.0f);//for move
    int l,i;
    l=strlen( st ); // see how many characters are in text string.

    glColor3f(0.0,0.0,0.0);
    glRasterPos2f( x, y); // location to start printing text
    for( i=0; i < l; i++) // loop until i is greater then l
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, st[i]);

    }
    glPopMatrix();


}

void ship_name_text( float x, float y, char *st) //id31
{
     glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_ship_container, 0.0f, 0.0f);//for move
    int l,i;
    l=strlen( st ); // see how many characters are in text string.

    glColor3f(0.0,0.0,0.0);
    glRasterPos2f( x, y); // location to start printing text
    for( i=0; i < l; i++) // loop until i is greater then l
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, st[i]);

    }
    glPopMatrix();


}
 void speed_board()//id42
 {


//deck
  glColor3ub(0,0,128);
  glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_speed_boat, 0.0f, 0.0f);//for move
glBegin(GL_QUADS);
glVertex2f(135.0f, -44.0f);
glVertex2f(167.0f, -60.0f);
glVertex2f(164.0f, -30.0f);
glVertex2f(140.0f, -10.0f);
glEnd();

 //windows
glColor3ub(72,209,204);
glBegin(GL_QUADS);
glVertex2f(137.0f, -39.0f);
glVertex2f(165.0f, -51.0f);
glVertex2f(163.0f, -34.0f);
glVertex2f(141.0f, -15.0f);
glEnd();

//window line

glColor3ub(0,0,128);
glLineWidth(8.0f);
glBegin(GL_LINES);
glVertex2f(145.0f, -52.0f);
glVertex2f(145.0f, -16.0f);

glVertex2f(151.0f, -52.0f);
glVertex2f(151.0f, -19.0f);

glVertex2f(157.0f, -52.0f);
glVertex2f(157.0f, -25.5f);
glEnd();
//middle body
  glColor3ub(141,162,2);
glBegin(GL_QUADS);
glVertex2f(132.0f, -85.0f);
glVertex2f(173.0f, -85.0f);
glVertex2f(177.0f, -60.0f);
glVertex2f(123.0f, -38.0f);
glEnd();

//bottom body
glColor3ub(0,0,128);
glBegin(GL_QUADS);
glVertex2f(135.0f, -105.0f);
glVertex2f(170.0f, -105.0f);
glVertex2f(173.0f, -85.0f);
glVertex2f(130.0f, -76.0f);
glEnd();


 glPopMatrix();
 }

//DAY END





//NIGHT START

void water_night()
{
    //water
    glColor3ub(0,150,220); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(0.0f,-200.0f);
glVertex2f(200.0f,-200.0f);
glVertex2f(200.0f,-35.0f);
glVertex2f(0.0f,-35.0f);
glEnd();

//beach
 glColor3ub(230,210,160); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(0.0f,-35.0f);
glVertex2f(200.0f,-35.0f);
glVertex2f(200.0f,25.0f);
glVertex2f(0.0f,25.0f);
glEnd();

}

void beach_bench_night()
{
    //Bench_1
    //back rest
   glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(15.0f,6.0f);
glVertex2f(20.0f,6.0f);
glVertex2f(20.0f,20.0f);
glVertex2f(15.0f,20.0f);
glEnd();

//seat
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(15.0f,6.0f);
glVertex2f(13.0f,-8.0f);
glVertex2f(18.0f,-8.0f);
glVertex2f(20.0f,6.0f);
glEnd();

//left leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(14.0f,-8.0f);
glVertex2f(14.0f,-15.0f);
glEnd();

//Right leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(17.5f,-8.0f);
glVertex2f(17.5f,-15.0f);
glEnd();

//back Right leg
glColor3ub	(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(19.5f,6.0f);
glVertex2f(19.5f,-2.0f);
glEnd();


//Bench_2
  //back rest
   glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(25.0f,6.0f);
glVertex2f(30.0f,6.0f);
glVertex2f(30.0f,20.0f);
glVertex2f(25.0f,20.0f);
glEnd();

//seat
glColor3ub	(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(25.0f,6.0f);
glVertex2f(23.0f,-8.0f);
glVertex2f(28.0f,-8.0f);
glVertex2f(30.0f,6.0f);
glEnd();

//left leg
glColor3ub	(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(24.0f,-8.0f);
glVertex2f(24.0f,-15.0f);
glEnd();

//Right leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(27.5f,-8.0f);
glVertex2f(27.5f,-15.0f);
glEnd();

//back Right leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(29.5f,6.0f);
glVertex2f(29.5f,-2.0f);
glEnd();

//Bench_3
//back rest
   glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(65.0f,6.0f);
glVertex2f(70.0f,6.0f);
glVertex2f(70.0f,20.0f);
glVertex2f(65.0f,20.0f);
glEnd();

//seat
glColor3ub	(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(65.0f,6.0f);
glVertex2f(63.0f,-8.0f);
glVertex2f(68.0f,-8.0f);
glVertex2f(70.0f,6.0f);
glEnd();

//left leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(64.0f,-8.0f);
glVertex2f(64.0f,-15.0f);
glEnd();

//Right leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(67.5f,-8.0f);
glVertex2f(67.5f,-15.0f);
glEnd();

//back Right leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(69.5f,6.0f);
glVertex2f(69.5f,-2.0f);
glEnd();

//Bench_4
//back rest
   glColor3ub	(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(75.0f,6.0f);
glVertex2f(80.0f,6.0f);
glVertex2f(80.0f,20.0f);
glVertex2f(75.0f,20.0f);
glEnd();

//seat
glColor3ub	(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(75.0f,6.0f);
glVertex2f(73.0f,-8.0f);
glVertex2f(78.0f,-8.0f);
glVertex2f(80.0f,6.0f);
glEnd();

//left leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(74.0f,-8.0f);
glVertex2f(74.0f,-15.0f);
glEnd();

//Right leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(77.5f,-8.0f);
glVertex2f(77.5f,-15.0f);
glEnd();

//back Right leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(79.5f,6.0f);
glVertex2f(79.5f,-2.0f);
glEnd();

//Bench_5
//back rest
   glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(115.0f,6.0f);
glVertex2f(120.0f,6.0f);
glVertex2f(120.0f,20.0f);
glVertex2f(115.0f,20.0f);
glEnd();

//seat
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(115.0f,6.0f);
glVertex2f(113.0f,-8.0f);
glVertex2f(118.0f,-8.0f);
glVertex2f(120.0f,6.0f);
glEnd();

//left leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(114.0f,-8.0f);
glVertex2f(114.0f,-15.0f);
glEnd();

//Right leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(117.5f,-8.0f);
glVertex2f(117.5f,-15.0f);
glEnd();

//back Right leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(119.5f,6.0f);
glVertex2f(119.5f,-2.0f);
glEnd();

//Bench_6
//back rest
   glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(125.0f,6.0f);
glVertex2f(130.0f,6.0f);
glVertex2f(130.0f,20.0f);
glVertex2f(125.0f,20.0f);
glEnd();

//seat
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(125.0f,6.0f);
glVertex2f(123.0f,-8.0f);
glVertex2f(128.0f,-8.0f);
glVertex2f(130.0f,6.0f);
glEnd();

//left leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(124.0f,-8.0f);
glVertex2f(124.0f,-15.0f);
glEnd();

//Right leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(127.5f,-8.0f);
glVertex2f(127.5f,-15.0f);
glEnd();

//back Right leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(129.5f,6.0f);
glVertex2f(129.5f,-2.0f);
glEnd();

//Bench_7
//back rest
   glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(165.0f,6.0f);
glVertex2f(170.0f,6.0f);
glVertex2f(170.0f,20.0f);
glVertex2f(165.0f,20.0f);
glEnd();

//seat
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(165.0f,6.0f);
glVertex2f(163.0f,-8.0f);
glVertex2f(168.0f,-8.0f);
glVertex2f(170.0f,6.0f);
glEnd();

//left leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(164.0f,-8.0f);
glVertex2f(164.0f,-15.0f);
glEnd();

//Right leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(167.5f,-8.0f);
glVertex2f(167.5f,-15.0f);
glEnd();

//back Right leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(169.5f,6.0f);
glVertex2f(169.5f,-2.0f);
glEnd();

//Bench_8
//back rest
   glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(175.0f,6.0f);
glVertex2f(180.0f,6.0f);
glVertex2f(180.0f,20.0f);
glVertex2f(175.0f,20.0f);
glEnd();

//seat
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(175.0f,6.0f);
glVertex2f(173.0f,-8.0f);
glVertex2f(178.0f,-8.0f);
glVertex2f(180.0f,6.0f);
glEnd();

//left leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(174.0f,-8.0f);
glVertex2f(174.0f,-15.0f);
glEnd();

//Right leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(177.5f,-8.0f);
glVertex2f(177.5f,-15.0f);
glEnd();

//back Right leg
glColor3ub(255,69,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(179.5f,6.0f);
glVertex2f(179.5f,-2.0f);
glEnd();
}

void umbrella_night()
{
    //from left first umbrella
       glColor3ub(0,0,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(22.0f,-15.0f);
glVertex2f(22.0f,35.0f);
glEnd();

//left
       glColor3ub(124,252,0); // Clear the color buffer (background)
glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
glVertex2f(12.0f,26.0f);
glVertex2f(22.0f,35.0f);
glVertex2f(22.0f,50.0f);
glEnd();

//right
       glColor3ub(124,252,0); // Clear the color buffer (background)
glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
glVertex2f(32.0f,26.0f);
glVertex2f(22.0f,35.0f);
glVertex2f(22.0f,50.0f);
glEnd();


//from left second umbrella
       glColor3ub(0,0,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(72.0f,-15.0f);
glVertex2f(72.0f,35.0f);
glEnd();

//left
       glColor3ub(124,252,0); // Clear the color buffer (background)
glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
glVertex2f(62.0f,26.0f);
glVertex2f(72.0f,35.0f);
glVertex2f(72.0f,50.0f);
glEnd();

//right
       glColor3ub(124,252,0); // Clear the color buffer (background)
glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
glVertex2f(82.0f,26.0f);
glVertex2f(72.0f,35.0f);
glVertex2f(72.0f,50.0f);
glEnd();

//from left third umbrella
       glColor3ub(0,0,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(122.0f,-15.0f);
glVertex2f(122.0f,35.0f);
glEnd();

//left
       glColor3ub(124,252,0); // Clear the color buffer (background)
glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
glVertex2f(112.0f,26.0f);
glVertex2f(122.0f,35.0f);
glVertex2f(122.0f,50.0f);
glEnd();

//right
       glColor3ub(124,252,0); // Clear the color buffer (background)
glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
glVertex2f(132.0f,26.0f);
glVertex2f(122.0f,35.0f);
glVertex2f(122.0f,50.0f);
glEnd();

//from left fourth umbrella
       glColor3ub(0,0,0); // Clear the color buffer (background)
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(172.0f,-15.0f);
glVertex2f(172.0f,35.0f);
glEnd();

//left
       glColor3ub(124,252,0); // Clear the color buffer (background)
glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
glVertex2f(162.0f,26.0f);
glVertex2f(172.0f,35.0f);
glVertex2f(172.0f,50.0f);
glEnd();

//right
       glColor3ub(124,252,0); // Clear the color buffer (background)
glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
glVertex2f(182.0f,26.0f);
glVertex2f(172.0f,35.0f);
glVertex2f(172.0f,50.0f);
glEnd();

}

void wave_night()
{
     glColor3ub(190,230,250); // Clear the color buffer (background)
            glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.0f,move_wave,0.0f);//for move
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(-200.0f,-195.0f);
glVertex2f(300.0f,-195.0f);
glVertex2f(20.0f,-190.0f);
glVertex2f(20.0f,-190.0f);
glEnd();

 glColor3ub(190,230,250); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(-160.0f,-195.0f);
glVertex2f(400.0f,-195.0f);
glVertex2f(20.0f,-190.0f);
glVertex2f(20.0f,-190.0f);
glEnd();


     glColor3ub(190,230,250); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(-100.0f,-170.0f);
glVertex2f(400.0f,-170.0f);
glVertex2f(200.0f,-165.0f);
glVertex2f(160.0f,-165.0f);
glEnd();

     glColor3ub(190,230,250); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(-160.0f,-150.0f);
glVertex2f(240.0f,-150.0f);
glVertex2f(100.0f,-145.0f);
glVertex2f(100.0f,-145.0f);
glEnd();

     glColor3ub(190,230,250); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(-120.0f,-130.0f);
glVertex2f(400.0f,-130.0f);
glVertex2f(100.0f,-125.0f);
glVertex2f(100.0f,-125.0f);
glEnd();


     glColor3ub(190,230,250); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(-180.0f,-120.0f);
glVertex2f(300.0f,-120.0f);
glVertex2f(144.0f,-115.0f);
glVertex2f(130.0f,-115.0f);
glEnd();

     glColor3ub(190,230,250); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(-50.0f,-100.0f);
glVertex2f(350.0f,-100.0f);
glVertex2f(183.0f,-95.0f);
glVertex2f(140.0f,-95.0f);
glEnd();

    glColor3ub(190,230,250); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(-150.0f,-100.0f);
glVertex2f(500.0f,-100.0f);
glVertex2f(60.0f,-95.0f);
glVertex2f(80.0f,-95.0f);
glEnd();

     glColor3ub(190,230,250); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(-166.0f,-80.0f);
glVertex2f(360.0f,-80.0f);
glVertex2f(50.0f,-75.0f);
glVertex2f(40.0f,-75.0f);
glEnd();

    glColor3ub(190,230,250); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(-178.0f,-60.0f);
glVertex2f(380.0f,-60.0f);
glVertex2f(50.0f,-55.0f);
glVertex2f(40.0f,-55.0f);
glEnd();

    glColor3ub(190,230,250); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(-190.0f,-50.0f);
glVertex2f(350.0f,-50.0f);
glVertex2f(48.0f,-45.0f);
glVertex2f(67.0f,-45.0f);
glEnd();
glPopMatrix();
}
void road_night()
{

//main structure
glColor3ub(110,110,110); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(0.0f,25.0f);
glVertex2f(200.0f,25.0f);
glVertex2f(200.0f,80.0f);
glVertex2f(0.0f,80.0f);
glEnd();

//road slide lines
glLineWidth(3.0f);
glColor3ub(255,255,255); // Clear the color buffer (background)

glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(0.0f,75.0f);
glVertex2f(200.0f,75.0f);
glVertex2f(200.0f,30.0f);
glVertex2f(0.0f,30.0f);
glEnd();

//middle dot lines
glLineWidth(3.0f);
glColor3ub(255,255,255); // Clear the color buffer (background)

glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(5.0f,52.5f);
glVertex2f(10.0f,52.5f);
glVertex2f(15.0f,52.5f);
glVertex2f(20.0f,52.5f);
glVertex2f(25.0f,52.5f);
glVertex2f(30.0f,52.5f);
glVertex2f(35.0f,52.5f);
glVertex2f(40.0f,52.5f);
glVertex2f(45.0f,52.5f);
glVertex2f(50.0f,52.5f);
glVertex2f(55.0f,52.5f);
glVertex2f(60.0f,52.5f);
glVertex2f(65.0f,52.5f);
glVertex2f(70.0f,52.5f);
glVertex2f(75.0f,52.5f);
glVertex2f(80.0f,52.5f);
glVertex2f(85.0f,52.5f);
glVertex2f(90.0f,52.5f);
glVertex2f(95.0f,52.5f);
glVertex2f(100.0f,52.5f);

glVertex2f(105.0f,52.5f);
glVertex2f(110.0f,52.5f);
glVertex2f(115.0f,52.5f);
glVertex2f(120.0f,52.5f);
glVertex2f(125.0f,52.5f);
glVertex2f(130.0f,52.5f);
glVertex2f(135.0f,52.5f);
glVertex2f(140.0f,52.5f);
glVertex2f(145.0f,52.5f);
glVertex2f(150.0f,52.5f);
glVertex2f(155.0f,52.5f);
glVertex2f(160.0f,52.5f);
glVertex2f(165.0f,52.5f);
glVertex2f(170.0f,52.5f);
glVertex2f(175.0f,52.5f);
glVertex2f(180.0f,52.5f);
glVertex2f(185.0f,52.5f);
glVertex2f(190.0f,52.5f);
glVertex2f(195.0f,52.5f);
glVertex2f(200.0f,52.5f);
glEnd();

}
void sky_night()
{
 //glColor3ub(34.0f,263.0f,223.0f); // Clear the color buffer (background)
 glColor3ub(36,52,71);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(0.0f,80.0f);
glVertex2f(200.0f,80.0f);
glVertex2f(200.0f,400.0f);
glVertex2f(0.0f,400.0f);
glEnd();

//star

 glColor3ub(255,255,255);
 glPointSize(4.0f);
glBegin(GL_POINTS);// Draw a Red 1x1 Square centered at origin
glVertex2f(5.0f,350.0f);
glVertex2f(15.0f,335.0f);
glVertex2f(25.0f,370.0f);
glVertex2f(35.0f,330.0f);
glVertex2f(45.0f,365.0f);
glVertex2f(55.0f,370.0f);
glVertex2f(65.0f,365.0f);
glVertex2f(75.0f,385.0f);
glVertex2f(85.0f,380.0f);
glVertex2f(95.0f,385.0f);
glVertex2f(105.0f,380.0f);
glVertex2f(115.0f,385.0f);
glVertex2f(125.0f,350.0f);
glVertex2f(135.0f,365.0f);
glVertex2f(145.0f,395.0f);
glVertex2f(155.0f,380.0f);
glVertex2f(165.0f,345.0f);
glVertex2f(175.0f,375.0f);
glVertex2f(185.0f,370.0f);
glVertex2f(195.0f,365.0f);
glVertex2f(10.0f,320.0f);
glVertex2f(20.0f,300.0f);
glVertex2f(30.0f,340.0f);
glVertex2f(40.0f,320.0f);
glVertex2f(50.0f,280.0f);
glVertex2f(60.0f,360.0f);
glVertex2f(70.0f,340.0f);
glVertex2f(140.0f,300.0f);
glVertex2f(150.0f,280.0f);
glVertex2f(160.0f,265.0f);
glVertex2f(180.0f,270.0f);
glVertex2f(170.0f,300.0f);
glVertex2f(130.0f,390.0f);

glVertex2f(190.0f,320.0f);
glEnd();

}



void bench_night()
{

    //left side 1st bench
    //upper part
    glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(6.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin

glVertex2f(40.0f,92.0f);
glVertex2f(48.0f,92.0f);
glEnd();

    //left leg
    glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(4.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin

glVertex2f(41.0f,80.0f);
glVertex2f(41.0f,92.0f);
glEnd();
    //right leg
    glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(4.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin

glVertex2f(47.0f,80.0f);
glVertex2f(47.0f,92.0f);
glEnd();


    //left side 2nd bench
    //upper part
    glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(6.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin

glVertex2f(50.0f,92.0f);
glVertex2f(58.0f,92.0f);
glEnd();

    //left leg
    glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(4.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin

glVertex2f(51.0f,80.0f);
glVertex2f(51.0f,92.0f);
glEnd();
    //right leg
    glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(4.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin

glVertex2f(57.0f,80.0f);
glVertex2f(57.0f,92.0f);
glEnd();


//right side 1st bench
    //upper part
    glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(6.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin

glVertex2f(172.0f,92.0f);
glVertex2f(180.0f,92.0f);
glEnd();

    //left leg
    glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(4.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin

glVertex2f(173.0f,80.0f);
glVertex2f(173.0f,92.0f);
glEnd();
    //right leg
    glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(4.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin

glVertex2f(179.0f,80.0f);
glVertex2f(179.0f,92.0f);
glEnd();
 //right side 2nd bench
    //upper part
    glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(6.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin

glVertex2f(182.0f,92.0f);
glVertex2f(190.0f,92.0f);
glEnd();

    //left leg
    glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(4.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin

glVertex2f(183.0f,80.0f);
glVertex2f(183.0f,92.0f);
glEnd();
    //right leg
    glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(4.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin

glVertex2f(189.0f,80.0f);
glVertex2f(189.0f,92.0f);
glEnd();
}
void lamppost_night()
{
    //left side lamppost
    //pillar
   glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(6.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(62.0f,80.0f);
glVertex2f(62.0f,162.5f);
glEnd();

    //light holder
   glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(6.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(62.0f,160.0f);
glVertex2f(54.0f,160.0f);
glEnd();

    //light
   glColor3ub(255,255,0); // Clear the color buffer (background)
    glLineWidth(7.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(54.0f,158.0f);
glVertex2f(57.0f,158.0f);
glEnd();

 //right side lamppost
    //pillar
   glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(6.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(168.0f,80.0f);
glVertex2f(168.0f,162.5f);
glEnd();

    //light holder
   glColor3ub(0,0,0); // Clear the color buffer (background)
    glLineWidth(6.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(168.0f,160.0f);
glVertex2f(176.0f,160.0f);
glEnd();

    //light
   glColor3ub(255,255,0); // Clear the color buffer (background)
    glLineWidth(7.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(176.0f,158.0f);
glVertex2f(173.0f,158.0f);
glEnd();
}
void left_car_night()
{

    //left first car
    //middle body
 glColor3ub(120,1,240); // Clear the color buffer (background)
 glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_left_car, 0.0f, 0.0f);//for move
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(5.0f,62.0f);
glVertex2f(23.0f,62.0f);
glVertex2f(23.0f,79.0f);
glVertex2f(5.0f,79.0f);
glEnd();

//front light
glColor3ub(255,255,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(21.5f,69.0f);
glVertex2f(23.0f,69.0f);
glVertex2f(23.0f,79.0f);
glVertex2f(21.5f,79.0f);
glEnd();

   //upper body
 glColor3ub(245,245,245); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(6.0f,79.0f);
glVertex2f(20.0f,79.0f);
glVertex2f(17.0f,97.0f);
glVertex2f(8.0f,97.0f);
glEnd();

//RIGHT 2D view
 glColor3ub(120,1,240); // Clear the color buffer (background)
glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
glVertex2f(20.0f,79.0f);
glVertex2f(23.0f,79.0f);
glVertex2f(19.0f,84.0f);
glEnd();

   //car glass left
 glColor3ub(0,0,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(7.0f,79.0f);
glVertex2f(12.5f,79.0f);
glVertex2f(12.5f,93.5f);
glVertex2f(8.5f,93.5f);
glEnd();

//car glass Right

glColor3ub(0,0,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(13.0f,79.0f);
glVertex2f(19.0f,79.0f);
glVertex2f(17.0f,93.5f);
glVertex2f(13.0f,93.5f);
glEnd();

//left back light
glColor3ub(255,0,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(5.0f,70.0f);
glVertex2f(6.0f,70.0f);
glVertex2f(6.0f,79.0f);
glVertex2f(5.0f,79.0f);
glEnd();

//rear wheel
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.7f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+9.3,y+62 );
        }

	glEnd();

	//front wheel
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.7f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+17,y+62 );
        }

	glEnd();
	glPopMatrix();

}


void left_car_1_night()  //id44
{

    //left first car
    //middle body
 glColor3ub(155,208,0); // Clear the color buffer (background)
 glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_left_car_1, 0.0f, 0.0f);//for move
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(105.0f,62.0f);
glVertex2f(123.0f,62.0f);
glVertex2f(123.0f,79.0f);
glVertex2f(105.0f,79.0f);
glEnd();

//front light
glColor3ub(255,255,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(121.5f,69.0f);
glVertex2f(123.0f,69.0f);
glVertex2f(123.0f,79.0f);
glVertex2f(121.5f,79.0f);
glEnd();

   //upper body
 glColor3ub(245,245,245); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(106.0f,79.0f);
glVertex2f(120.0f,79.0f);
glVertex2f(117.0f,97.0f);
glVertex2f(108.0f,97.0f);
glEnd();

//RIGHT 2D view
glColor3ub(155,208,0); // Clear the color buffer (background)
glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
glVertex2f(120.0f,79.0f);
glVertex2f(123.0f,79.0f);
glVertex2f(119.0f,84.0f);
glEnd();

   //car glass left
 glColor3ub(0,0,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(107.0f,79.0f);
glVertex2f(112.5f,79.0f);
glVertex2f(112.5f,93.5f);
glVertex2f(108.5f,93.5f);
glEnd();

//car glass Right

glColor3ub(0,0,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(113.0f,79.0f);
glVertex2f(119.0f,79.0f);
glVertex2f(117.0f,93.5f);
glVertex2f(113.0f,93.5f);
glEnd();

//left back light
glColor3ub(255,0,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(105.0f,70.0f);
glVertex2f(106.0f,70.0f);
glVertex2f(106.0f,79.0f);
glVertex2f(105.0f,79.0f);
glEnd();

//rear wheel
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.7f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+109.3,y+62 );
        }

	glEnd();

	//front wheel
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.7f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+117,y+62 );
        }

	glEnd();
	glPopMatrix();

}
void right_car_night()
{

    //right first car
    //middle body
 glColor3ub(6,38,230); // Clear the color buffer (background)
  glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_right_car, 0.0f, 0.0f);//for move
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(176.5f,39.0f);
glVertex2f(195.0f,39.0f);
glVertex2f(195.0f,58.0f);
glVertex2f(176.5f,58.0f);
glEnd();


//front light
glColor3ub(255,255,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(176.5f,48.0f);
glVertex2f(178.0f,48.0f);
glVertex2f(178.0f,58.0f);
glVertex2f(176.5f,58.0f);
glEnd();

//Left 2d View
glColor3ub(6,38,230); // Clear the color buffer (background)
glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
glVertex2f(176.5f,58.0f);
glVertex2f(180.0f,58.0f);
glVertex2f(183.0f,62.5f);
glEnd();




 //upper body
 glColor3ub(245,245,245); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(180.0f,58.0f);
glVertex2f(194.0f,58.0f);
glVertex2f(192.0f,78.0f);
glVertex2f(182.0f,78.0f);
glEnd();

   //car glass left
 glColor3ub(0,0,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(181.0f,57.0f);
glVertex2f(186.5f,57.0f);
glVertex2f(186.5f,74.0f);
glVertex2f(182.5f,74.0f);
glEnd();

 //car glass Right
 glColor3ub(0,0,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(187.0f,57.0f);
glVertex2f(193.0f,57.0f);
glVertex2f(191.5f,74.0f);
glVertex2f(187.0f,74.0f);
glEnd();

//Right back light
glColor3ub(255,0,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(194.0f,48.0f);
glVertex2f(195.0f,48.0f);
glVertex2f(195.0f,57.0f);
glVertex2f(194.0f,57.0f);
glEnd();

//front wheel
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.7f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+182.5,y+39 );
        }

	glEnd();

	//rear wheel
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.6f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+190.5,y+39 );
        }

	glEnd();
	glPopMatrix();

}

void right_car_1_night()
{

    //right first car
    //middle body
 glColor3ub(230,115,20); // Clear the color buffer (background)
  glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_right_car_1, 0.0f, 0.0f);//for move
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(76.5f,39.0f);
glVertex2f(95.0f,39.0f);
glVertex2f(95.0f,58.0f);
glVertex2f(76.5f,58.0f);
glEnd();

//front light
glColor3ub(255,255,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(76.5f,48.0f);
glVertex2f(78.0f,48.0f);
glVertex2f(78.0f,58.0f);
glVertex2f(76.5f,58.0f);
glEnd();

//Left 2d View
glColor3ub(242,126,24); // Clear the color buffer (background)
glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
glVertex2f(76.5f,58.0f);
glVertex2f(80.0f,58.0f);
glVertex2f(83.0f,62.5f);
glEnd();

 //upper body
 glColor3ub(245,245,245); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(80.0f,58.0f);
glVertex2f(94.0f,58.0f);
glVertex2f(92.0f,78.0f);
glVertex2f(82.0f,78.0f);
glEnd();

   //car glass left
 glColor3ub(0,0,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(81.0f,57.0f);
glVertex2f(86.5f,57.0f);
glVertex2f(86.5f,74.0f);
glVertex2f(82.5f,74.0f);
glEnd();

 //car glass Right
 glColor3ub(0,0,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(87.0f,57.0f);
glVertex2f(93.0f,57.0f);
glVertex2f(91.5f,74.0f);
glVertex2f(87.0f,74.0f);
glEnd();

//Right back light
glColor3ub(255,0,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(94.0f,48.0f);
glVertex2f(95.0f,48.0f);
glVertex2f(95.0f,57.0f);
glVertex2f(94.0f,57.0f);
glEnd();

//front wheel
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.7f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+82.5,y+39 );
        }

	glEnd();

	//rear wheel
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.6f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+90.5,y+39 );
        }

	glEnd();
	glPopMatrix();

}

void tree_night()
{
    //right side tree
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(130,180,40);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=10.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+160,y+85 );
        }

	glEnd();

		 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(130,180,40);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=13.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+182,y+103.5 );
        }

	glEnd();

		 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
             glColor3ub(130,180,40);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=15.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+170,y+85 );
        }

	glEnd();

	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
             glColor3ub(130,180,40);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=12.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+195,y+85 );
        }
	glEnd();

	//left side tree
	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
             glColor3ub(130,180,40);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=12.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+70,y+85 );
        }
	glEnd();

		 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
         glColor3ub(130,180,40);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=15.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+60,y+102 );
        }
	glEnd();


	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(130,180,40);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=15.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+46,y+122 );
        }
	glEnd();

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
              glColor3ub(130,180,40);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=15.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+40,y+95 );
        }
	glEnd();

	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(130,180,40);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=20.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+55,y+85 );
        }
	glEnd();

	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
             glColor3ub(130,180,40);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=15.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+45,y+85 );
        }
	glEnd();

		 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
              glColor3ub(130,180,40);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=15.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+35,y+85 );
        }
	glEnd();


		 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
              glColor3ub(130,180,40);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=15.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+25,y+85 );
        }
	glEnd();

		 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
          glColor3ub(130,180,40);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=18.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+25,y+100 );
        }
	glEnd();

			 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
           glColor3ub(130,180,40);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=15.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+15,y+85 );
        }
	glEnd();

				 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
             glColor3ub(130,180,40);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=15.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+5,y+85 );
        }
	glEnd();


}


void building_1_night()
{
   glColor3ub(0,102,102); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(80.0f,80.0f);
glVertex2f(115.0f,80.0f);
glVertex2f(115.0f,330.0f);
glVertex2f(80.0f,330.0f);
glEnd();

 glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,80.0f);
glVertex2f(115.0f,80.0f);
glVertex2f(115.0f,95.0f);
glVertex2f(78.0f,95.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,100.0f);
glVertex2f(115.0f,100.0f);
glVertex2f(115.0f,108.0f);
glVertex2f(78.0f,108.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,113.0f);
glVertex2f(115.0f,113.0f);
glVertex2f(115.0f,121.0f);
glVertex2f(78.0f,121.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,126.0f);
glVertex2f(115.0f,126.0f);
glVertex2f(115.0f,134.0f);
glVertex2f(78.0f,134.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,139.0f);
glVertex2f(115.0f,139.0f);
glVertex2f(115.0f,147.0f);
glVertex2f(78.0f,147.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,152.0f);
glVertex2f(115.0f,152.0f);
glVertex2f(115.0f,160.0f);
glVertex2f(78.0f,160.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,165.0f);
glVertex2f(115.0f,165.0f);
glVertex2f(115.0f,173.0f);
glVertex2f(78.0f,173.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,178.0f);
glVertex2f(115.0f,178.0f);
glVertex2f(115.0f,186.0f);
glVertex2f(78.0f,186.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,191.0f);
glVertex2f(115.0f,191.0f);
glVertex2f(115.0f,199.0f);
glVertex2f(78.0f,199.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,204.0f);
glVertex2f(115.0f,204.0f);
glVertex2f(115.0f,212.0f);
glVertex2f(78.0f,212.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,217.0f);
glVertex2f(115.0f,217.0f);
glVertex2f(115.0f,225.0f);
glVertex2f(78.0f,225.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,230.0f);
glVertex2f(115.0f,230.0f);
glVertex2f(115.0f,238.0f);
glVertex2f(78.0f,238.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,243.0f);
glVertex2f(115.0f,243.0f);
glVertex2f(115.0f,251.0f);
glVertex2f(78.0f,251.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,256.0f);
glVertex2f(115.0f,256.0f);
glVertex2f(115.0f,264.0f);
glVertex2f(78.0f,264.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,269.0f);
glVertex2f(115.0f,269.0f);
glVertex2f(115.0f,277.0f);
glVertex2f(78.0f,277.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,282.0f);
glVertex2f(115.0f,282.0f);
glVertex2f(115.0f,290.0f);
glVertex2f(78.0f,290.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,295.0f);
glVertex2f(115.0f,295.0f);
glVertex2f(115.0f,303.0f);
glVertex2f(78.0f,303.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,308.0f);
glVertex2f(115.0f,308.0f);
glVertex2f(115.0f,316.0f);
glVertex2f(78.0f,316.0f);
glEnd();

glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(78.0f,321.0f);
glVertex2f(115.0f,321.0f);
glVertex2f(115.0f,335.0f);
glVertex2f(78.0f,335.0f);
glEnd();

//shadow
glColor3ub(0,102,102); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(115.0f,80.0f);
glVertex2f(116.0f,80.0f);
glVertex2f(116.0f,330.0f);
glVertex2f(115.0f,335.0f);
glEnd();



}


void building_2_night()
{
    glColor3ub(244,164,96); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(91.0f,75.0f);
glVertex2f(100.0f,75.0f);
glVertex2f(100.0f,370.0f);
glVertex2f(91.0f,370.0f);
glEnd();

//1st window
  glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(91.5f,90.0f);
glVertex2f(93.5f,90.0f);
glVertex2f(93.5f,362.0f);
glVertex2f(91.5f,362.0f);
glEnd();

//2nd window
 glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(94.5f,90.0f);
glVertex2f(96.5f,90.0f);
glVertex2f(96.5f,362.0f);
glVertex2f(94.5f,362.0f);
glEnd();

//3rd window
 glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(97.5f,90.0f);
glVertex2f(99.5f,90.0f);
glVertex2f(99.5f,362.0f);
glVertex2f(97.5f,362.0f);
glEnd();

//left building
 glColor3ub(244,164,96); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(88.0f,75.0f);
glVertex2f(91.0f,75.0f);
glVertex2f(91.0f,340.0f);
glVertex2f(88.0f,340.0f);
glEnd();
//left  window
 glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,90.0f);
glVertex2f(90.5f,90.0f);
glVertex2f(90.5f,100.0f);
glVertex2f(89.0f,100.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,105.0f);
glVertex2f(90.5f,105.0f);
glVertex2f(90.5f,115.0f);
glVertex2f(89.0f,115.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,120.0f);
glVertex2f(90.5f,120.0f);
glVertex2f(90.5f,130.0f);
glVertex2f(89.0f,130.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,135.0f);
glVertex2f(90.5f,135.0f);
glVertex2f(90.5f,145.0f);
glVertex2f(89.0f,145.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,150.0f);
glVertex2f(90.5f,150.0f);
glVertex2f(90.5f,160.0f);
glVertex2f(89.0f,160.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,165.0f);
glVertex2f(90.5f,165.0f);
glVertex2f(90.5f,175.0f);
glVertex2f(89.0f,175.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,180.0f);
glVertex2f(90.5f,180.0f);
glVertex2f(90.5f,190.0f);
glVertex2f(89.0f,190.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,195.0f);
glVertex2f(90.5f,195.0f);
glVertex2f(90.5f,205.0f);
glVertex2f(89.0f,205.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,210.0f);
glVertex2f(90.5f,210.0f);
glVertex2f(90.5f,220.0f);
glVertex2f(89.0f,220.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,225.0f);
glVertex2f(90.5f,225.0f);
glVertex2f(90.5f,235.0f);
glVertex2f(89.0f,235.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,240.0f);
glVertex2f(90.5f,240.0f);
glVertex2f(90.5f,250.0f);
glVertex2f(89.0f,250.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,255.0f);
glVertex2f(90.5f,255.0f);
glVertex2f(90.5f,265.0f);
glVertex2f(89.0f,265.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,270.0f);
glVertex2f(90.5f,270.0f);
glVertex2f(90.5f,280.0f);
glVertex2f(89.0f,280.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,285.0f);
glVertex2f(90.5f,285.0f);
glVertex2f(90.5f,295.0f);
glVertex2f(89.0f,295.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,300.0f);
glVertex2f(90.5f,300.0f);
glVertex2f(90.5f,310.0f);
glVertex2f(89.0f,310.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(89.0f,315.0f);
glVertex2f(90.5f,315.0f);
glVertex2f(90.5f,325.0f);
glVertex2f(89.0f,325.0f);
glEnd();

///////Right Building/////////////

glColor3ub(244,164,96); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.0f,75.0f);
glVertex2f(103.0f,75.0f);
glVertex2f(103.0f,340.0f);
glVertex2f(100.0f,340.0f);
glEnd();

////Right window

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,90.0f);
glVertex2f(102.0f,90.0f);
glVertex2f(102.0f,100.0f);
glVertex2f(100.5f,100.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,105.0f);
glVertex2f(102.0f,105.0f);
glVertex2f(102.0f,115.0f);
glVertex2f(100.5f,115.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,120.0f);
glVertex2f(102.0f,120.0f);
glVertex2f(102.0f,130.0f);
glVertex2f(100.5f,130.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,135.0f);
glVertex2f(102.0f,135.0f);
glVertex2f(102.0f,145.0f);
glVertex2f(100.5f,145.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,150.0f);
glVertex2f(102.0f,150.0f);
glVertex2f(102.0f,160.0f);
glVertex2f(100.5f,160.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,165.0f);
glVertex2f(102.0f,165.0f);
glVertex2f(102.0f,175.0f);
glVertex2f(100.5f,175.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,180.0f);
glVertex2f(102.0f,180.0f);
glVertex2f(102.0f,190.0f);
glVertex2f(100.5f,190.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,195.0f);
glVertex2f(102.0f,195.0f);
glVertex2f(102.0f,205.0f);
glVertex2f(100.5f,205.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,210.0f);
glVertex2f(102.0f,210.0f);
glVertex2f(102.0f,220.0f);
glVertex2f(100.5f,220.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,225.0f);
glVertex2f(102.0f,225.0f);
glVertex2f(102.0f,235.0f);
glVertex2f(100.5f,235.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,240.0f);
glVertex2f(102.0f,240.0f);
glVertex2f(102.0f,250.0f);
glVertex2f(100.5f,250.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,255.0f);
glVertex2f(102.0f,255.0f);
glVertex2f(102.0f,265.0f);
glVertex2f(100.5f,265.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,270.0f);
glVertex2f(102.0f,270.0f);
glVertex2f(102.0f,280.0f);
glVertex2f(100.5f,280.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,285.0f);
glVertex2f(102.0f,285.0f);
glVertex2f(102.0f,295.0f);
glVertex2f(100.5f,295.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,300.0f);
glVertex2f(102.0f,300.0f);
glVertex2f(102.0f,310.0f);
glVertex2f(100.5f,310.0f);
glEnd();

glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.5f,315.0f);
glVertex2f(102.0f,315.0f);
glVertex2f(102.0f,325.0f);
glVertex2f(100.5f,325.0f);
glEnd();

////Right lower shadow
glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(103.0f,75.0f);
glVertex2f(104.0f,75.0f);
glVertex2f(104.0f,325.0f);
glVertex2f(103.0f,339.0f);
glEnd();

///// upper shadow
glColor3ub(205,133,63); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(100.0f,340.0f);
glVertex2f(101.0f,340.0f);
glVertex2f(101.0f,360.0f);
glVertex2f(100.0f,370.0f);
glEnd();


}

void building_3_night()
{
    glColor3ub(255,255,102); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(120.0f,80.0f);
glVertex2f(129.0f,80.0f);
glVertex2f(129.0f,230.0f);
glVertex2f(120.0f,230.0f);
glEnd();
//shadow
 glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(129.0f,80.0f);
glVertex2f(130.0f,80.0f);
glVertex2f(130.0f,225.0f);
glVertex2f(129.0f,230.0f);
glEnd();

//Middle black box
 glColor3ub(96,96,96); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(121.0f,230.0f);
glVertex2f(128.0f,230.0f);
glVertex2f(128.0f,240.0f);
glVertex2f(121.0f,240.0f);
glEnd();

//shadow
glColor3ub(64,64,64); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(121.0f,235.0f);
glVertex2f(128.0f,235.0f);
glVertex2f(128.0f,240.0f);
glVertex2f(121.0f,240.0f);
glEnd();

glColor3ub(64,64,64); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(128.0f,230.0f);
glVertex2f(129.0f,230.0f);
glVertex2f(129.0f,240.0f);
glVertex2f(128.0f,240.0f);
glEnd();


//upper bulding
glColor3ub(255,255,102); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(120.0f,240.0f);
glVertex2f(129.0f,240.0f);
glVertex2f(129.0f,300.0f);
glVertex2f(120.0f,300.0f);
glEnd();

//upper  shadow
glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(129.0f,240.0f);
glVertex2f(130.0f,240.0f);
glVertex2f(130.0f,295.0f);
glVertex2f(129.0f,300.0f);
glEnd();

//lower building left window
glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(121.0f,90.0f);
glVertex2f(124.0f,90.0f);
glVertex2f(124.0f,105.0f);
glVertex2f(121.0f,105.0f);
glEnd();

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(121.0f,110.0f);
glVertex2f(124.0f,110.0f);
glVertex2f(124.0f,125.0f);
glVertex2f(121.0f,125.0f);
glEnd();

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(121.0f,130.0f);
glVertex2f(124.0f,130.0f);
glVertex2f(124.0f,145.0f);
glVertex2f(121.0f,145.0f);
glEnd();

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(121.0f,150.0f);
glVertex2f(124.0f,150.0f);
glVertex2f(124.0f,165.0f);
glVertex2f(121.0f,165.0f);
glEnd();

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(121.0f,170.0f);
glVertex2f(124.0f,170.0f);
glVertex2f(124.0f,185.0f);
glVertex2f(121.0f,185.0f);
glEnd();

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(121.0f,190.0f);
glVertex2f(124.0f,190.0f);
glVertex2f(124.0f,205.0f);
glVertex2f(121.0f,205.0f);
glEnd();

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(121.0f,210.0f);
glVertex2f(124.0f,210.0f);
glVertex2f(124.0f,225.0f);
glVertex2f(121.0f,225.0f);
glEnd();

//Lower building right window

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(125.0f,90.0f);
glVertex2f(128.0f,90.0f);
glVertex2f(128.0f,105.0f);
glVertex2f(125.0f,105.0f);
glEnd();

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(125.0f,110.0f);
glVertex2f(128.0f,110.0f);
glVertex2f(128.0f,125.0f);
glVertex2f(125.0f,125.0f);
glEnd();

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(125.0f,130.0f);
glVertex2f(128.0f,130.0f);
glVertex2f(128.0f,145.0f);
glVertex2f(125.0f,145.0f);
glEnd();

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(125.0f,150.0f);
glVertex2f(128.0f,150.0f);
glVertex2f(128.0f,165.0f);
glVertex2f(125.0f,165.0f);
glEnd();

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(125.0f,170.0f);
glVertex2f(128.0f,170.0f);
glVertex2f(128.0f,185.0f);
glVertex2f(125.0f,185.0f);
glEnd();

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(125.0f,190.0f);
glVertex2f(128.0f,190.0f);
glVertex2f(128.0f,205.0f);
glVertex2f(125.0f,205.0f);
glEnd();

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(125.0f,210.0f);
glVertex2f(128.0f,210.0f);
glVertex2f(128.0f,225.0f);
glVertex2f(125.0f,225.0f);
glEnd();


//Upper building window
glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(121.0f,245.0f);
glVertex2f(128.0f,245.0f);
glVertex2f(128.0f,255.0f);
glVertex2f(121.0f,255.0f);
glEnd();

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(121.0f,260.0f);
glVertex2f(128.0f,260.0f);
glVertex2f(128.0f,270.0f);
glVertex2f(121.0f,270.0f);
glEnd();

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(121.0f,275.0f);
glVertex2f(128.0f,275.0f);
glVertex2f(128.0f,285.0f);
glVertex2f(121.0f,285.0f);
glEnd();

glColor3ub(255,215,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(121.0f,290.0f);
glVertex2f(128.0f,290.0f);
glVertex2f(128.0f,298.0f);
glVertex2f(121.0f,298.0f);
glEnd();


}

void building_4_night()
{
glColor3ub(200,100,230); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(108.0f,75.0f);
glVertex2f(121.0f,75.0f);
glVertex2f(121.0f,215.0f);
glVertex2f(108.0f,215.0f);
glEnd();

//upper
glColor3ub(238,130,238); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(108.0f,215.0f);
glVertex2f(121.0f,215.0f);
glVertex2f(123.0f,226.0f);
glVertex2f(110.0f,226.0f);
glEnd();

//Right shadow
glColor3ub(221,160,221); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(121.0f,75.0f);
glVertex2f(123.0f,75.0f);
glVertex2f(123.0f,226.0f);
glVertex2f(121.0f,215.0f);
glEnd();

//1st window
glColor3ub(221,160,221); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(109.0f,90.0f);
glVertex2f(110.0f,90.0f);
glVertex2f(110.0f,215.0f);
glVertex2f(109.0f,215.0f);
glEnd();

//2nd window
glColor3ub(221,160,221); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(111.0f,90.0f);
glVertex2f(112.0f,90.0f);
glVertex2f(112.0f,215.0f);
glVertex2f(111.0f,215.0f);
glEnd();

//3rd window
glColor3ub(221,160,221); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(113.0f,90.0f);
glVertex2f(114.0f,90.0f);
glVertex2f(114.0f,215.0f);
glVertex2f(113.0f,215.0f);
glEnd();

//4th window
glColor3ub(221,160,221); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(115.0f,90.0f);
glVertex2f(116.0f,90.0f);
glVertex2f(116.0f,215.0f);
glVertex2f(115.0f,215.0f);
glEnd();

//5th window
glColor3ub(221,160,221); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(117.0f,90.0f);
glVertex2f(118.0f,90.0f);
glVertex2f(118.0f,215.0f);
glVertex2f(117.0f,215.0f);
glEnd();

//6th window
glColor3ub(221,160,221); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(119.0f,90.0f);
glVertex2f(120.0f,90.0f);
glVertex2f(120.0f,215.0f);
glVertex2f(119.0f,215.0f);
glEnd();


}

void building_5_night() //Right side last building
{
    glColor3ub(0,102,102); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,80.0f);
glVertex2f(161.0f,80.0f);
glVertex2f(161.0f,250.0f);
glVertex2f(140.0f,250.0f);
glEnd();

//border
 glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,80.0f);
glVertex2f(161.0f,80.0f);
glVertex2f(161.0f,90.0f);
glVertex2f(140.0f,90.0f);
glEnd();

 glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,95.0f);
glVertex2f(161.0f,95.0f);
glVertex2f(161.0f,98.0f);
glVertex2f(140.0f,98.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,102.0f);
glVertex2f(161.0f,102.0f);
glVertex2f(161.0f,105.0f);
glVertex2f(140.0f,105.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,109.0f);
glVertex2f(161.0f,109.0f);
glVertex2f(161.0f,112.0f);
glVertex2f(140.0f,112.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,116.0f);
glVertex2f(161.0f,116.0f);
glVertex2f(161.0f,119.0f);
glVertex2f(140.0f,119.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,123.0f);
glVertex2f(161.0f,123.0f);
glVertex2f(161.0f,126.0f);
glVertex2f(140.0f,126.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,130.0f);
glVertex2f(161.0f,130.0f);
glVertex2f(161.0f,133.0f);
glVertex2f(140.0f,133.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,137.0f);
glVertex2f(161.0f,137.0f);
glVertex2f(161.0f,140.0f);
glVertex2f(140.0f,140.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,144.0f);
glVertex2f(161.0f,144.0f);
glVertex2f(161.0f,147.0f);
glVertex2f(140.0f,147.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,151.0f);
glVertex2f(161.0f,151.0f);
glVertex2f(161.0f,154.0f);
glVertex2f(140.0f,154.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,158.0f);
glVertex2f(161.0f,158.0f);
glVertex2f(161.0f,161.0f);
glVertex2f(140.0f,161.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,165.0f);
glVertex2f(161.0f,165.0f);
glVertex2f(161.0f,168.0f);
glVertex2f(140.0f,168.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,172.0f);
glVertex2f(161.0f,172.0f);
glVertex2f(161.0f,175.0f);
glVertex2f(140.0f,175.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,179.0f);
glVertex2f(161.0f,179.0f);
glVertex2f(161.0f,182.0f);
glVertex2f(140.0f,182.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,186.0f);
glVertex2f(161.0f,186.0f);
glVertex2f(161.0f,189.0f);
glVertex2f(140.0f,189.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,193.0f);
glVertex2f(161.0f,193.0f);
glVertex2f(161.0f,196.0f);
glVertex2f(140.0f,196.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,200.0f);
glVertex2f(161.0f,200.0f);
glVertex2f(161.0f,203.0f);
glVertex2f(140.0f,203.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,207.0f);
glVertex2f(161.0f,207.0f);
glVertex2f(161.0f,210.0f);
glVertex2f(140.0f,210.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,214.0f);
glVertex2f(161.0f,214.0f);
glVertex2f(161.0f,217.0f);
glVertex2f(140.0f,217.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,221.0f);
glVertex2f(161.0f,221.0f);
glVertex2f(161.0f,224.0f);
glVertex2f(140.0f,224.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,228.0f);
glVertex2f(161.0f,228.0f);
glVertex2f(161.0f,231.0f);
glVertex2f(140.0f,231.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,236.0f);
glVertex2f(161.0f,236.0f);
glVertex2f(161.0f,239.0f);
glVertex2f(140.0f,239.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,244.0f);
glVertex2f(161.0f,244.0f);
glVertex2f(161.0f,250.0f);
glVertex2f(140.0f,250.0f);
glEnd();

//Right shadow
glColor3ub(0,102,102); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(161.0f,80.0f);
glVertex2f(162.5f,80.0f);
glVertex2f(162.5f,245.0f);
glVertex2f(161.0f,250.0f);
glEnd();


}
//New portion finish_1 phase


//New portion start

void building_6_night()
{
glColor3ub(233,150,122); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(130.0f,75.0f);
glVertex2f(149.0f,75.0f);
glVertex2f(149.0f,200.0f);
glVertex2f(130.0f,200.0f);
glEnd();

//lower white border
glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(130.0f,75.0f);
glVertex2f(132.0f,75.0f);
glVertex2f(132.0f,200.0f);
glVertex2f(130.0f,200.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(133.0f,75.0f);
glVertex2f(134.0f,75.0f);
glVertex2f(134.0f,200.0f);
glVertex2f(133.0f,200.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(135.0f,75.0f);
glVertex2f(136.0f,75.0f);
glVertex2f(136.0f,200.0f);
glVertex2f(135.0f,200.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(137.0f,75.0f);
glVertex2f(138.0f,75.0f);
glVertex2f(138.0f,200.0f);
glVertex2f(137.0f,200.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(139.0f,75.0f);
glVertex2f(140.0f,75.0f);
glVertex2f(140.0f,200.0f);
glVertex2f(139.0f,200.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(141.0f,75.0f);
glVertex2f(142.0f,75.0f);
glVertex2f(142.0f,200.0f);
glVertex2f(141.0f,200.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(143.0f,75.0f);
glVertex2f(144.0f,75.0f);
glVertex2f(144.0f,200.0f);
glVertex2f(143.0f,200.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(145.0f,75.0f);
glVertex2f(146.0f,75.0f);
glVertex2f(146.0f,200.0f);
glVertex2f(145.0f,200.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(147.0f,75.0f);
glVertex2f(148.0f,75.0f);
glVertex2f(148.0f,200.0f);
glVertex2f(147.0f,200.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(149.0f,75.0f);
glVertex2f(150.5f,75.0f);
glVertex2f(150.5f,200.0f);
glVertex2f(149.0f,200.0f);
glEnd();

//Right shadow
glColor3ub(250,128,114); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(150.5f,75.0f);
glVertex2f(151.5f,75.0f);
glVertex2f(151.5f,195.0f);
glVertex2f(150.5f,200.0f);
glEnd();


//2nd building
glColor3ub(233,150,122); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(132.0f,200.0f);
glVertex2f(149.0f,200.0f);
glVertex2f(149.0f,300.0f);
glVertex2f(132.0f,300.0f);
glEnd();

//white border
glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(131.5f,200.0f);
glVertex2f(133.0f,200.0f);
glVertex2f(133.0f,300.0f);
glVertex2f(131.5f,300.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(134.0f,200.0f);
glVertex2f(135.0f,200.0f);
glVertex2f(135.0f,300.0f);
glVertex2f(134.0f,300.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(136.0f,200.0f);
glVertex2f(137.0f,200.0f);
glVertex2f(137.0f,300.0f);
glVertex2f(136.0f,300.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(138.0f,200.0f);
glVertex2f(139.0f,200.0f);
glVertex2f(139.0f,300.0f);
glVertex2f(138.0f,300.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,200.0f);
glVertex2f(141.0f,200.0f);
glVertex2f(141.0f,300.0f);
glVertex2f(140.0f,300.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(142.0f,200.0f);
glVertex2f(143.0f,200.0f);
glVertex2f(143.0f,300.0f);
glVertex2f(142.0f,300.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(144.0f,200.0f);
glVertex2f(145.0f,200.0f);
glVertex2f(145.0f,300.0f);
glVertex2f(144.0f,300.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(146.0f,200.0f);
glVertex2f(147.0f,200.0f);
glVertex2f(147.0f,300.0f);
glVertex2f(146.0f,300.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(148.0f,200.0f);
glVertex2f(149.5f,200.0f);
glVertex2f(149.5f,300.0f);
glVertex2f(148.0f,300.0f);
glEnd();

//Right shadow
glColor3ub(250,128,114); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(149.5f,200.0f);
glVertex2f(150.25f,200.0f);
glVertex2f(150.25f,295.0f);
glVertex2f(149.5f,300.0f);
glEnd();


//3rd building

glColor3ub(233,150,122); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(133.0f,300.0f);
glVertex2f(148.0f,300.0f);
glVertex2f(148.0f,380.0f);
glVertex2f(133.0f,380.0f);
glEnd();

//White border
glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(132.5f,300.0f);
glVertex2f(134.0f,300.0f);
glVertex2f(134.0f,380.0f);
glVertex2f(132.5f,380.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(135.0f,300.0f);
glVertex2f(136.0f,300.0f);
glVertex2f(136.0f,380.0f);
glVertex2f(135.0f,380.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(137.0f,300.0f);
glVertex2f(138.0f,300.0f);
glVertex2f(138.0f,380.0f);
glVertex2f(137.0f,380.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(139.0f,300.0f);
glVertex2f(140.0f,300.0f);
glVertex2f(140.0f,380.0f);
glVertex2f(139.0f,380.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(141.0f,300.0f);
glVertex2f(142.0f,300.0f);
glVertex2f(142.0f,380.0f);
glVertex2f(141.0f,380.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(143.0f,300.0f);
glVertex2f(144.0f,300.0f);
glVertex2f(144.0f,380.0f);
glVertex2f(143.0f,380.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(145.0f,300.0f);
glVertex2f(146.0f,300.0f);
glVertex2f(146.0f,380.0f);
glVertex2f(145.0f,380.0f);
glEnd();

glColor3ub(255,255,225); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(147.0f,300.0f);
glVertex2f(148.5f,300.0f);
glVertex2f(148.5f,380.0f);
glVertex2f(147.0f,380.0f);
glEnd();

//Right shadow
glColor3ub(250,128,114); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(148.5f,300.0f);
glVertex2f(149.25f,300.0f);
glVertex2f(149.25f,375.0f);
glVertex2f(148.5f,380.0f);
glEnd();

}

void building_7_night()
{
    glColor3ub(255,255,102); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(70.0f,75.0f);
glVertex2f(83.0f,75.0f);
glVertex2f(83.0f,250.0f);
glVertex2f(70.0f,250.0f);
glEnd();

//left 1st line window
 glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(71.0f,90.0f);
glVertex2f(73.0f,90.0f);
glVertex2f(73.0f,100.0f);
glVertex2f(71.0f,100.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(71.0f,105.0f);
glVertex2f(73.0f,105.0f);
glVertex2f(73.0f,115.0f);
glVertex2f(71.0f,115.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(71.0f,120.0f);
glVertex2f(73.0f,120.0f);
glVertex2f(73.0f,130.0f);
glVertex2f(71.0f,130.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(71.0f,135.0f);
glVertex2f(73.0f,135.0f);
glVertex2f(73.0f,145.0f);
glVertex2f(71.0f,145.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(71.0f,150.0f);
glVertex2f(73.0f,150.0f);
glVertex2f(73.0f,160.0f);
glVertex2f(71.0f,160.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(71.0f,165.0f);
glVertex2f(73.0f,165.0f);
glVertex2f(73.0f,175.0f);
glVertex2f(71.0f,175.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(71.0f,180.0f);
glVertex2f(73.0f,180.0f);
glVertex2f(73.0f,190.0f);
glVertex2f(71.0f,190.0f);
glEnd();


glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(71.0f,195.0f);
glVertex2f(73.0f,195.0f);
glVertex2f(73.0f,205.0f);
glVertex2f(71.0f,205.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(71.0f,210.0f);
glVertex2f(73.0f,210.0f);
glVertex2f(73.0f,220.0f);
glVertex2f(71.0f,220.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(71.0f,225.0f);
glVertex2f(73.0f,225.0f);
glVertex2f(73.0f,235.0f);
glVertex2f(71.0f,235.0f);
glEnd();

//left 2nd line

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(74.0f,90.0f);
glVertex2f(76.0f,90.0f);
glVertex2f(76.0f,100.0f);
glVertex2f(74.0f,100.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(74.0f,105.0f);
glVertex2f(76.0f,105.0f);
glVertex2f(76.0f,115.0f);
glVertex2f(74.0f,115.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(74.0f,120.0f);
glVertex2f(76.0f,120.0f);
glVertex2f(76.0f,130.0f);
glVertex2f(74.0f,130.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(74.0f,135.0f);
glVertex2f(76.0f,135.0f);
glVertex2f(76.0f,145.0f);
glVertex2f(74.0f,145.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(74.0f,150.0f);
glVertex2f(76.0f,150.0f);
glVertex2f(76.0f,160.0f);
glVertex2f(74.0f,160.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(74.0f,165.0f);
glVertex2f(76.0f,165.0f);
glVertex2f(76.0f,175.0f);
glVertex2f(74.0f,175.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(74.0f,180.0f);
glVertex2f(76.0f,180.0f);
glVertex2f(76.0f,190.0f);
glVertex2f(74.0f,190.0f);
glEnd();


glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(74.0f,195.0f);
glVertex2f(76.0f,195.0f);
glVertex2f(76.0f,205.0f);
glVertex2f(74.0f,205.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(74.0f,210.0f);
glVertex2f(76.0f,210.0f);
glVertex2f(76.0f,220.0f);
glVertex2f(74.0f,220.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(74.0f,225.0f);
glVertex2f(76.0f,225.0f);
glVertex2f(76.0f,235.0f);
glVertex2f(74.0f,235.0f);
glEnd();

//3rd line window

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(77.0f,90.0f);
glVertex2f(79.0f,90.0f);
glVertex2f(79.0f,100.0f);
glVertex2f(77.0f,100.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(77.0f,105.0f);
glVertex2f(79.0f,105.0f);
glVertex2f(79.0f,115.0f);
glVertex2f(77.0f,115.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(77.0f,120.0f);
glVertex2f(79.0f,120.0f);
glVertex2f(79.0f,130.0f);
glVertex2f(77.0f,130.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(77.0f,135.0f);
glVertex2f(79.0f,135.0f);
glVertex2f(79.0f,145.0f);
glVertex2f(77.0f,145.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(77.0f,150.0f);
glVertex2f(79.0f,150.0f);
glVertex2f(79.0f,160.0f);
glVertex2f(77.0f,160.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(77.0f,165.0f);
glVertex2f(79.0f,165.0f);
glVertex2f(79.0f,175.0f);
glVertex2f(77.0f,175.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(77.0f,180.0f);
glVertex2f(79.0f,180.0f);
glVertex2f(79.0f,190.0f);
glVertex2f(77.0f,190.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(77.0f,195.0f);
glVertex2f(79.0f,195.0f);
glVertex2f(79.0f,205.0f);
glVertex2f(77.0f,205.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(77.0f,210.0f);
glVertex2f(79.0f,210.0f);
glVertex2f(79.0f,220.0f);
glVertex2f(77.0f,220.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(77.0f,225.0f);
glVertex2f(79.0f,225.0f);
glVertex2f(79.0f,235.0f);
glVertex2f(77.0f,235.0f);
glEnd();

//4th line window
glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(80.0f,90.0f);
glVertex2f(82.0f,90.0f);
glVertex2f(82.0f,100.0f);
glVertex2f(80.0f,100.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(80.0f,105.0f);
glVertex2f(82.0f,105.0f);
glVertex2f(82.0f,115.0f);
glVertex2f(80.0f,115.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(80.0f,120.0f);
glVertex2f(82.0f,120.0f);
glVertex2f(82.0f,130.0f);
glVertex2f(80.0f,130.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(80.0f,135.0f);
glVertex2f(82.0f,135.0f);
glVertex2f(82.0f,145.0f);
glVertex2f(80.0f,145.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(80.0f,150.0f);
glVertex2f(82.0f,150.0f);
glVertex2f(82.0f,160.0f);
glVertex2f(80.0f,160.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(80.0f,165.0f);
glVertex2f(82.0f,165.0f);
glVertex2f(82.0f,175.0f);
glVertex2f(80.0f,175.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(80.0f,180.0f);
glVertex2f(82.0f,180.0f);
glVertex2f(82.0f,190.0f);
glVertex2f(80.0f,190.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(80.0f,195.0f);
glVertex2f(82.0f,195.0f);
glVertex2f(82.0f,205.0f);
glVertex2f(80.0f,205.0f);
glEnd();

glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(80.0f,210.0f);
glVertex2f(82.0f,210.0f);
glVertex2f(82.0f,220.0f);
glVertex2f(80.0f,220.0f);
glEnd();


glColor3ub(51,255,153); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(80.0f,225.0f);
glVertex2f(82.0f,225.0f);
glVertex2f(82.0f,235.0f);
glVertex2f(80.0f,235.0f);
glEnd();

//Right shadow

glColor3ub(230,200,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(83.0f,75.0f);
glVertex2f(84.0f,75.0f);
glVertex2f(84.0f,240.0f);
glVertex2f(83.0f,250.0f);
glEnd();

//upper white box
glColor3ub(255,255,255); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(72.0f,250.0f);
glVertex2f(76.0f,250.0f);
glVertex2f(76.0f,265.0f);
glVertex2f(72.0f,265.0f);
glEnd();

//upper white box right shadow
glColor3ub(128,128,128); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(76.0f,250.0f);
glVertex2f(76.5f,250.0f);
glVertex2f(76.5f,260.0f);
glVertex2f(76.0f,265.0f);
glEnd();



}

//New portion finish 2 phase

void cloud_night()
{
    //cloud start
     glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_cloud, 0.0f, 0.0f);//for move
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(200,200,200);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=9.0f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+22,y+302 );
        }

	glEnd();

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
          glColor3ub(200,200,200);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=11.0f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+30,y+290 );
        }
    glEnd();

    	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
          glColor3ub(200,200,200);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=9.0f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+40,y+302 );
        }
    glEnd();

     	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(200,200,200);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=10.0f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+35,y+312 );
        }
    glEnd();
    glPopMatrix();
//cloud end

}
void moon()
{
    	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(255,255,255);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=8.0f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+185,y+292 );
        }
    glEnd();
}

void boat_night()
{

    //body
       glColor3ub(139,69,19); // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_boat, 0.0f, 0.0f);//for move
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(60.0f,-70.0f);
glVertex2f(80.0f,-70.0f);
glVertex2f(90.0f,-30.0f);
glVertex2f(50.0f,-30.0f);
glEnd();


//boat pal holder
 glColor3ub(0,0,0);
 glLineWidth(7.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(60.0f,-30.0f);
glVertex2f(60.0f,50.0f);
glEnd();

//boat pal
 glColor3ub(138,43,226);
 glLineWidth(7.0f);
glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
glVertex2f(60.0f,-25.0f);
glVertex2f(80.0f,-25.0f);
glVertex2f(60.0f,45.0f);
glEnd();
glPopMatrix();
}

void boat_1_night()
{

    //body
       glColor3ub(180,35,50); // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_boat_1, 0.0f, 0.0f);//for move
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(120.0f,-85.0f);
glVertex2f(140.0f,-85.0f);
glVertex2f(150.0f,-45.0f);
glVertex2f(110.0f,-45.0f);
glEnd();


//boat pal holder
 glColor3ub(0,0,0);
 glLineWidth(7.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,-45.0f);
glVertex2f(140.0f,35.0f);
glEnd();

//boat pal
 glColor3ub(240,15,130);
 glLineWidth(7.0f);
glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
glVertex2f(140.0f,-40.0f);
glVertex2f(120.0f,-40.0f);
glVertex2f(140.0f,30.0f);
glEnd();
glPopMatrix();
}
void ship_night()
{
    //bottom red
    glColor3ub(230,0,0); // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_ship_container, 0.0f, 0.0f);//for move
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(10.0f,-170.0f);
glVertex2f(110.0f,-170.0f);
glVertex2f(110.0f,-140.0f);
glVertex2f(10.0f,-140.0f);
glEnd();

//middle white
  glColor3ub(245,245,245); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(10.0f,-140.0f);
glVertex2f(110.0f,-140.0f);
glVertex2f(110.0f,-120.0f);
glVertex2f(10.0f,-120.0f);
glEnd();

//deck room
glColor3ub(65,120,170); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(18.0f,-120.0f);
glVertex2f(40.0f,-120.0f);
glVertex2f(40.0f,-50.0f);
glVertex2f(18.0f,-50.0f);
glEnd();

//deck room 2D
glColor3ub(68,58,130); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(40.0f,-120.0f);
glVertex2f(41.0f,-120.0f);
glVertex2f(41.0f,-50.0f);
glVertex2f(40.0f,-50.0f);
glEnd();

//deck room first left window

glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(245,240,175);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.8f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+22,y-60 );
        }

	glEnd();

	//deck room second left window

glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
           glColor3ub(245,240,175);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.8f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+29,y-60 );
        }

	glEnd();
	//deck room third left window
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
           glColor3ub(245,240,175);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.8f;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+36,y-60 );
        }

	glEnd();

//control room
glColor3ub(245,245,245); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(23.0f,-50.0f);
glVertex2f(40.0f,-50.0f);
glVertex2f(42.0f,10.0f);
glVertex2f(23.0f,10.0f);
glEnd();

//control room 2D
glColor3ub(120,120,120); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(40.0f,-50.0f);
glVertex2f(41.0f,-50.0f);
glVertex2f(42.0f,10.0f);
glVertex2f(41.0f,10.0f);
glEnd();

//control room left first window
glColor3ub(0,200,202); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(24.0f,-10.0f);
glVertex2f(27.0f,-10.0f);
glVertex2f(27.0f,8.0f);
glVertex2f(24.0f,8.0f);
glEnd();

//control room left second window
glColor3ub(0,200,202);// Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(28.0f,-10.0f);
glVertex2f(31.0f,-10.0f);
glVertex2f(31.0f,8.0f);
glVertex2f(28.0f,8.0f);
glEnd();

//control room left third window
glColor3ub(0,200,202); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(32.0f,-10.0f);
glVertex2f(35.0f,-10.0f);
glVertex2f(35.0f,8.0f);
glVertex2f(32.0f,8.0f);
glEnd();

//control room left fourth window
glColor3ub(0,200,202); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glVertex2f(36.0f,-10.0f);
glVertex2f(39.5f,-10.0f);
glVertex2f(40.0f,8.0f);
glVertex2f(36.0f,8.0f);
glEnd();

//control room roof top
glColor3ub(65,120,170); // Clear the color buffer (background)
glLineWidth(12.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(21.0f,10.0f);
glVertex2f(43.0f,10.0f);
glEnd();

//control room light holder
glColor3ub(192,192,192); // Clear the color buffer (background)
glLineWidth(8.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(33.0f,13.0f);
glVertex2f(33.0f,55.0f);
glEnd();


//control room top light
glColor3ub(255,255,0); // Clear the color buffer (background)
glLineWidth(8.0f);
glBegin(GL_TRIANGLES);// Draw a Red 1x1 Square centered at origin
glVertex2f(42.0f,47.0f);
glVertex2f(33.0f,33.0f);
glVertex2f(42.0f,19.0f);

glEnd();
//exhaustor white part
glColor3ub(245,245,245); // Clear the color buffer (background)
glBegin(GL_QUADS);// Draw a Red 1x1 Square centered at origin
glVertex2f(25.0f,15.0f);
glVertex2f(30.0f,15.0f);
glVertex2f(30.0f,40.0f);
glVertex2f(25.0f,40.0f);
glEnd();


//exhaustor black part
glColor3ub(0,0,0); // Clear the color buffer (background)
glBegin(GL_QUADS);// Draw a Red 1x1 Square centered at origin
glVertex2f(25.0f,40.0f);
glVertex2f(30.0f,40.0f);
glVertex2f(30.0f,45.0f);
glVertex2f(25.0f,50.0f);
glEnd();

//control room front glass
glColor3ub(0,200,202); // Clear the color buffer (background)
glLineWidth(6.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(41.0f,-16.0f);
glVertex2f(41.5f,2.0f);

glEnd();


//deck roof top
glColor3ub(245,245,245); // Clear the color buffer (background)
glLineWidth(12.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin

glVertex2f(13.0f,-50.0f);
glVertex2f(43.0f,-50.0f);
glEnd();


//deck roof top 2D
glColor3ub(120,120,120); // Clear the color buffer (background)
glLineWidth(12.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin

glVertex2f(43.0f,-50.0f);
glVertex2f(44.0f,-50.0f);
glEnd();

//body to deck line1
glColor3ub(245,245,245); // Clear the color buffer (background)
glLineWidth(15.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(14.0f,-100.0f);
glVertex2f(14.0f,-50.0f);

glEnd();
//body to deck line2
glColor3ub(245,245,245); // Clear the color buffer (background)
glLineWidth(10.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
glVertex2f(18.0f,-100.0f);
glVertex2f(18.0f,-50.0f);

glEnd();


//upper white tail part
glColor3ub(245,245,245); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin

glVertex2f(10.0f,-120.0f);
glVertex2f(40.0f,-120.0f);
glVertex2f(35.0f,-100.0f);
glVertex2f(10.0f,-100.0f);
glEnd();

//upper white front part
glColor3ub(245,245,245); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin

glVertex2f(85.0f,-120.0f);
glVertex2f(110.0f,-120.0f);
glVertex2f(120.0f,-90.0f);
glVertex2f(90.0f,-90.0f);
glEnd();

glPopMatrix();

}

void containers_night()
{
    //left first container
    glColor3ub(0,0,245); // Clear the color buffer (background)
     glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_ship_container, 0.0f, 0.0f);//for move
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin

glVertex2f(45.0f,-120.0f);
glVertex2f(62.0f,-120.0f);
glVertex2f(62.0f,-85.0f);
glVertex2f(45.0f,-85.0f);
glEnd();

  //left first container 2D
    glColor3ub(0,0,100); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin

glVertex2f(62.0f,-85.0f);
glVertex2f(63.0f,-85.0f);
glVertex2f(63.0f,-120.0f);
glVertex2f(62.0f,-120.0f);
glEnd();


//left second container
    glColor3ub(245,160,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin

glVertex2f(65.0f,-120.0f);
glVertex2f(82.0f,-120.0f);
glVertex2f(82.0f,-85.0f);
glVertex2f(65.0f,-85.0f);
glEnd();

  //left second container 2D
    glColor3ub(150,105,0); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin

glVertex2f(82.0f,-85.0f);
glVertex2f(83.0f,-85.0f);
glVertex2f(83.0f,-120.0f);
glVertex2f(82.0f,-120.0f);
glEnd();


//top container
    glColor3ub(245,120,75); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin

glVertex2f(56.5f,-85.0f);
glVertex2f(73.5f,-85.0f);
glVertex2f(73.5f,-50.0f);
glVertex2f(56.5f,-50.0f);
glEnd();

  //top container 2D
    glColor3ub(130,70,50); // Clear the color buffer (background)
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin

glVertex2f(73.5f,-50.0f);
glVertex2f(74.5f,-50.0f);
glVertex2f(74.5f,-85.0f);
glVertex2f(73.5f,-85.0f);
glEnd();
glPopMatrix();

}


//Windmill
//first blade

void first_blade_night()
{

glColor3ub(165,42,42);
//glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(16.0f,185.0f,0.0f);
glRotatef(angle_1, 0.0f, 0.0f,1.0f);
glTranslatef(-16.0f,-185.0f,0.0f);
glBegin(GL_QUADS);
glVertex2f(15.0f, 178.0f);
glVertex2f(17.0f, 178.0f);
glVertex2f(17.0f, 192.0f);
glVertex2f(15.0f, 192.0);
glEnd();
glPopMatrix();
}

//Windmill
//second blade
void second_blade_night()
{

glColor3ub(165,42,42);
//glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(16.0f,185.0f,0.0f);
glRotatef(angle_2, 0.0f, 0.0f,1.0f);
glTranslatef(-16.0f,-185.0f,0.0f);
glBegin(GL_QUADS);
glVertex2f(9.0f, 184.0f);
glVertex2f(23.0f, 184.0f);
glVertex2f(23.0f, 186.0f);
glVertex2f(9.0f, 186.0f);
glEnd();
glPopMatrix();
}


//windmill
void windmill_stand_night()
{
glColor3ub(165,42,42);
glBegin(GL_QUADS);
glVertex2f(15.5f, 80.0f);
glVertex2f(16.5f, 80.0f);
glVertex2f(16.5f, 185.0f);
glVertex2f(15.5f, 185.0f);
glEnd();
}


//second Windmill
//first blade

void right_first_blade_night()
{

glColor3ub(165,42,42);
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(33.0f,185.0f,0.0f);
glRotatef(angle_1, 0.0f, 0.0f,1.0f);
glTranslatef(-33.0f,-185.0f,0.0f);
glBegin(GL_QUADS);
glVertex2f(32.0f, 178.0f);
glVertex2f(34.0f, 178.0f);
glVertex2f(34.0f, 192.0f);
glVertex2f(32.0f, 192.0);

glEnd();
glPopMatrix();
}

//Windmill
//second blade

void right_second_blade_night()
{

glColor3ub(165,42,42);
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(33.0f,185.0f,0.0f);
glRotatef(angle_2, 0.0f, 0.0f,1.0f);
glTranslatef(-33.0f,-185.0f,0.0f);
glBegin(GL_QUADS);
glVertex2f(26.0f, 184.0f);
glVertex2f(40.0f, 184.0f);
glVertex2f(40.0f, 186.0f);
glVertex2f(26.0f, 186.0f);

glEnd();
glPopMatrix();
}


//windmill
void right_windmill_stand_night()
{
glColor3ub(165,42,42);
glBegin(GL_QUADS);
glVertex2f(32.5f, 80.0f);
glVertex2f(33.5f, 80.0f);
glVertex2f(33.5f, 185.0f);
glVertex2f(32.5f, 185.0f);
glEnd();
}

//Airplane
void air_plane_night()
{
    //main body
    glColor3ub(60,95,215);
       glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_airplane, 0.0f, 0.0f);//for move
glBegin(GL_QUADS);
glVertex2f(160.0f, 318.0f);
glVertex2f(183.0f, 318.0f);
glVertex2f(183.0f, 343.0f);
glVertex2f(160.0f, 343.0f);
glEnd();

//body light

 glColor3ub(255,255,255);
glBegin(GL_QUADS);
glVertex2f(159.5f, 314.5f);
glVertex2f(160.5f, 314.5f);
glVertex2f(160.5f, 318.0f);
glVertex2f(159.5f, 318.0f);
glEnd();

 glColor3ub(255,255,255);
glBegin(GL_QUADS);
glVertex2f(178.0f, 314.5f);
glVertex2f(179.0f, 314.5f);
glVertex2f(179.0f, 318.0f);
glVertex2f(178.0f, 318.0f);
glEnd();


 glColor3ub(255,255,255);
glBegin(GL_QUADS);
glVertex2f(180.0f, 314.5f);
glVertex2f(181.0f, 314.5f);
glVertex2f(181.0f, 318.0f);
glVertex2f(180.0f, 318.0f);
glEnd();

 glColor3ub(255,0,0);
glBegin(GL_QUADS);
glVertex2f(183.0f, 358.5f);
glVertex2f(184.0f, 358.5f);
glVertex2f(184.0f, 364.0f);
glVertex2f(183.0f, 364.0f);
glEnd();

//front part bottom
    glColor3ub(70,0,115);
glBegin(GL_QUADS);
glVertex2f(160.0f, 330.5f);
glVertex2f(155.0f, 330.5f);
glVertex2f(158.0f, 318.0f);
glVertex2f(160.0f, 318.0f);
glEnd();

//front part upper
 glColor3ub(70,0,115);
glBegin(GL_QUADS);
glVertex2f(155.0f, 330.5f);
glVertex2f(160.0f, 330.5f);
glVertex2f(160.0f, 343.0f);
glVertex2f(158.0f, 343.0f);
glEnd();

//left wings
glColor3ub(245,155,0);
glBegin(GL_QUADS);
glVertex2f(163.0f, 330.5f);
glVertex2f(168.0f, 298.0f);
glVertex2f(173.0f, 295.0f);
glVertex2f(168.0f, 330.5f);
glEnd();


//left wing light
glColor3ub(255,0,0);
glBegin(GL_QUADS);
glVertex2f(169.0f, 300.0f);
glVertex2f(167.5f, 300.0f);
glVertex2f(167.5f, 295.0f);
glVertex2f(169.0f, 295.0f);

glEnd();

//right wings
  glColor3ub(245,155,0);
glBegin(GL_QUADS);
glVertex2f(165.0f, 343.0f);
glVertex2f(170.0f, 343.0f);
glVertex2f(173.0f, 363.0f);
glVertex2f(168.0f, 360.5f);
glEnd();

//right wing light
glColor3ub(255,0,0);
glBegin(GL_QUADS);
glVertex2f(169.0f, 363.0f);
glVertex2f(167.5f, 363.0f);
glVertex2f(167.5f, 358.0f);
glVertex2f(169.0f, 358.0f);

glEnd();

//tail
   glColor3ub(245,155,0);
glBegin(GL_QUADS);
glVertex2f(178.0f, 343.0f);
glVertex2f(183.0f, 343.0f);
glVertex2f(183.0f, 365.0f);
glVertex2f(181.0f, 365.5f);
glEnd();
glPopMatrix();
}

void speed_board_night()
 {


//deck
  glColor3ub(0,0,128);
  glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_speed_boat, 0.0f, 0.0f);//for move
glBegin(GL_QUADS);
glVertex2f(135.0f, -44.0f);
glVertex2f(167.0f, -60.0f);
glVertex2f(164.0f, -30.0f);
glVertex2f(140.0f, -10.0f);
glEnd();

 //windows
glColor3ub(255,255,255);
glBegin(GL_QUADS);
glVertex2f(137.0f, -39.0f);
glVertex2f(165.0f, -51.0f);
glVertex2f(163.0f, -34.0f);
glVertex2f(141.0f, -15.0f);
glEnd();

//window line

glColor3ub(0,0,128);
glLineWidth(8.0f);
glBegin(GL_LINES);
glVertex2f(145.0f, -52.0f);
glVertex2f(145.0f, -16.0f);

glVertex2f(151.0f, -52.0f);
glVertex2f(151.0f, -19.0f);

glVertex2f(157.0f, -52.0f);
glVertex2f(157.0f, -25.5f);
glEnd();
//middle body
  glColor3ub(141,162,2);
glBegin(GL_QUADS);
glVertex2f(132.0f, -85.0f);
glVertex2f(173.0f, -85.0f);
glVertex2f(177.0f, -60.0f);
glVertex2f(123.0f, -38.0f);
glEnd();

//bottom body
glColor3ub(0,0,128);
glBegin(GL_QUADS);
glVertex2f(135.0f, -105.0f);
glVertex2f(170.0f, -105.0f);
glVertex2f(173.0f, -85.0f);
glVertex2f(130.0f, -76.0f);
glEnd();


 glPopMatrix();
 }


void upper_container_night_text( float x, float y, char *st)
{
     glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_ship_container, 0.0f, 0.0f);//for move
    int l,i;
    l=strlen( st ); // see how many characters are in text string.

    glColor3f(0.0,0.0,0.0);

    glRasterPos2f( x, y); // location to start printing text
    for( i=0; i < l; i++) // loop until i is greater then l
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, st[i]);

    }
    glPopMatrix();


}
void left_container_night_text( float x, float y, char *st)
{
     glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_ship_container, 0.0f, 0.0f);//for move
    int l,i;
    l=strlen( st ); // see how many characters are in text string.

    glColor3f(1.0,1.0,1.0);

    glRasterPos2f( x, y); // location to start printing text
    for( i=0; i < l; i++) // loop until i is greater then l
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, st[i]);

    }
    glPopMatrix();


}
void right_container_night_text( float x, float y, char *st)
{
     glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_ship_container, 0.0f, 0.0f);//for move
    int l,i;
    l=strlen( st ); // see how many characters are in text string.

    glColor3f(0.0,0.0,0.0);
    glRasterPos2f( x, y); // location to start printing text
    for( i=0; i < l; i++) // loop until i is greater then l
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, st[i]);

    }
    glPopMatrix();


}

void ship_name_night_text( float x, float y, char *st)
{
     glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move_ship_container, 0.0f, 0.0f);//for move
    int l,i;
    l=strlen( st ); // see how many characters are in text string.

    glColor3f(0.0,0.0,0.0);
    glRasterPos2f( x, y); // location to start printing text
    for( i=0; i < l; i++) // loop until i is greater then l
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, st[i]);

    }
    glPopMatrix();


}
//NIGHT END

//all update start from here
//left windmill first blade
void update_blade_1 (int value) //id32
{
 angle_1+=2.0f;
glutPostRedisplay(); //Notify GLUT that the display has changed

 glutTimerFunc(20, update_blade_1, 0); //Notify GLUT to call update again in 25 milliseconds
}
//windmill second blade
void update_blade_2 (int value) //id33
 {

 angle_2+=2.0f;
glutPostRedisplay(); //Notify GLUT that the display has changed

 glutTimerFunc(20, update_blade_2, 0); //Notify GLUT to call update again in 25 milliseconds
}

//right windmill first blade
void update_right_blade_1 (int value) //id49
{
 right_angle_1+=2.0f;
glutPostRedisplay(); //Notify GLUT that the display has changed

 glutTimerFunc(20, update_right_blade_1, 0); //Notify GLUT to call update again in 25 milliseconds
}
//windmill second blade
void update_right_blade_2 (int value) //id50
 {

 right_angle_2+=2.0f;
glutPostRedisplay(); //Notify GLUT that the display has changed

 glutTimerFunc(20, update_right_blade_2, 0); //Notify GLUT to call update again in 25 milliseconds
}
//ship and container movement
void update_ship_container(int value) //id34
{
 move_ship_container += 0.5; //assume as moving speed
if(move_ship_container>190) //boundary for the positive x axis for last part of the box
{
move_ship_container = -120;//reappear the box
}
glutPostRedisplay();
glutTimerFunc(25, update_ship_container, 0);
}

//boat update
void update_boat(int value) //id35
{
 move_boat -= 0.5; //assume as moving speed
if(move_boat<-90) //boundary for the positive x negative for last part of the box
{
move_boat =150;//reappear the box
}
glutPostRedisplay();
glutTimerFunc(35, update_boat, 0);
}


//boat_1 update
void update_boat_1(int value) //id52
{
 move_boat_1 += 0.5; //assume as moving speed
if(move_boat_1>90) //boundary for the positive x negative for last part of the box
{
move_boat_1 =-150;//reappear the box
}
glutPostRedisplay();
glutTimerFunc(35, update_boat_1, 0);
}

//speed boat update
void update_speed_boat(int value) //id43
{
 move_speed_boat -= 0.5; //assume as moving speed
if(move_speed_boat<-177) //boundary for the positive x negative for last part of the box
{
move_speed_boat =77;//reappear the box
}
glutPostRedisplay();
glutTimerFunc(8, update_speed_boat, 0);
}

//airplane movement
void update_airplane(int value) //id36
{
 move_airplane -= 0.5; //assume as moving speed
if(move_airplane<-183) //boundary for the positive x negative for last part of the box
{
move_airplane = 45;//reappear the box
}
glutPostRedisplay();
glutTimerFunc(20, update_airplane, 0);
}


//left car movement
void update_left_car(int value) //id37
{
 move_left_car += 0.5; //assume as moving speed
if(move_left_car>195) //boundary for the positive x negative for last part of the box
{
move_left_car = -23;//reappear the box
}
glutPostRedisplay();
glutTimerFunc(10, update_left_car, 0);
}

//left car_1 movement
void update_left_car_1(int value) //id54
{
 move_left_car_1 += 0.5; //assume as moving speed
if(move_left_car_1>95) //boundary for the positive x negative for last part of the box
{
move_left_car_1 = -123;//reappear the box
}
glutPostRedisplay();
glutTimerFunc(10, update_left_car_1, 0);
}
//right car movement
void update_right_car(int value) //id38
{
 move_right_car -= 0.5; //assume as moving speed
if(move_right_car<-195) //boundary for the positive x negative for last part of the box
{
move_right_car = 24;//reappear the box
}
glutPostRedisplay();
glutTimerFunc(10, update_right_car, 0);
}

//right car_1 movement
void update_right_car_1(int value) //id53
{
 move_right_car_1 -= 0.5; //assume as moving speed
if(move_right_car_1<-95) //boundary for the positive x negative for last part of the box
{
move_right_car_1 = 124;//reappear the box
}
glutPostRedisplay();
glutTimerFunc(10, update_right_car_1, 0);
}

//move cloud
void update_cloud(int value) //id39
{
 move_cloud += 0.5; //assume as moving speed
if(move_cloud>185.5) //boundary for the positive x axis for last part of the box
{
move_cloud= -46;//reappear the box
}
glutPostRedisplay();
glutTimerFunc(50, update_cloud, 0);
}


//wave update

void update_wave(int value) //id40
{
 move_wave += 0.5; //assume as moving speed
if(move_wave>13) //water layer -35 |-45+13=-32
{
move_wave =-20;//-32+20=-52 then start form -52
}
glutPostRedisplay();
glutTimerFunc(40, update_wave, 0);
}

void identity_axis()
{
    glLoadIdentity(); //Reset the drawing perspective
    gluOrtho2D(0,200,-200,400); //resize the axis size
}


//FOR DAY
void display() {
glClear(GL_COLOR_BUFFER_BIT);
sky();

tree();
road();
water();
beach_bench();
wave();

first_blade();
second_blade();
windmill_stand();

right_first_blade();
right_second_blade();
right_windmill_stand();
sun();
cloud();

air_plane();
building_1();
building_2();
building_3();
building_4();
building_5();
building_6();
building_7();

bench();
lamppost();
left_car();
left_car_1();


right_car();
right_car_1();


umbrella();

boat();
boat_1();
speed_board();
ship();
containers();

upper_container_text(57.3,-75.0,text1);
left_container_text(49.0,-107.5,text2);
right_container_text(67.5,-107.5,text3);
ship_name_text(11.5,-137.0,text4);

glFlush(); // Render now
}




//FOR NIGHT

void display1() {
glClear(GL_COLOR_BUFFER_BIT);
//glClearColor(0.0f,0.0f,0.0f,0.5f);
sky_night();

tree_night();
road_night();
water_night();
beach_bench_night();
wave_night();

first_blade_night();
second_blade_night();
windmill_stand_night();

right_first_blade_night();
right_second_blade_night();
right_windmill_stand_night();
moon();
cloud_night();
air_plane_night();
building_1_night();
building_2_night();
building_3_night();
building_4_night();
building_5_night();
building_6_night();
building_7_night();

bench_night();
lamppost_night();
left_car_night();
left_car_1_night();
right_car_night();
right_car_1_night();
umbrella();

boat_night();
boat_1_night();
speed_board_night();
ship_night();
containers_night();
upper_container_night_text(57.3,-75.0,text1);
left_container_night_text(49.0,-107.5,text2);
right_container_night_text(67.5,-107.5,text3);
ship_name_night_text(11.5,-137.0,text4);
glFlush(); // Render now
}




void handleKeypress(unsigned char key, int x, int y)//id41
 {

	switch (key) {

case 'd':

    glutDisplayFunc(display);
glutPostRedisplay();
    break;
case 'n':
  glutDisplayFunc(display1);
glutPostRedisplay();
    break;

	}
}



int main(int argc, char** argv) {
glutInit(&argc, argv); // Initialize GLUT
glutCreateWindow("Seaport City View");
glutInitWindowSize(800, 400);// Set the window's initial width & height

glutDisplayFunc(display);// Register display callback handler for window re-paint
glutKeyboardFunc(handleKeypress);
identity_axis();

glutTimerFunc(25, update_ship_container, 0); //Add a timer
glutTimerFunc(20, update_blade_1, 0); //Add a timer
glutTimerFunc(20, update_blade_2, 0); //Add a timer
glutTimerFunc(20, update_right_blade_1, 0); //Add a timer
glutTimerFunc(20, update_right_blade_2, 0); //Add a timer
glutTimerFunc(20, update_airplane, 0);
glutTimerFunc(10, update_left_car, 0);
glutTimerFunc(10, update_left_car_1, 0);


glutTimerFunc(10, update_right_car, 0);
glutTimerFunc(10, update_right_car_1, 0);
glutTimerFunc(50, update_cloud, 0);

glutTimerFunc(40, update_wave, 0);
glutTimerFunc(35, update_boat, 0);
glutTimerFunc(35, update_boat_1, 0);
glutTimerFunc(8, update_speed_boat, 0);
glutMainLoop(); // Enter the event-processing loop
return 0;
}
