#include <iostream>

using namespace std;

struct Pose3D
{
    double x,y,z,alpha,beta,gamma;

    Pose3D & initPose(double a, double b, double g,double dest_x, double dest_y, double dest_z);
    Pose3D & rotar(double a, double b, double g);
    Pose3D & mover(double dest_x, double dest_y, double dest_z);
};

Pose3D & Pose3D::initPose(double a, double b, double g,double dest_x, double dest_y, double dest_z)
{
    x = dest_x;
    y = dest_y;
    z = dest_z;
    alpha = a;
    beta = b;
    gamma = g;

    return *this;
}


Pose3D & Pose3D::rotar(double a, double b, double g)
{
    alpha += a;
    beta += b;
    gamma += g;

    return *this;
}

Pose3D & Pose3D::mover(double dest_x, double dest_y, double dest_z)
{
    x += dest_x;
    y += dest_y;
    z += dest_z;

    return *this;
}


void print (Pose3D robot)
{
    cout << "El robot está en la posicion: (" << robot.x << "," << robot.y << "," << robot.z << ")" << endl;
    cout << "Con un angulo: (" << robot.alpha << "," << robot.beta << "," << robot.gamma << ")" << endl;

}


int main(int argc, char *argv[])
{
    Pose3D quadcopter;
    quadcopter.initPose(0, 0, 0, 0, 0, 0);
    print(quadcopter);
    quadcopter.mover(3, 5, 2);
    quadcopter.rotar(3.5, -1, 2.2);
    print(quadcopter);

}
