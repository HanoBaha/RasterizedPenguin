#include "RPTypes.h"
#include <string>

class Mesh {
    public:
        Mesh(const std::string path_to_file);

        void setPos(const float3 newPos);
        float3 getPos() const;
        void movePos(const float3 displacement);

        void setRot(const float2 newAngle);
        void rotate(const float2 Angle, const float3 axe);
        angle2 getAngle() const;

    private:
        Triangle* tris;
        Vertex* vertices;
        float2 angle;
        float3 barycentre;
};